/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */

    #include <cstdio>
    #include <cstdlib>

    #include "ast.hpp"
    #include "primitive.hpp"
    #include "symtab.hpp"

    #define YYDEBUG 1

    extern Program_ptr ast;
    int yylex(void);
    void yyerror(const char *);

#line 81 "parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    ASSIGN = 258,
    OR = 259,
    AND = 260,
    EQL = 261,
    NOTEQL = 262,
    SML = 263,
    SMLEQL = 264,
    LRG = 265,
    LRGEQL = 266,
    ADD = 267,
    SUB = 268,
    MUL = 269,
    DIV = 270,
    NOT = 271,
    DEREF = 272,
    ADDR = 273,
    BOOLEAN = 274,
    CHAR = 275,
    INTEGER = 276,
    INTPTR = 277,
    CHARPTR = 278,
    STRING = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    VAR = 283,
    PROCEDURE = 284,
    RETURN = 285,
    NULL_ = 286,
    TF = 287,
    CHAR_LITERAL = 288,
    STRING_LITERAL = 289,
    IDENTIFIER = 290,
    INTEGER_LITERAL = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 169 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      37,    38,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,    46,    40,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    49,    54,    61,    68,    71,    77,    82,
      89,    94,   101,   105,   109,   113,   117,   123,   130,   133,
     141,   144,   149,   157,   160,   167,   171,   175,   179,   183,
     187,   191,   197,   203,   206,   212,   217,   224,   228,   232,
     238,   242,   246,   250,   254,   258,   262,   266,   270,   274,
     278,   282,   286,   290,   294,   298,   302,   306,   310,   314,
     318,   322,   326,   330,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN", "OR", "AND", "EQL", "NOTEQL",
  "SML", "SMLEQL", "LRG", "LRGEQL", "ADD", "SUB", "MUL", "DIV", "NOT",
  "DEREF", "ADDR", "BOOLEAN", "CHAR", "INTEGER", "INTPTR", "CHARPTR",
  "STRING", "IF", "ELSE", "WHILE", "VAR", "PROCEDURE", "RETURN", "NULL_",
  "TF", "CHAR_LITERAL", "STRING_LITERAL", "IDENTIFIER", "INTEGER_LITERAL",
  "'('", "')'", "'{'", "'}'", "';'", "':'", "','", "'['", "']'", "'|'",
  "$accept", "program", "procedures", "procedure", "para_list",
  "para_list_", "id_list", "type", "proc_body", "proc_list", "var_list",
  "statement_list", "statement", "nested_block", "expression_list",
  "expression_list_", "lhs", "expression", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    40,    41,   123,
     125,    59,    58,    44,    91,    93,   124
};
# endif

