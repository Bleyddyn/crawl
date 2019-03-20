/**
 * @file
 * @brief Functions for corpse butchering & bottling.
 **/

#include "AppHdr.h"

#include "bloodspatter.h"
#include "confirm-butcher-type.h"
#include "command.h"
#include "delay.h"
#include "env.h"
#include "food.h"
#include "god-conduct.h"
#include "item-name.h"
#include "item-prop.h"
#include "item-status-flag-type.h"
#include "items.h"
#include "libutil.h"
#include "macro.h"
#include "makeitem.h"
#include "message.h"
#include "options.h"
#include "output.h"
#include "prompt.h"
#include "rot.h"
#include "stash.h"
#include "stepdown.h"
#include "stringutil.h"

#include "mon-util.h"
#include "monster-type.h"

static int _corpse_level(const item_def &item)
{
    return item.freshness;
}

bool has_learned_shape(monster_type mtype)
{
    return find(begin(you.shapes), end(you.shapes), mtype) != end(you.shapes);
}

bool has_open_shape_slots()
{
    return has_learned_shape(MONS_PROGRAM_BUG);
}

int count_shapes()
{
    int count = 0;
    for(monster_type mtype: you.shapes)
    {
        if ( MONS_PROGRAM_BUG != mtype )
        {
            ++count;
        }
    }
    return count;
}

void list_shapes()
{
    bool empty = true;
    for(monster_type mtype: you.shapes)
    {
        if ( MONS_PROGRAM_BUG != mtype )
        {
            string name = mons_type_name(mtype, DESC_PLAIN); // This gave me "Sonja" instead of "Kobold"
            mprf("%s\n", name.c_str());
            empty = false;
        }
    }
    if(empty)
        mprf("You haven't learned any shapes yet.");
}

