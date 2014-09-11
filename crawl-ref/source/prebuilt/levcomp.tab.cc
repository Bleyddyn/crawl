/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "levcomp.ypp" /* yacc.c:339  */



#include "AppHdr.h"
#include <map>
#include <algorithm>
#include "end.h"
#include "l_defs.h"
#include "mapdef.h"
#include "maps.h"
#include "stringutil.h"

#define YYERROR_VERBOSE 1
#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 0

int yylex();

extern int yylineno;

static NORETURN void yyerror(const char *e)
{
    if (strstr(e, lc_desfile.c_str()) == e)
        fprintf(stderr, "%s\n", e);
    else
        fprintf(stderr, "%s:%d: %s\n", lc_desfile.c_str(), yylineno, e);
    // Bail bail bail.
    end(1);
}


#line 98 "levcomp.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "levcomp.tab.h".  */
#ifndef YY_YY_LEVCOMP_TAB_H_INCLUDED
# define YY_YY_LEVCOMP_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEFAULT_DEPTH = 258,
    SHUFFLE = 259,
    CLEAR = 260,
    SUBST = 261,
    TAGS = 262,
    KFEAT = 263,
    KITEM = 264,
    KMONS = 265,
    KMASK = 266,
    KPROP = 267,
    NAME = 268,
    DEPTH = 269,
    ORIENT = 270,
    PLACE = 271,
    CHANCE = 272,
    WEIGHT = 273,
    MONS = 274,
    ITEM = 275,
    MARKER = 276,
    COLOUR = 277,
    PRELUDE = 278,
    MAIN = 279,
    VALIDATE = 280,
    VETO = 281,
    EPILOGUE = 282,
    NSUBST = 283,
    WELCOME = 284,
    LFLAGS = 285,
    BFLAGS = 286,
    LFLOORCOL = 287,
    LROCKCOL = 288,
    LFLOORTILE = 289,
    LROCKTILE = 290,
    FTILE = 291,
    RTILE = 292,
    TILE = 293,
    SUBVAULT = 294,
    FHEIGHT = 295,
    DESC = 296,
    ORDER = 297,
    COMMA = 298,
    COLON = 299,
    PERC = 300,
    DASH = 301,
    CHARACTER = 302,
    NUMBER = 303,
    STRING = 304,
    MAP_LINE = 305,
    MONSTER_NAME = 306,
    ITEM_INFO = 307,
    LUA_LINE = 308
  };
#endif
/* Tokens.  */
#define DEFAULT_DEPTH 258
#define SHUFFLE 259
#define CLEAR 260
#define SUBST 261
#define TAGS 262
#define KFEAT 263
#define KITEM 264
#define KMONS 265
#define KMASK 266
#define KPROP 267
#define NAME 268
#define DEPTH 269
#define ORIENT 270
#define PLACE 271
#define CHANCE 272
#define WEIGHT 273
#define MONS 274
#define ITEM 275
#define MARKER 276
#define COLOUR 277
#define PRELUDE 278
#define MAIN 279
#define VALIDATE 280
#define VETO 281
#define EPILOGUE 282
#define NSUBST 283
#define WELCOME 284
#define LFLAGS 285
#define BFLAGS 286
#define LFLOORCOL 287
#define LROCKCOL 288
#define LFLOORTILE 289
#define LROCKTILE 290
#define FTILE 291
#define RTILE 292
#define TILE 293
#define SUBVAULT 294
#define FHEIGHT 295
#define DESC 296
#define ORDER 297
#define COMMA 298
#define COLON 299
#define PERC 300
#define DASH 301
#define CHARACTER 302
#define NUMBER 303
#define STRING 304
#define MAP_LINE 305
#define MONSTER_NAME 306
#define ITEM_INFO 307
#define LUA_LINE 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 34 "levcomp.ypp" /* yacc.c:355  */

    int i;
    double f;
    const char *text;
    map_chance_pair chance;