#define YYPACT_NINF -114

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-114)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,   -24,    24,   -21,  -114,    31,  -114,  -114,    34,  -114,
      32,    53,   -26,   103,    34,   124,   102,   124,   -20,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,    99,   124,  -114,  -114,
     108,   -21,  -114,  -114,   121,    34,   230,   -13,   117,   113,
     116,   217,   118,  -114,  -114,   160,   107,  -114,   217,   217,
     217,   217,   217,   217,   -10,  -114,  -114,  -114,   120,  -114,
     217,   217,    93,   217,   121,   125,   123,   122,   126,   166,
     178,  -114,  -114,  -114,  -114,  -114,   217,   213,    39,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,  -114,    51,   239,  -114,   127,   -23,   110,   195,  -114,
     193,   197,    68,  -114,  -114,   200,   188,    78,    78,    97,
      97,    97,    97,     5,     5,  -114,  -114,  -114,  -114,   217,
    -114,   192,  -114,  -114,  -114,   201,   198,   275,   199,   202,
     203,   204,   217,  -114,   212,  -114,  -114,   275,   205,  -114,
     206,  -114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     1,     3,     6,    11,
       0,     7,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    15,    16,    14,     9,    10,     0,     0,    18,     8,
       0,    20,     5,    19,    23,     0,     0,     0,     0,     0,
       0,     0,    37,    20,    24,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,    64,    62,    61,    59,    60,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    43,    44,    40,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    32,    31,     0,    59,     0,     0,    21,
       0,     0,     0,    57,    63,    46,    45,    51,    52,    53,
      54,    55,    56,    47,    48,    49,    50,    38,    26,    33,
      25,     0,    20,    20,    58,     0,    34,    36,     0,     0,
       0,     0,     0,    22,    28,    30,    27,    35,     0,    20,
       0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,    64,  -114,  -114,    -8,   115,  -114,  -114,
     227,   207,  -114,  -113,  -114,  -114,   208,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    11,    12,    24,    30,    31,
      64,    36,    44,    65,   125,   126,    45,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,    70,    71,    72,    73,    74,    18,    38,     1,   129,
     130,     5,    77,    78,   119,    92,    15,    16,    97,    89,
      90,    76,    27,    16,     6,    42,   140,    37,   102,    46,
      16,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     7,     8,     9,
      13,   127,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   137,   104,    83,    84,    85,    86,
      87,    88,    89,    90,    14,    33,   117,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    87,
      88,    89,    90,   124,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    19,    20,    21,    22,
      23,    67,    26,    17,    91,    50,    51,    25,    28,    52,
      53,    54,    29,    19,    20,    21,    22,    23,    32,    35,
      48,   120,    47,    49,    55,    56,    57,    95,    96,    59,
      60,    68,    63,    66,    76,    94,    98,    99,   118,    61,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   100,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   101,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    50,
      51,   121,   122,    52,    53,    54,   123,   128,   138,   131,
     133,   132,   134,   135,   139,   136,   141,    38,    55,    56,
      57,   103,    58,    59,    60,    39,    38,    40,    34,     0,
      41,     0,    75,    61,    39,    42,    40,     0,     0,    43,
       0,    93,     0,     0,    42,     0,     0,     0,    43,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90
};

static const yytype_int16 yycheck[] =
{
      48,    49,    50,    51,    52,    53,    14,    17,    29,   122,
     123,    35,    60,    61,    37,    63,    42,    43,    66,    14,
      15,    44,    42,    43,     0,    35,   139,    35,    76,    42,
      43,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     3,    37,    35,
      38,   119,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   132,    46,     8,     9,    10,    11,
      12,    13,    14,    15,    41,    31,    45,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    12,
      13,    14,    15,    45,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    19,    20,    21,    22,
      23,    24,    17,    30,    41,    12,    13,    35,    39,    16,
      17,    18,    27,    19,    20,    21,    22,    23,    40,    28,
      37,    41,    35,    37,    31,    32,    33,    34,    35,    36,
      37,    46,    44,     3,    44,    40,    44,    41,    41,    46,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    38,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    38,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    12,
      13,    36,    39,    16,    17,    18,    39,    45,    26,    38,
      41,    43,    40,    40,    39,    41,    40,    17,    31,    32,
      33,    38,    35,    36,    37,    25,    17,    27,    31,    -1,
      30,    -1,    54,    46,    25,    35,    27,    -1,    -1,    39,
      -1,    64,    -1,    -1,    35,    -1,    -1,    -1,    39,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    48,    49,    50,    35,     0,    50,    37,    35,
      51,    52,    53,    38,    41,    42,    43,    30,    53,    19,
      20,    21,    22,    23,    54,    35,    54,    42,    39,    54,
      55,    56,    40,    50,    57,    28,    58,    53,    17,    25,
      27,    30,    35,    39,    59,    63,    42,    35,    37,    37,
      12,    13,    16,    17,    18,    31,    32,    33,    35,    36,
      37,    46,    64,    44,    57,    60,     3,    24,    54,    64,
      64,    64,    64,    64,    64,    63,    44,    64,    64,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    41,    64,    58,    40,    34,    35,    64,    44,    41,
      38,    38,    64,    38,    46,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    45,    41,    37,
      41,    36,    39,    39,    45,    61,    62,    64,    45,    60,
      60,    38,    43,    41,    40,    40,    41,    64,    26,    39,
      60,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    60,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,    10,     0,     1,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     6,     0,     2,
       0,     6,     9,     0,     2,     4,     4,     7,     7,    11,
       7,     3,     2,     0,     1,     3,     1,     1,     4,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     1,
       1,     1,     1,     3,     1
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
#line 44 "parser.ypp" /* yacc.c:1646  */
    {
                ast = new ProgramImpl((yyvsp[0]).u_proc_list);   
            }
#line 1372 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-1]).u_proc_list)->push_back((yyvsp[0]).u_proc);
                (yyval) = (yyvsp[-1]);
            }
