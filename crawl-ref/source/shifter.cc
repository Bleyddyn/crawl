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

bool kiku_take_corpse()
{
    for (int i = you.visible_igrd(you.pos()); i != NON_ITEM; i = mitm[i].link)
    {
        item_def &item(mitm[i]);

        if (item.base_type != OBJ_CORPSES || item.sub_type != CORPSE_BODY)
            continue;
        item_was_destroyed(item);
        destroy_item(i);
        return true;
    }

    return false;
}

void butchery(item_def* specific_corpse)
{
    if( you.species == SP_SHIFTER )
        return;

    if (you.visible_igrd(you.pos()) == NON_ITEM)
    {
        mpr("There isn't anything here!");
        return;
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
        return;
    }

    typedef pair<item_def *, int> corpse_quality;
    vector<corpse_quality> corpse_qualities;

    for (item_def *c : edible_corpses)
        if (!is_forbidden_food(*c))
            corpse_qualities.emplace_back(c, _corpse_quality(*c));

    if (corpse_qualities.empty())
    {
        if (edible_corpses.size() == 1)
        {
            mprf("It would be a sin to %s the %s!", butcher_verb,
                                edible_corpses[0]->name(DESC_THE).c_str());
        }
        else
        {
            mprf("It would be a sin to %s any of the %scorpses here!",
                butcher_verb,
                (seen_inedible ? (bottle_blood ? "bloody " : "edible ") : ""));
        }
        return;
    }

    stable_sort(begin(corpse_qualities), end(corpse_qualities),
                                            greater_second<corpse_quality>());


    // Butcher pre-chosen corpse, if found, or if there is only one corpse.
    if (specific_corpse
        || corpse_qualities.size() == 1
                                && Options.confirm_butcher != CONFIRM_ALWAYS
        || Options.confirm_butcher == CONFIRM_NEVER)
    {
        mprf("Started learning");
        return;
    }

    // Now pick what you want to butcher. This is only a problem
    // if there are several corpses on the square.
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
}