bool learn_shape(item_def* specific_corpse)
{
    if( you.species != SP_SHAPESHIFTER )
        return false;

    if (you.visible_igrd(you.pos()) == NON_ITEM)
    {
        mpr("There isn't anything here!");
        list_shapes();
        return false;
    }

    vector<item_def *> all_corpses;

    if (specific_corpse)
        all_corpses.push_back(specific_corpse); // doesn't check position
    else
        for (stack_iterator si(you.pos(), true); si; ++si)
            if (si->is_type(OBJ_CORPSES, CORPSE_BODY))
                all_corpses.push_back(&*si);

    if (all_corpses.empty())
    {
        mprf("There are no corpses here to learn from.");
        list_shapes();
        return false;
    }

    if (!has_open_shape_slots())
    {
        list_shapes();
        mprf("You've already learned as many shapes as you can.");
        return false;
    }

    typedef pair<item_def *, int> corpse_quality;
    vector<corpse_quality> corpse_qualities;

    for (item_def *c : all_corpses)
        corpse_qualities.emplace_back(c, _corpse_level(*c));

    stable_sort(begin(corpse_qualities), end(corpse_qualities), greater_second<corpse_quality>());

    // Butcher pre-chosen corpse, if found, or if there is only one corpse.
    if (specific_corpse
        || corpse_qualities.size() == 1
                                && Options.confirm_butcher != CONFIRM_ALWAYS
        || Options.confirm_butcher == CONFIRM_NEVER)
    {
        if( !specific_corpse )
            specific_corpse = corpse_qualities[0].first;
        mprf("Started learning");
        //mprf("mtype: %d", specific_corpse->orig_monnum );
        //mprf("mon_type: %d", specific_corpse->mon_type );
        monster_type mtype = static_cast<monster_type>(specific_corpse->orig_monnum);
        monsterentry *mon = get_monster_data( mtype );
        mtype = mon->genus; // Gives: Snake
        mtype = mon->species; // Gives: Adder
        string name = mons_type_name(mtype, DESC_PLAIN); // This gave me "Sonja" instead of "Kobold"

        if (has_learned_shape(mtype))
        {
            mprf("You've already learned the %s shape.", name.c_str());
            list_shapes();
            return false;
        }

        mprf("%s HD/AC/EV: %d/%d/%d", name.c_str(), mon->HD, mon->AC, mon->ev );
        resists_t res = get_mons_class_resists(mtype);
        if( MR_NO_FLAGS != res )
        {
            string restr = "";
            if( res & MR_RES_POISON ) restr += "Poison, ";
            if( res & MR_RES_ACID ) restr += "Acid, ";
            if( res & MR_RES_COLD ) restr += "Cold, ";
            if( res & MR_RES_FIRE ) restr += "Fire, ";
            if( res & MR_RES_ELEC ) restr += "Electricity, ";
            if( res & MR_RES_ROTTING ) restr += "Rotting, ";
            mprf("Resists: %s", restr.c_str() );
        }
        item_was_destroyed(*specific_corpse);
        destroy_item(specific_corpse->index());
        //int c = max_corpse_chunks(mtype);
        lessen_hunger(125, true, -1);
        for (size_t i = 0; i < you.shapes.size(); ++i)
        {
            if (you.shapes[i] == MONS_PROGRAM_BUG)
            {
                you.shapes[i] = mtype;
                break;
            }
        }
/*
        mon-data.h:    MR_RES_POISON | MR_RES_ACID,
        mon-data.h:    MR_RES_POISON | mrd(MR_RES_ACID, 3),
        mon-data.h:    MR_RES_COLD | mrd(MR_RES_ACID, 3),
        mon-data.h:        | MR_RES_ACID, 3) | MR_RES_STICKY_FLAME,
        mon-data.h:    mrd(MR_RES_COLD | MR_RES_ELEC | MR_RES_ACID | MR_RES_FIRE, 3)
        mon-data.h:        | MR_RES_ROTTING | MR_RES_ACID, 4) | MR_RES_STICKY_FLAME,

struct monsterentry
{
    short mc;            // monster number

    char basechar;
    colour_t colour;
    const char *name;

    monclass_flags_t bitfields;
    resists_t resists;

    // Multiplier for calculated monster XP value; see exper_value() for use.
    int8_t exp_mod;

    monster_type genus,         // "team" the monster plays for
                 species;       // corpse type of the monster

    mon_holy_type holiness;

    short resist_magic;  // (positive sets value, negative is relative to hd)

    // max damage in a turn is total of these four?
    mon_attack_def attack[MAX_NUM_ATTACKS];

    /// Similar to player level; used for misc purposes.
    int HD;
    /// Average hp; multiplied by 10 for precision.
    int avg_hp_10x;

    int8_t AC; // armour class
    int8_t ev; // evasion
    int sec;   // actually mon_spellbook_type
    corpse_effect_type corpse_thingy;
    shout_type         shouts;
    mon_intel_type     intel;
    habitat_type     habitat;
    int8_t           speed;        // How quickly speed_increment increases
    mon_energy_usage energy_usage; // And how quickly it decreases
    mon_itemuse_type gmon_use;
    size_type size;
    mon_body_shape shape;
    mon_type_tile_info tile;
    tileidx_t corpse_tile; // XXX: ideally this would be autogenerated...
};
*/
        return true;
    }

/* From: mon-death.cc
    monster_type mtype = mons.type;
    monster_type corpse_class = mons_species(mtype);

    ASSERT(!invalid_monster_type(mtype));
    ASSERT(!invalid_monster_type(corpse_class));

    if (mons_genus(mtype) == MONS_DRACONIAN
        || mons_genus(mtype) == MONS_DEMONSPAWN)
    {
        if (mons.type == MONS_TIAMAT)
            corpse_class = MONS_DRACONIAN;
        else
            corpse_class = draco_or_demonspawn_subspecies(mons);
    }

    if (mons.props.exists(ORIGINAL_TYPE_KEY))
    {
        // Shapeshifters too.
        mtype = (monster_type) mons.props[ORIGINAL_TYPE_KEY].get_int();
        corpse_class = mons_species(mtype);
    }

    if (!mons_class_can_leave_corpse(corpse_class))
        return false;

    corpse.base_type      = OBJ_CORPSES;
    corpse.mon_type       = corpse_class;
    corpse.sub_type       = CORPSE_BODY;
    corpse.freshness      = FRESHEST_CORPSE;  // rot time
    corpse.quantity       = 1;
    corpse.rnd            = 1 + random2(255);
    corpse.orig_monnum    = mtype;
*/
    // Now pick what you want to butcher. This is only a problem
    // if there are several corpses on the square.
    return false;
/*
    bool butchered_any = false;
#ifdef TOUCH_UI
    vector<const item_def*> meat;
    for (const corpse_quality &entry : corpse_qualities)
        meat.push_back(entry.first);

    vector<SelItem> selected =
        select_items(meat, "Choose a corpse to learn from",
                     false, MT_ANY, _butcher_menu_title);
    redraw_screen();
    for (SelItem sel : selected)
        if (_start_butchering(const_cast<item_def &>(*sel.item)))
            butchered_any = true;
#else
    item_def* to_eat = nullptr;
    bool all_done = false;
    for (auto &entry : corpse_qualities)
    {
        item_def * const it = entry.first;
        to_eat = nullptr;

        {
            string corpse_name = it->name(DESC_A);

            // We don't need to check for undead because
            // * Mummies can't eat.
            // * Ghouls relish the bad things.
            // * Vampires won't bottle bad corpses.
            if (you.undead_state() == US_ALIVE)
                corpse_name = menu_colour_item_name(*it, DESC_A);

            bool repeat_prompt = false;
            // Shall we butcher this corpse?
            do
            {
                const bool can_bottle =
                    can_bottle_blood_from_corpse(it->mon_type);
                mprf(MSGCH_PROMPT,
                     "%s %s? [(y)es/(n)o/(a)ll/(q)uit/?]",
                     can_bottle ? "Bottle" : "Butcher",
                     corpse_name.c_str());
                repeat_prompt = false;

                switch (toalower(getchm(KMC_CONFIRM)))
                {
                case 'a':
                case 'c': // legacy
                case 'e': // legacy
                    butcher_all = true;
                // fallthrough
                case 'y':
                case 'd': // ??
                    to_eat = it;
                    break;

                case 'q':
                CASE_ESCAPE
                    canned_msg(MSG_OK);
                    all_done = true;
                    break;

                case '?':
                    show_butchering_help();
                    clear_messages();
                    redraw_screen();
                    repeat_prompt = true;
                    break;

                default:
                    break;
                }
            }
            while (repeat_prompt && !all_done);
        }

        if (to_eat && _start_butchering(*to_eat))
            butchered_any = true;
        if (all_done)
            break;
    }

    // No point in displaying this if the player pressed 'a' above.
    if (!to_eat && !butcher_all && !all_done)
        mprf("There isn't anything else to %s here.", butcher_verb);
#endif

    //XXX: this assumes that we're not being called from a delay ourselves.
    // It's not a problem in the case of macros, though, because
    // delay.cc:_push_delay should handle them OK.
    if (butchered_any)
        handle_delay();

    return;
    */
}

monster_type choose_shape(monster_type current_shape)
{
    if(you.shapes.empty())
    {
        mprf("You haven't learned any shapes yet.");
        return current_shape;
    }

    while (true)
    {
        clear_messages();

        int index = 0;
        for(monster_type mtype: you.shapes)
        {
            if ( MONS_PROGRAM_BUG != mtype )
            {
                string name = mons_type_name(mtype, DESC_PLAIN);
                const char letter = index_to_letter(index);
                mprf("(%c) %s\n", letter, name.c_str());
                ++index;
            }
        }

        string shortcuts = "(";
        {
            vector<string> segs;
            segs.emplace_back("? - help");

            shortcuts += comma_separated_line(segs.begin(), segs.end(),
                                              ", ", ", ");
            shortcuts += ") ";
        }

        mprf(MSGCH_PROMPT, "Change to which form? %s",
             shortcuts.c_str());

        int keyin = get_ch();
        switch (keyin)
        {
        CASE_ESCAPE
            return current_shape;
        case '?':
            //show_interlevel_travel_branch_help();
            redraw_screen();
            break;
        default:
            int idx = letter_to_index(keyin);
            if( idx < you.shapes.size() )
                return you.shapes[idx];
            return current_shape;
        }
    }
    return current_shape;
}