#line 1381 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_proc_list=new std::list<Proc_ptr>();
                ((yyval).u_proc_list)->push_back((yyvsp[0]).u_proc);
            }
#line 1390 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_proc=new ProcImpl(new SymName((yyvsp[-8]).u_base_charptr), (yyvsp[-6]).u_decl_list, (yyvsp[-3]).u_type, (yyvsp[-1]).u_procedure_block);
            }
#line 1398 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_decl_list=new std::list<Decl_ptr>();
            }
#line 1406 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval)=(yyvsp[0]);
            }
#line 1414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-4]).u_decl_list)->push_back(new DeclImpl((yyvsp[-2]).u_symname_list,(yyvsp[0]).u_type));
                (yyval)=(yyvsp[-4]);
            }
#line 1423 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 83 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_decl_list=new std::list<Decl_ptr>();
                ((yyval).u_decl_list)->push_back(new DeclImpl((yyvsp[-2]).u_symname_list,(yyvsp[0]).u_type));
            }
#line 1432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 90 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-2]).u_symname_list)->push_back(new SymName((yyvsp[0]).u_base_charptr));
                (yyval)=(yyvsp[-2]);
            }
#line 1441 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_symname_list=new std::list<SymName_ptr>();
                ((yyval).u_symname_list)->push_back(new SymName((yyvsp[0]).u_base_charptr));
            }
#line 1450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_type = new TBoolean();
        }
#line 1458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 106 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_type = new TCharacter();
        }
#line 1466 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_type = new TCharPtr();
        }
#line 1474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 114 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_type = new TInteger();
        }
#line 1482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_type = new TIntPtr();
        }
#line 1490 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_procedure_block=new Procedure_blockImpl((yyvsp[-5]).u_proc_list,(yyvsp[-4]).u_decl_list,(yyvsp[-3]).u_stat_list,new Return((yyvsp[-1]).u_expr));
            }
#line 1498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_proc_list=new std::list<Proc_ptr>();
            }
#line 1506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-1]).u_proc_list)->push_back((yyvsp[0]).u_proc);
                (yyval)=(yyvsp[-1]);
            }
#line 1515 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 141 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_decl_list=new std::list<Decl_ptr>();
            }
#line 1523 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 145 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-5]).u_decl_list)->push_back(new DeclImpl((yyvsp[-3]).u_symname_list,(yyvsp[-1]).u_type));
                (yyval) = (yyvsp[-5]);
            }
#line 1532 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "parser.ypp" /* yacc.c:1646  */
    {
                ((yyvsp[-8]).u_decl_list)->push_back(new DeclImpl((yyvsp[-6]).u_symname_list,new TString(new Primitive((yyvsp[-2]).u_base_int))));
                (yyval) = (yyvsp[-8]);
            }
#line 1541 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 157 "parser.ypp" /* yacc.c:1646  */
    {
                    (yyval).u_stat_list=new std::list<Stat_ptr>();
                }
#line 1549 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "parser.ypp" /* yacc.c:1646  */
    {
                    ((yyvsp[-1]).u_stat_list)->push_back((yyvsp[0]).u_stat);
                    (yyval)=(yyvsp[-1]);
                }
#line 1558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 168 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new Assignment((yyvsp[-3]).u_lhs,(yyvsp[-1]).u_expr);
            }
#line 1566 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new StringAssignment((yyvsp[-3]).u_lhs,new StringPrimitive((yyvsp[-1]).u_base_charptr));
            }