#line 251 "levcomp.tab.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LEVCOMP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "levcomp.tab.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    64,    67,    68,    71,    77,    78,
      81,    91,   112,   113,   116,   117,   120,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   185,   187,   188,   191,
     196,   198,   199,   202,   207,   209,   210,   213,   218,   220,
     221,   224,   229,   231,   232,   235,   240,   242,   243,   246,
     251,   252,   260,   261,   269,   270,   278,   279,   287,   288,
     296,   299,   300,   303,   311,   320,   323,   324,   327,   336,
     345,   354,   387,   390,   391,   399,   400,   408,   409,   418,
     419,   428,   430,   431,   434,   443,   446,   447,   450,   459,
     462,   463,   466,   475,   478,   479,   482,   492,   493,   496,
     505,   508,   509,   512,   521,   524,   525,   528,   537,   538,
     541,   542,   545,   553,   554,   557,   558,   561,   570,   579,
     588,   596,   597,   606,   607,   610,   611,   613,   617,   622,
     627,   634,   642,   651,   653,   654,   656,   663,   671,   672,
     681,   690,   693,   694,   697,   706,   709,   710,   713
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFAULT_DEPTH", "SHUFFLE", "CLEAR",
  "SUBST", "TAGS", "KFEAT", "KITEM", "KMONS", "KMASK", "KPROP", "NAME",
  "DEPTH", "ORIENT", "PLACE", "CHANCE", "WEIGHT", "MONS", "ITEM", "MARKER",
  "COLOUR", "PRELUDE", "MAIN", "VALIDATE", "VETO", "EPILOGUE", "NSUBST",
  "WELCOME", "LFLAGS", "BFLAGS", "LFLOORCOL", "LROCKCOL", "LFLOORTILE",
  "LROCKTILE", "FTILE", "RTILE", "TILE", "SUBVAULT", "FHEIGHT", "DESC",
  "ORDER", "COMMA", "COLON", "PERC", "DASH", "CHARACTER", "NUMBER",
  "STRING", "MAP_LINE", "MONSTER_NAME", "ITEM_INFO", "LUA_LINE", "$accept",
  "file", "definitions", "definition", "error_seq", "def", "defdepth",
  "level", "map_specs", "map_spec", "name", "metaline", "global_lua",
  "global_lua_lines", "global_lua_line", "main_lua", "main_lua_lines",
  "main_lua_line", "validate_lua", "validate_lua_lines",
  "validate_lua_line", "veto_lua", "veto_lua_lines", "veto_lua_line",
  "prelude_lua", "prelude_lua_lines", "prelude_lua_line", "epilogue_lua",
  "epilogue_lua_lines", "epilogue_lua_line", "kfeat", "kmons", "kitem",
  "kmask", "kprop", "shuffle", "shuffle_specifiers", "shuffle_spec",
  "clear", "tags", "tagstrings", "tagstring", "lflags", "bflags", "marker",
  "colour", "lfloorcol", "lrockcol", "lfloortile", "lrocktile", "fheight",
  "fheight_specifiers", "fheight_specifier", "ftile", "ftile_specifiers",
  "ftile_specifier", "rtile", "rtile_specifiers", "rtile_specifier",
  "tile", "tile_specifiers", "tile_specifier", "colour_specifiers",
  "colour_specifier", "nsubst", "nsubst_specifiers", "nsubst_spec",
  "subst", "subst_specifiers", "subst_spec", "items", "item_specifiers",
  "item_specifier", "mons", "mnames", "mname", "place", "desc", "order",
  "depth", "chance", "chance_specifiers", "chance_roll", "chance_num",
  "chance_specifier", "weight", "weight_specifiers", "weight_specifier",
  "orientation", "welcome", "map_def", "map_lines", "map_line", "subvault",
  "subvault_specifiers", "subvault_specifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -132

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-132)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,     9,    36,  -132,    -9,    -5,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,    -8,    -4,  -132,  -132,    -2,
      -1,     0,  -132,     2,     4,     5,     6,     7,     8,    10,
      12,    14,    15,    13,    16,    17,    18,  -132,  -132,  -132,
    -132,  -132,    19,    20,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    35,    33,    37,    32,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
      38,  -132,  -132,  -132,    22,  -132,  -132,  -132,  -132,    44,
      40,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,    -3,
      47,  -132,    42,  -132,    43,    50,  -132,  -132,  -132,    51,
    -132,    52,  -132,  -132,  -132,    53,  -132,    -6,    45,    46,
      48,    49,  -132,    54,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,    57,  -132,  -132,    60,  -132,  -132,    61,
    -132,  -132,    62,  -132,  -132,    63,  -132,  -132,  -132,  -132,
      -2,     0,  -132,  -132,    59,  -132,    14,  -132,  -132,    15,
      13,    16,    18,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,    19,    29,    30,    31,    35,    33,  -132,
    -132,    34,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,    57,     4,     5,     8,
       6,    12,     9,    10,    16,    56,    11,    59,    58,     0,
       0,     0,    96,    80,    84,    82,    86,    88,   151,   168,
       0,   154,     0,   143,   138,     0,     0,    73,    61,    65,
      69,    77,     0,     0,     0,     0,   103,   105,   107,   109,
       0,     0,     0,     0,     0,     0,     0,     7,   174,    55,
      13,    14,    50,    52,    53,    51,    54,    43,    45,    44,
      46,    47,    38,    39,    40,    41,    42,    27,    30,    31,
      32,    33,    34,    48,    35,    36,    37,    29,    28,    26,
      25,    17,    18,    19,    20,    21,    22,    23,    24,    15,
     171,   173,    49,    93,    90,    91,    94,   137,   134,   135,
      95,    81,    85,    83,    87,    89,   152,   169,   148,   158,
     153,   160,   162,   156,   167,   163,   165,   147,   144,   146,
     142,   139,   141,   101,   129,   102,   127,    72,    60,    64,
      68,    76,   133,   130,   131,   170,    99,   100,   104,   106,
     108,   110,   118,   115,   116,   122,   119,   120,   126,   123,
     124,   178,   175,   176,   114,   111,   112,   149,   150,   172,
       0,     0,    98,    97,     0,   157,     0,   161,   166,     0,
       0,     0,     0,    75,    74,    63,    62,    67,    66,    71,
      70,    79,    78,     0,     0,     0,     0,     0,     0,    92,
     136,   158,   159,   155,   164,   145,   140,   128,   132,   117,
     121,   125,   177,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -112,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -131,  -132,  -132,  -116,  -132,  -132,   -87,  -132,
    -132,   -86,  -132,   -73,  -132,  -132,   -82,  -132,   -59,  -132,
    -132,  -132,   -68,  -132,   -66,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,   -58,  -132,   -61,  -132,  -132,   -62,  -132,  -132,
    -132,  -132,    21,  -132,  -132,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    59,     8,     9,    10,    16,    60,
      11,    61,    12,    15,    18,    62,   138,   186,    63,   139,
     188,    64,   140,   190,    65,   137,   184,    66,   141,   192,
      67,    68,    69,    70,    71,    72,   104,   105,    73,    74,
     110,   173,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   165,   166,    84,   153,   154,    85,   156,   157,    86,
     159,   160,   135,   136,    87,   143,   144,    88,   108,   109,
      89,   131,   132,    90,   128,   129,    91,    92,    93,    94,
      95,   120,   121,   122,   123,    96,   125,   126,    97,    98,
      99,   100,   101,   102,   162,   163
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    20,    21,    22,    23,    24,    25,    26,    27,     3,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     4,
      13,   174,   175,    57,    14,    17,    58,   183,   106,     5,
     103,   111,   107,   112,   113,   114,   115,   116,   199,   117,
       6,   118,   119,   124,   127,   170,   133,   213,   130,   145,
     134,   142,   146,   147,   148,   149,   150,   151,   209,   175,
     168,   152,   155,   158,   161,   164,   167,   171,    58,   172,
     176,   177,   178,   179,   180,   181,   182,   193,   185,   187,
     194,   189,   191,   195,   196,   197,   198,   201,   210,   207,
     211,   208,   200,   206,   205,   203,   202,   204,   212,     0,
       0,   169
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
      49,    44,    45,    47,    49,    53,    50,    53,    49,    13,
      52,    49,    52,    49,    49,    49,    49,    49,   170,    49,
      24,    49,    48,    48,    51,    43,    49,   198,    52,    49,
      52,    52,    49,    49,    49,    49,    49,    49,   194,    45,
      48,    52,    52,    52,    49,    52,    49,    43,    50,    49,
      43,    49,    49,    43,    43,    43,    43,    43,    53,    53,
      43,    53,    53,    43,    43,    43,    43,    48,   195,   182,
     196,   193,   171,   181,   180,   176,   174,   179,   197,    -1,
      -1,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     3,    13,    24,    57,    59,    60,
      61,    64,    66,    49,    49,    67,    62,    53,    68,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    47,    50,    58,
      63,    65,    69,    72,    75,    78,    81,    84,    85,    86,
      87,    88,    89,    92,    93,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   107,   110,   113,   118,   121,   124,
     127,   130,   131,   132,   133,   134,   139,   142,   143,   144,
     145,   146,   147,    52,    90,    91,    49,    52,   122,   123,
      94,    49,    49,    49,    49,    49,    49,    49,    49,    48,
     135,   136,   137,   138,    48,   140,   141,    51,   128,   129,
      52,   125,   126,    49,    52,   116,   117,    79,    70,    73,
      76,    82,    52,   119,   120,    49,    49,    49,    49,    49,
      49,    49,    52,   108,   109,    52,   111,   112,    52,   114,
     115,    49,   148,   149,    52,   105,   106,    49,    48,   146,
      43,    43,    49,    95,    44,    45,    43,    49,    49,    43,
      43,    43,    43,    53,    80,    53,    71,    53,    74,    53,
      77,    53,    83,    43,    43,    43,    43,    43,    43,    91,
     122,    48,   136,   138,   141,   128,   126,   117,   120,   109,
     112,   115,   149,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    67,    67,    68,
      69,    70,    70,    71,    72,    73,    73,    74,    75,    76,
      76,    77,    78,    79,    79,    80,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    90,    90,    91,    92,    93,    94,    94,    95,    96,
      97,    98,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   108,   108,   109,   110,
     111,   111,   112,   113,   114,   114,   115,   116,   116,   117,
     118,   119,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   129,   130,   131,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   140,   140,   141,   141,   142,   142,
     143,   144,   145,   145,   146,   147,   148,   148,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     2,     1,
       2,     0,     2,     1,     2,     0,     2,     1,     2,     0,
       2,     1,     2,     0,     2,     1,     2,     0,     2,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     3,     1,     2,     2,     0,     2,     1,     2,
       2,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     3,     1,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     1,     3,     1,
       2,     1,     3,     1,     2,     1,     3,     1,     1,     2,
       3,     1,     1,     1,     2,     3,     1,     1,     2,     2,
       2,     1,     2,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     2,     3,     1,     2,     1,     1,     2,
       2,     1,     2,     1,     1,     2,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 60 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1523 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1529 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1535 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1541 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1547 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "levcomp.ypp" /* yacc.c:1646  */
    {
                    yyerror("Unexpected character sequence.");
                }
#line 1555 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1561 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 78 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1567 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 82 "levcomp.ypp" /* yacc.c:1646  */
    {
                    dgn_reset_default_depth();
                    string err = dgn_set_default_depth((yyvsp[0].text));
                    if (!err.empty())
                        yyerror(make_stringf("Bad default-depth: %s (%s)",
                                (yyvsp[0].text), err.c_str()).c_str());
                }
#line 1579 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.set_file(lc_desfile);

                    if (lc_run_global_prelude && !lc_global_prelude.empty())
                    {
                        lc_global_prelude.set_file(lc_desfile);
                        lc_run_global_prelude = false;
                        if (lc_global_prelude.load_call(dlua, NULL))
                            yyerror( lc_global_prelude.orig_error().c_str() );
                    }

                    string err =
                        lc_map.validate_map_def(lc_default_depths);
                    dump_map(lc_map);
                    if (!err.empty())
                        yyerror(err.c_str());
                    add_parsed_map(lc_map);
                }
#line 1602 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1608 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1614 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1620 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1626 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.init();
                    lc_map.name = (yyvsp[0].text);

                    map_load_info_t::const_iterator i =
                        lc_loaded_maps.find((yyvsp[0].text));

                    if (i != lc_loaded_maps.end())
                    {
                        yyerror(
                            make_stringf(
                                "Map named '%s' already loaded at %s:%d",
                                (yyvsp[0].text),
                                i->second.filename.c_str(),
                                i->second.lineno).c_str() );
                    }

                    lc_map.place_loaded_from =
                        map_file_place(lc_desfile, yylineno);
                    lc_loaded_maps[(yyvsp[0].text)] = lc_map.place_loaded_from;
                }