#line 1574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 176 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new Call((yyvsp[-6]).u_lhs,new SymName((yyvsp[-4]).u_base_charptr),(yyvsp[-2]).u_expr_list);
            }
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 180 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new IfNoElse((yyvsp[-4]).u_expr,(yyvsp[-1]).u_nested_block);
            }
#line 1590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 184 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new IfWithElse((yyvsp[-8]).u_expr,(yyvsp[-5]).u_nested_block,(yyvsp[-1]).u_nested_block);
            }
#line 1598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 188 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new WhileLoop((yyvsp[-4]).u_expr,(yyvsp[-1]).u_nested_block);
            }
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 192 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_stat=new CodeBlock((yyvsp[-1]).u_nested_block);
            }
#line 1614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 198 "parser.ypp" /* yacc.c:1646  */
    {
                    (yyval).u_nested_block=new Nested_blockImpl((yyvsp[-1]).u_decl_list,(yyvsp[0]).u_stat_list);
                }
#line 1622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 203 "parser.ypp" /* yacc.c:1646  */
    {
                        (yyval).u_expr_list=new std::list<Expr_ptr>();
                    }
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 207 "parser.ypp" /* yacc.c:1646  */
    {
                        (yyval)=(yyvsp[0]);
                    }
#line 1638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "parser.ypp" /* yacc.c:1646  */
    {
                        ((yyvsp[-2]).u_expr_list)->push_back((yyvsp[0]).u_expr);
                        (yyval)=(yyvsp[-2]);
                    }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "parser.ypp" /* yacc.c:1646  */
    {
                        (yyval).u_expr_list=new std::list<Expr_ptr>();
                        ((yyval).u_expr_list)->push_back((yyvsp[0]).u_expr);
                    }
#line 1656 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 225 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_lhs=new Variable(new SymName((yyvsp[0]).u_base_charptr));
        }
#line 1664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 229 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_lhs=new ArrayElement(new SymName((yyvsp[-3]).u_base_charptr),(yyvsp[-1]).u_expr);
        }
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "parser.ypp" /* yacc.c:1646  */
    {
            (yyval).u_lhs=new DerefVariable(new SymName((yyvsp[0]).u_base_charptr));
        }
#line 1680 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Not((yyvsp[0]).u_expr);
            }
#line 1688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 243 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Deref((yyvsp[0]).u_expr);
            }
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 247 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new AddressOf((yyvsp[0]).u_lhs);
            }
#line 1704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 251 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=(yyvsp[0]).u_expr;
            }
#line 1712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 255 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Uminus((yyvsp[0]).u_expr);
            }
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 259 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new And((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 263 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Or((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 267 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Plus((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 271 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Minus((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 275 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Times((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 279 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Div((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 283 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Compare((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1776 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 287 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Noteq((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 291 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Lt((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1792 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 295 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Lteq((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 299 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Gt((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 303 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Gteq((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);
            }
#line 1816 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 307 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=(yyvsp[-1]).u_expr;
            }
#line 1824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 311 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new ArrayAccess(new SymName((yyvsp[-3]).u_base_charptr),(yyvsp[-1]).u_expr);
            }
#line 1832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 315 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new Ident(new SymName((yyvsp[0]).u_base_charptr));
            }
#line 1840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 319 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new IntLit(new Primitive((yyvsp[0]).u_base_int));
            }
#line 1848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 323 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new CharLit(new Primitive((yyvsp[0]).u_base_int));
            }
#line 1856 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 327 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new BoolLit(new Primitive((yyvsp[0]).u_base_int));
            }
#line 1864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 331 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new AbsoluteValue((yyvsp[-1]).u_expr);
            }
#line 1872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 335 "parser.ypp" /* yacc.c:1646  */
    {
                (yyval).u_expr=new NullLit();
            }
#line 1880 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1884 "parser.cpp" /* yacc.c:1646  */
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
#line 339 "parser.ypp" /* yacc.c:1906  */


/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

extern int yylineno;

void yyerror(const char *s)
{
    fprintf(stderr, "%s at line %d\n", s, yylineno);
    return;
}