#line 1652 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1658 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 185 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1664 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1670 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 188 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1676 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_global_prelude.add(yylineno, (yyvsp[0].text));
                }
#line 1684 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 196 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1690 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1696 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 199 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1702 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(yylineno, (yyvsp[0].text));
                }
#line 1710 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 207 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1716 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 209 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1722 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 210 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1728 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 214 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.validate.add(yylineno, (yyvsp[0].text));
                }
#line 1736 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1742 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 220 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1748 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1754 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 225 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.veto.add(yylineno, (yyvsp[0].text));
                }
#line 1762 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 229 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1768 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 231 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1774 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 232 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1780 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 236 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.prelude.add(yylineno, (yyvsp[0].text));
                }
#line 1788 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 240 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1794 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 242 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1800 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 243 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1806 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 247 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.epilogue.add(yylineno, (yyvsp[0].text));
                }
#line 1814 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 251 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1820 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kfeat(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1831 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 260 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1837 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 262 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kmons(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1848 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1854 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 271 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kitem(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1865 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 278 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1871 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 280 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kmask(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1882 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 287 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 1888 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 289 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kprop(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1899 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 296 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1905 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 304 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("shuffle(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1916 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 312 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("clear(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1927 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 320 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 1933 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 328 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("tags(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1944 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 337 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lflags(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1955 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 346 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("bflags(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1966 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 355 "levcomp.ypp" /* yacc.c:1646  */
    {
                    string key, arg;
                    int sep(0);

                    const string err =
                      mapdef_split_key_item((yyvsp[0].text), &key, &sep, &arg);

                    if (!err.empty())
                      yyerror(err.c_str());

                    // Special treatment for Lua markers.
                    if (arg.find("lua:") == 0)
                    {
                       arg = arg.substr(4);
                       lc_map.main.add(
                         yylineno,
                         make_stringf("lua_marker(\"%s\", function () "
                                      "  return %s "
                                      "end)",
                                      quote_lua_string(key).c_str(),
                                      arg.c_str()));
                    }
                    else
                    {
                       lc_map.main.add(
                         yylineno,
                         make_stringf("marker(\"%s\")",
                                      quote_lua_string((yyvsp[0].text)).c_str()));
                    }
                }
#line 2001 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 387 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2007 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 390 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2013 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 392 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lfloorcol(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2024 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 399 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2030 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 401 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lrockcol(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2041 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 408 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2047 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 410 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lfloortile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2058 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 418 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2064 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 420 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lrocktile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2075 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 435 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("fheight(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2086 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 451 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("ftile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2097 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 467 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("rtile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2108 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 483 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("tile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2119 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 492 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2125 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 493 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2131 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 497 "levcomp.ypp" /* yacc.c:1646  */
    {
                      lc_map.main.add(
                          yylineno,
                          make_stringf("colour(\"%s\")",
                              quote_lua_string((yyvsp[0].text)).c_str()));
                  }
#line 2142 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 505 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2148 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 508 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2154 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 509 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2160 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 513 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("nsubst(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2171 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 521 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2177 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 529 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("subst(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2188 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 537 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2194 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 538 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2200 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 546 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("item(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2211 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 553 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2217 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 554 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2223 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 562 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("mons(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2234 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 571 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("place(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2245 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 580 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("desc(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2256 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 589 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("order(%d)", int((yyvsp[0].f))));
                }
#line 2266 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 596 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2272 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 598 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("depth(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2283 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 606 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2289 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 607 "levcomp.ypp" /* yacc.c:1646  */
    { }
#line 2295 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 614 "levcomp.ypp" /* yacc.c:1646  */
    {
                    (yyval.i) = (yyvsp[-1].f) * 100;
                }
#line 2303 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 618 "levcomp.ypp" /* yacc.c:1646  */
    {
                    (yyval.i) = (yyvsp[0].f);
                }
#line 2311 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 623 "levcomp.ypp" /* yacc.c:1646  */
    {
                    (yyval.chance).priority = (yyvsp[-2].f);
                    (yyval.chance).chance   = (yyvsp[0].i);
                }
#line 2320 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 628 "levcomp.ypp" /* yacc.c:1646  */
    {
                    (yyval.chance).priority = DEFAULT_CHANCE_PRIORITY;
                    (yyval.chance).chance   = (yyvsp[0].i);
                }
#line 2329 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 635 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("depth_chance(\"%s\", %d, %d)",
                                     quote_lua_string((yyvsp[0].text)).c_str(),
                                     (yyvsp[-1].chance).priority, (yyvsp[-1].chance).chance));
                }
#line 2341 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 643 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("chance(%d, %d)",
                                     (yyvsp[0].chance).priority, (yyvsp[0].chance).chance));
                }
#line 2352 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 657 "levcomp.ypp" /* yacc.c:1646  */
    {
                     lc_map.main.add(
                         yylineno,
                         make_stringf("depth_weight(\"%s\", %d)",
                                      quote_lua_string((yyvsp[0].text)).c_str(), (int)(yyvsp[-1].f)));
                 }
#line 2363 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 664 "levcomp.ypp" /* yacc.c:1646  */
    {
                     lc_map.main.add(
                         yylineno,
                         make_stringf("weight(%d)", (int)(yyvsp[0].f)));
                 }
#line 2373 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 671 "levcomp.ypp" /* yacc.c:1646  */
    {}
#line 2379 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 673 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("orient(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2390 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 682 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("welcome(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2401 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 698 "levcomp.ypp" /* yacc.c:1646  */
    {
                    lc_map.mapchunk.add(
                        yylineno,
                        make_stringf("map(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2412 "levcomp.tab.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 714 "levcomp.ypp" /* yacc.c:1646  */
    {
                       lc_map.main.add(
                           yylineno,
                           make_stringf("subvault(\"%s\")",
                               quote_lua_string((yyvsp[0].text)).c_str()));
                   }
#line 2423 "levcomp.tab.cc" /* yacc.c:1646  */
    break;


#line 2427 "levcomp.tab.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 722 "levcomp.ypp" /* yacc.c:1906  */

