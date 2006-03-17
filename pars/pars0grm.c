/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PARS_INT_LIT = 258,
     PARS_FLOAT_LIT = 259,
     PARS_STR_LIT = 260,
     PARS_NULL_LIT = 261,
     PARS_ID_TOKEN = 262,
     PARS_AND_TOKEN = 263,
     PARS_OR_TOKEN = 264,
     PARS_NOT_TOKEN = 265,
     PARS_GE_TOKEN = 266,
     PARS_LE_TOKEN = 267,
     PARS_NE_TOKEN = 268,
     PARS_PROCEDURE_TOKEN = 269,
     PARS_IN_TOKEN = 270,
     PARS_OUT_TOKEN = 271,
     PARS_BINARY_TOKEN = 272,
     PARS_BLOB_TOKEN = 273,
     PARS_INT_TOKEN = 274,
     PARS_INTEGER_TOKEN = 275,
     PARS_FLOAT_TOKEN = 276,
     PARS_CHAR_TOKEN = 277,
     PARS_IS_TOKEN = 278,
     PARS_BEGIN_TOKEN = 279,
     PARS_END_TOKEN = 280,
     PARS_IF_TOKEN = 281,
     PARS_THEN_TOKEN = 282,
     PARS_ELSE_TOKEN = 283,
     PARS_ELSIF_TOKEN = 284,
     PARS_LOOP_TOKEN = 285,
     PARS_WHILE_TOKEN = 286,
     PARS_RETURN_TOKEN = 287,
     PARS_SELECT_TOKEN = 288,
     PARS_SUM_TOKEN = 289,
     PARS_COUNT_TOKEN = 290,
     PARS_DISTINCT_TOKEN = 291,
     PARS_FROM_TOKEN = 292,
     PARS_WHERE_TOKEN = 293,
     PARS_FOR_TOKEN = 294,
     PARS_DDOT_TOKEN = 295,
     PARS_CONSISTENT_TOKEN = 296,
     PARS_READ_TOKEN = 297,
     PARS_ORDER_TOKEN = 298,
     PARS_BY_TOKEN = 299,
     PARS_ASC_TOKEN = 300,
     PARS_DESC_TOKEN = 301,
     PARS_INSERT_TOKEN = 302,
     PARS_INTO_TOKEN = 303,
     PARS_VALUES_TOKEN = 304,
     PARS_UPDATE_TOKEN = 305,
     PARS_SET_TOKEN = 306,
     PARS_DELETE_TOKEN = 307,
     PARS_CURRENT_TOKEN = 308,
     PARS_OF_TOKEN = 309,
     PARS_CREATE_TOKEN = 310,
     PARS_TABLE_TOKEN = 311,
     PARS_INDEX_TOKEN = 312,
     PARS_UNIQUE_TOKEN = 313,
     PARS_CLUSTERED_TOKEN = 314,
     PARS_DOES_NOT_FIT_IN_MEM_TOKEN = 315,
     PARS_ON_TOKEN = 316,
     PARS_ASSIGN_TOKEN = 317,
     PARS_DECLARE_TOKEN = 318,
     PARS_CURSOR_TOKEN = 319,
     PARS_SQL_TOKEN = 320,
     PARS_OPEN_TOKEN = 321,
     PARS_FETCH_TOKEN = 322,
     PARS_CLOSE_TOKEN = 323,
     PARS_NOTFOUND_TOKEN = 324,
     PARS_TO_CHAR_TOKEN = 325,
     PARS_TO_NUMBER_TOKEN = 326,
     PARS_TO_BINARY_TOKEN = 327,
     PARS_BINARY_TO_NUMBER_TOKEN = 328,
     PARS_SUBSTR_TOKEN = 329,
     PARS_REPLSTR_TOKEN = 330,
     PARS_CONCAT_TOKEN = 331,
     PARS_INSTR_TOKEN = 332,
     PARS_LENGTH_TOKEN = 333,
     PARS_SYSDATE_TOKEN = 334,
     PARS_PRINTF_TOKEN = 335,
     PARS_ASSERT_TOKEN = 336,
     PARS_RND_TOKEN = 337,
     PARS_RND_STR_TOKEN = 338,
     PARS_ROW_PRINTF_TOKEN = 339,
     PARS_COMMIT_TOKEN = 340,
     PARS_ROLLBACK_TOKEN = 341,
     PARS_WORK_TOKEN = 342,
     PARS_UNSIGNED_TOKEN = 343,
     NEG = 344
   };
#endif
#define PARS_INT_LIT 258
#define PARS_FLOAT_LIT 259
#define PARS_STR_LIT 260
#define PARS_NULL_LIT 261
#define PARS_ID_TOKEN 262
#define PARS_AND_TOKEN 263
#define PARS_OR_TOKEN 264
#define PARS_NOT_TOKEN 265
#define PARS_GE_TOKEN 266
#define PARS_LE_TOKEN 267
#define PARS_NE_TOKEN 268
#define PARS_PROCEDURE_TOKEN 269
#define PARS_IN_TOKEN 270
#define PARS_OUT_TOKEN 271
#define PARS_BINARY_TOKEN 272
#define PARS_BLOB_TOKEN 273
#define PARS_INT_TOKEN 274
#define PARS_INTEGER_TOKEN 275
#define PARS_FLOAT_TOKEN 276
#define PARS_CHAR_TOKEN 277
#define PARS_IS_TOKEN 278
#define PARS_BEGIN_TOKEN 279
#define PARS_END_TOKEN 280
#define PARS_IF_TOKEN 281
#define PARS_THEN_TOKEN 282
#define PARS_ELSE_TOKEN 283
#define PARS_ELSIF_TOKEN 284
#define PARS_LOOP_TOKEN 285
#define PARS_WHILE_TOKEN 286
#define PARS_RETURN_TOKEN 287
#define PARS_SELECT_TOKEN 288
#define PARS_SUM_TOKEN 289
#define PARS_COUNT_TOKEN 290
#define PARS_DISTINCT_TOKEN 291
#define PARS_FROM_TOKEN 292
#define PARS_WHERE_TOKEN 293
#define PARS_FOR_TOKEN 294
#define PARS_DDOT_TOKEN 295
#define PARS_CONSISTENT_TOKEN 296
#define PARS_READ_TOKEN 297
#define PARS_ORDER_TOKEN 298
#define PARS_BY_TOKEN 299
#define PARS_ASC_TOKEN 300
#define PARS_DESC_TOKEN 301
#define PARS_INSERT_TOKEN 302
#define PARS_INTO_TOKEN 303
#define PARS_VALUES_TOKEN 304
#define PARS_UPDATE_TOKEN 305
#define PARS_SET_TOKEN 306
#define PARS_DELETE_TOKEN 307
#define PARS_CURRENT_TOKEN 308
#define PARS_OF_TOKEN 309
#define PARS_CREATE_TOKEN 310
#define PARS_TABLE_TOKEN 311
#define PARS_INDEX_TOKEN 312
#define PARS_UNIQUE_TOKEN 313
#define PARS_CLUSTERED_TOKEN 314
#define PARS_DOES_NOT_FIT_IN_MEM_TOKEN 315
#define PARS_ON_TOKEN 316
#define PARS_ASSIGN_TOKEN 317
#define PARS_DECLARE_TOKEN 318
#define PARS_CURSOR_TOKEN 319
#define PARS_SQL_TOKEN 320
#define PARS_OPEN_TOKEN 321
#define PARS_FETCH_TOKEN 322
#define PARS_CLOSE_TOKEN 323
#define PARS_NOTFOUND_TOKEN 324
#define PARS_TO_CHAR_TOKEN 325
#define PARS_TO_NUMBER_TOKEN 326
#define PARS_TO_BINARY_TOKEN 327
#define PARS_BINARY_TO_NUMBER_TOKEN 328
#define PARS_SUBSTR_TOKEN 329
#define PARS_REPLSTR_TOKEN 330
#define PARS_CONCAT_TOKEN 331
#define PARS_INSTR_TOKEN 332
#define PARS_LENGTH_TOKEN 333
#define PARS_SYSDATE_TOKEN 334
#define PARS_PRINTF_TOKEN 335
#define PARS_ASSERT_TOKEN 336
#define PARS_RND_TOKEN 337
#define PARS_RND_STR_TOKEN 338
#define PARS_ROW_PRINTF_TOKEN 339
#define PARS_COMMIT_TOKEN 340
#define PARS_ROLLBACK_TOKEN 341
#define PARS_WORK_TOKEN 342
#define PARS_UNSIGNED_TOKEN 343
#define NEG 344




/* Copy the first part of user declarations.  */
#line 13 "pars0grm.y"

/* The value of the semantic attribute is a pointer to a query tree node
que_node_t */

#include "univ.i"
#include <math.h>				/* Can't be before univ.i */
#include "pars0pars.h"
#include "mem0mem.h"
#include "que0types.h"
#include "que0que.h"
#include "row0sel.h"

#define YYSTYPE que_node_t*

/* #define __STDC__ */

int
yylex(void);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 285 "pars0grm.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   765

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  65
/* YYNRULES -- Number of rules. */
#define YYNRULES  166
/* YYNRULES -- Number of states. */
#define YYNSTATES  323

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    97,     2,     2,
      99,   100,    94,    93,   102,    92,     2,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    98,
      90,    89,    91,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,     2,   104,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    20,    23,
      26,    29,    32,    35,    38,    41,    44,    47,    50,    53,
      56,    59,    62,    65,    68,    70,    73,    75,    80,    82,
      84,    86,    88,    90,    94,    98,   102,   106,   109,   113,
     117,   121,   125,   129,   133,   137,   141,   145,   148,   152,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   178,   179,   181,   185,   192,   197,   199,   201,   203,
     205,   209,   210,   212,   216,   217,   219,   223,   225,   230,
     236,   241,   242,   244,   248,   250,   254,   256,   257,   260,
     261,   264,   265,   268,   269,   271,   273,   274,   279,   288,
     292,   298,   301,   305,   307,   311,   316,   321,   324,   327,
     331,   334,   337,   340,   344,   349,   351,   354,   355,   358,
     360,   368,   375,   386,   388,   391,   394,   399,   405,   407,
     411,   412,   416,   417,   419,   420,   423,   424,   426,   434,
     436,   440,   441,   443,   444,   446,   457,   460,   463,   465,
     467,   469,   471,   473,   477,   481,   482,   484,   488,   492,
     493,   495,   498,   505,   506,   508,   511
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     106,     0,    -1,   169,    98,    -1,   111,    -1,   112,    98,
      -1,   143,    98,    -1,   144,    98,    -1,   142,    98,    -1,
     145,    98,    -1,   138,    98,    -1,   125,    98,    -1,   127,
      98,    -1,   137,    98,    -1,   135,    98,    -1,   136,    98,
      -1,   132,    98,    -1,   133,    98,    -1,   146,    98,    -1,
     148,    98,    -1,   147,    98,    -1,   160,    98,    -1,   161,
      98,    -1,   155,    98,    -1,   159,    98,    -1,   106,    -1,
     107,   106,    -1,     7,    -1,   109,    99,   116,   100,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,    65,    -1,
     108,    93,   108,    -1,   108,    92,   108,    -1,   108,    94,
     108,    -1,   108,    95,   108,    -1,    92,   108,    -1,    99,
     108,   100,    -1,   108,    89,   108,    -1,   108,    90,   108,
      -1,   108,    91,   108,    -1,   108,    11,   108,    -1,   108,
      12,   108,    -1,   108,    13,   108,    -1,   108,     8,   108,
      -1,   108,     9,   108,    -1,    10,   108,    -1,     7,    97,
      69,    -1,    65,    97,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    82,    -1,    83,    -1,    -1,   101,
      -1,   110,   102,   101,    -1,   103,     7,    99,   110,   100,
     104,    -1,   113,    99,   116,   100,    -1,    75,    -1,    80,
      -1,    81,    -1,     7,    -1,   114,   102,     7,    -1,    -1,
       7,    -1,   115,   102,     7,    -1,    -1,   108,    -1,   116,
     102,   108,    -1,   108,    -1,    35,    99,    94,   100,    -1,
      35,    99,    36,     7,   100,    -1,    34,    99,   108,   100,
      -1,    -1,   117,    -1,   118,   102,   117,    -1,    94,    -1,
     118,    48,   115,    -1,   118,    -1,    -1,    38,   108,    -1,
      -1,    39,    50,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    46,    -1,    -1,    43,    44,     7,   123,    -1,    33,
     119,    37,   114,   120,   121,   122,   124,    -1,    47,    48,
       7,    -1,   126,    49,    99,   116,   100,    -1,   126,   125,
      -1,     7,    89,   108,    -1,   128,    -1,   129,   102,   128,
      -1,    38,    53,    54,     7,    -1,    50,     7,    51,   129,
      -1,   131,   120,    -1,   131,   130,    -1,    52,    37,     7,
      -1,   134,   120,    -1,   134,   130,    -1,    84,   125,    -1,
       7,    62,   108,    -1,    29,   108,    27,   107,    -1,   139,
      -1,   140,   139,    -1,    -1,    28,   107,    -1,   140,    -1,
      26,   108,    27,   107,   141,    25,    26,    -1,    31,   108,
      30,   107,    25,    30,    -1,    39,     7,    15,   108,    40,
     108,    30,   107,    25,    30,    -1,    32,    -1,    66,     7,
      -1,    68,     7,    -1,    67,     7,    48,   115,    -1,     7,
     162,   151,   152,   153,    -1,   149,    -1,   150,   102,   149,
      -1,    -1,    99,     3,   100,    -1,    -1,    88,    -1,    -1,
      10,     6,    -1,    -1,    60,    -1,    55,    56,     7,    99,
     150,   100,   154,    -1,     7,    -1,   156,   102,     7,    -1,
      -1,    58,    -1,    -1,    59,    -1,    55,   157,   158,    57,
       7,    61,     7,    99,   156,   100,    -1,    85,    87,    -1,
      86,    87,    -1,    19,    -1,    20,    -1,    22,    -1,    17,
      -1,    18,    -1,     7,    15,   162,    -1,     7,    16,   162,
      -1,    -1,   163,    -1,   164,   102,   163,    -1,     7,   162,
      98,    -1,    -1,   165,    -1,   166,   165,    -1,    63,    64,
       7,    23,   125,    98,    -1,    -1,   167,    -1,   168,   167,
      -1,    14,     7,    99,   164,   100,    23,   166,   168,    24,
     107,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   132,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   157,   158,   163,   164,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   188,
     193,   194,   195,   196,   198,   199,   200,   201,   202,   203,
     204,   207,   209,   210,   214,   219,   224,   225,   226,   230,
     231,   236,   237,   238,   243,   244,   245,   249,   250,   255,
     261,   268,   269,   270,   275,   277,   279,   283,   284,   288,
     289,   294,   295,   300,   301,   302,   306,   307,   312,   322,
     327,   329,   334,   338,   339,   344,   350,   357,   362,   367,
     373,   378,   383,   388,   393,   399,   400,   405,   406,   408,
     412,   419,   425,   433,   437,   443,   449,   454,   459,   460,
     465,   466,   471,   472,   478,   479,   485,   486,   492,   498,
     499,   504,   505,   509,   510,   514,   522,   527,   532,   533,
     534,   535,   536,   540,   543,   549,   550,   551,   556,   560,
     562,   563,   567,   572,   574,   575,   579
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PARS_INT_LIT", "PARS_FLOAT_LIT",
  "PARS_STR_LIT", "PARS_NULL_LIT", "PARS_ID_TOKEN", "PARS_AND_TOKEN",
  "PARS_OR_TOKEN", "PARS_NOT_TOKEN", "PARS_GE_TOKEN", "PARS_LE_TOKEN",
  "PARS_NE_TOKEN", "PARS_PROCEDURE_TOKEN", "PARS_IN_TOKEN",
  "PARS_OUT_TOKEN", "PARS_BINARY_TOKEN", "PARS_BLOB_TOKEN",
  "PARS_INT_TOKEN", "PARS_INTEGER_TOKEN", "PARS_FLOAT_TOKEN",
  "PARS_CHAR_TOKEN", "PARS_IS_TOKEN", "PARS_BEGIN_TOKEN", "PARS_END_TOKEN",
  "PARS_IF_TOKEN", "PARS_THEN_TOKEN", "PARS_ELSE_TOKEN",
  "PARS_ELSIF_TOKEN", "PARS_LOOP_TOKEN", "PARS_WHILE_TOKEN",
  "PARS_RETURN_TOKEN", "PARS_SELECT_TOKEN", "PARS_SUM_TOKEN",
  "PARS_COUNT_TOKEN", "PARS_DISTINCT_TOKEN", "PARS_FROM_TOKEN",
  "PARS_WHERE_TOKEN", "PARS_FOR_TOKEN", "PARS_DDOT_TOKEN",
  "PARS_CONSISTENT_TOKEN", "PARS_READ_TOKEN", "PARS_ORDER_TOKEN",
  "PARS_BY_TOKEN", "PARS_ASC_TOKEN", "PARS_DESC_TOKEN",
  "PARS_INSERT_TOKEN", "PARS_INTO_TOKEN", "PARS_VALUES_TOKEN",
  "PARS_UPDATE_TOKEN", "PARS_SET_TOKEN", "PARS_DELETE_TOKEN",
  "PARS_CURRENT_TOKEN", "PARS_OF_TOKEN", "PARS_CREATE_TOKEN",
  "PARS_TABLE_TOKEN", "PARS_INDEX_TOKEN", "PARS_UNIQUE_TOKEN",
  "PARS_CLUSTERED_TOKEN", "PARS_DOES_NOT_FIT_IN_MEM_TOKEN",
  "PARS_ON_TOKEN", "PARS_ASSIGN_TOKEN", "PARS_DECLARE_TOKEN",
  "PARS_CURSOR_TOKEN", "PARS_SQL_TOKEN", "PARS_OPEN_TOKEN",
  "PARS_FETCH_TOKEN", "PARS_CLOSE_TOKEN", "PARS_NOTFOUND_TOKEN",
  "PARS_TO_CHAR_TOKEN", "PARS_TO_NUMBER_TOKEN", "PARS_TO_BINARY_TOKEN",
  "PARS_BINARY_TO_NUMBER_TOKEN", "PARS_SUBSTR_TOKEN", "PARS_REPLSTR_TOKEN",
  "PARS_CONCAT_TOKEN", "PARS_INSTR_TOKEN", "PARS_LENGTH_TOKEN",
  "PARS_SYSDATE_TOKEN", "PARS_PRINTF_TOKEN", "PARS_ASSERT_TOKEN",
  "PARS_RND_TOKEN", "PARS_RND_STR_TOKEN", "PARS_ROW_PRINTF_TOKEN",
  "PARS_COMMIT_TOKEN", "PARS_ROLLBACK_TOKEN", "PARS_WORK_TOKEN",
  "PARS_UNSIGNED_TOKEN", "'='", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'",
  "NEG", "'%'", "';'", "'('", "')'", "'?'", "','", "'{'", "'}'", "$accept",
  "statement", "statement_list", "exp", "function_name",
  "question_mark_list", "stored_procedure_call",
  "predefined_procedure_call", "predefined_procedure_name", "table_list",
  "variable_list", "exp_list", "select_item", "select_item_list",
  "select_list", "search_condition", "for_update_clause",
  "consistent_read_clause", "order_direction", "order_by_clause",
  "select_statement", "insert_statement_start", "insert_statement",
  "column_assignment", "column_assignment_list", "cursor_positioned",
  "update_statement_start", "update_statement_searched",
  "update_statement_positioned", "delete_statement_start",
  "delete_statement_searched", "delete_statement_positioned",
  "row_printf_statement", "assignment_statement", "elsif_element",
  "elsif_list", "else_part", "if_statement", "while_statement",
  "for_statement", "return_statement", "open_cursor_statement",
  "close_cursor_statement", "fetch_statement", "column_def",
  "column_def_list", "opt_column_len", "opt_unsigned", "opt_not_null",
  "not_fit_in_memory", "create_table", "column_list", "unique_def",
  "clustered_def", "create_index", "commit_statement",
  "rollback_statement", "type_name", "parameter_declaration",
  "parameter_declaration_list", "variable_declaration",
  "variable_declaration_list", "cursor_declaration", "declaration_list",
  "procedure_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    61,
      60,    62,    45,    43,    42,    47,   344,    37,    59,    40,
      41,    63,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   111,   112,   113,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   118,   118,   118,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   124,   124,   125,   126,
     127,   127,   128,   129,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   140,   141,   141,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   156,
     156,   157,   157,   158,   158,   159,   160,   161,   162,   162,
     162,   162,   162,   163,   163,   164,   164,   164,   165,   166,
     166,   166,   167,   168,   168,   168,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     4,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     6,     4,     1,     1,     1,     1,
       3,     0,     1,     3,     0,     1,     3,     1,     4,     5,
       4,     0,     1,     3,     1,     3,     1,     0,     2,     0,
       2,     0,     2,     0,     1,     1,     0,     4,     8,     3,
       5,     2,     3,     1,     3,     4,     4,     2,     2,     3,
       2,     2,     2,     3,     4,     1,     2,     0,     2,     1,
       7,     6,    10,     1,     2,     2,     4,     5,     1,     3,
       0,     3,     0,     1,     0,     2,     0,     1,     7,     1,
       3,     0,     1,     0,     1,    10,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     0,     1,     3,     3,     0,
       1,     2,     6,     0,     1,     2,    11
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     0,   123,    81,     0,     0,     0,
       0,   141,     0,     0,     0,    66,    67,    68,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,    87,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,    31,    26,     0,    32,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,    84,    77,    82,    86,
       0,     0,     0,     0,     0,     0,   142,   143,   124,     0,
     125,   112,   146,   147,     0,     1,     4,    74,    10,     0,
     101,    11,     0,   107,   108,    15,    16,   110,   111,    13,
      14,    12,     9,     7,     5,     6,     8,    17,    19,    18,
      22,    23,    20,    21,     2,   113,   155,     0,    47,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    71,
       0,     0,     0,    99,     0,   109,     0,   144,     0,    71,
      61,    75,     0,    74,     0,    88,     0,   156,     0,    48,
      49,    38,    45,    46,    42,    43,    44,    24,   117,    39,
      40,    41,    34,    33,    35,    36,     0,     0,     0,     0,
       0,    72,    85,    83,    69,    87,     0,     0,   103,   106,
       0,     0,   126,    62,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,   115,   119,     0,    27,
       0,    80,     0,    78,     0,     0,     0,    89,     0,     0,
       0,     0,   128,     0,     0,     0,     0,    76,   100,   105,
     151,   152,   148,   149,   150,   153,   154,   159,   157,   118,
       0,   116,     0,   121,    79,    73,    70,     0,    91,     0,
     102,   104,   130,   136,     0,     0,    64,    63,     0,   160,
     163,     0,   120,    90,     0,    96,     0,     0,   132,   137,
     138,   129,     0,     0,     0,   161,   164,     0,   114,    92,
       0,    98,     0,     0,   133,   134,     0,   158,     0,     0,
     165,     0,     0,   131,     0,   127,   139,     0,     0,     0,
      93,   122,   135,   145,     0,     0,   166,    94,    95,    97,
     140,     0,   162
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   177,   178,   161,    72,   204,    23,    24,    25,   195,
     192,   162,    78,    79,    80,   103,   258,   275,   319,   291,
      26,    27,    28,   198,   199,   104,    29,    30,    31,    32,
      33,    34,    35,    36,   216,   217,   218,    37,    38,    39,
      40,    41,    42,    43,   232,   233,   278,   295,   305,   280,
      44,   307,    87,   158,    45,    46,    47,   245,   167,   168,
     269,   270,   286,   287,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -203
static const short int yypact[] =
{
     457,   -49,    30,   541,   541,  -203,    12,    42,   -15,    57,
       8,   -31,    60,    67,    69,  -203,  -203,  -203,    45,    -7,
      -6,    89,    97,  -203,     1,     3,     2,   -19,     5,    81,
       7,    22,    81,    24,    27,    28,    29,    31,    32,    46,
      49,    50,    54,    55,    56,    58,    59,    61,    62,   541,
      25,  -203,  -203,  -203,  -203,    64,   541,    65,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,   541,
     541,   623,    37,   254,    70,    71,  -203,   670,  -203,   -39,
      84,    83,   121,   104,   156,   157,  -203,   107,  -203,   120,
    -203,  -203,  -203,  -203,    72,  -203,  -203,   541,  -203,    73,
    -203,  -203,   510,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,   670,   167,   106,   310,   112,
     163,    23,   541,   541,   541,   541,   541,   457,   541,   541,
     541,   541,   541,   541,   541,   541,   457,   541,   -29,   178,
     204,   179,   541,  -203,   181,  -203,    90,  -203,   134,   178,
      91,   670,   -76,   541,   139,   670,    38,  -203,   -62,  -203,
    -203,  -203,   310,   310,    15,    15,   670,  -203,   151,    15,
      15,    15,    -2,    -2,   163,   163,   -59,   286,   553,   187,
      95,  -203,    94,  -203,  -203,   -32,   565,   108,  -203,    98,
     192,   195,    94,  -203,   -58,  -203,   541,   -50,   197,    39,
      39,   189,   167,   457,   541,  -203,  -203,   186,   191,  -203,
     190,  -203,   122,  -203,   214,   541,   216,   194,   541,   541,
     181,    39,  -203,   -40,   164,   125,   129,   670,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,   227,  -203,   457,
     653,  -203,   215,  -203,  -203,  -203,  -203,   193,   199,   660,
     670,  -203,   143,   184,   192,   238,  -203,  -203,    39,  -203,
      16,   457,  -203,  -203,   205,   203,   457,   245,   162,  -203,
    -203,  -203,   152,   154,   196,  -203,  -203,   -12,   457,  -203,
     209,  -203,   343,   155,  -203,   246,   250,  -203,   251,   457,
    -203,   252,   231,  -203,   258,  -203,  -203,   -27,   247,   400,
      26,  -203,  -203,  -203,   261,    45,  -203,  -203,  -203,  -203,
    -203,   173,  -203
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -203,     0,  -126,    -1,  -203,  -203,  -203,  -203,  -203,  -203,
     113,  -124,   123,  -203,  -203,   -28,  -203,  -203,  -203,  -203,
     -17,  -203,  -203,    74,  -203,   253,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,    77,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,    33,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -202,    78,  -203,
       9,  -203,     4,  -203,  -203
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
      22,    91,    71,    73,   107,    77,   225,   189,   246,   149,
     100,   136,   299,    49,     6,    51,    52,    53,    54,    55,
     187,   186,    56,   268,   205,    85,   206,    86,   136,   262,
      99,   132,   133,    82,   134,   135,   136,    50,   211,   207,
     212,   219,   235,   206,   236,    84,    74,    75,   125,    81,
     238,   284,   206,   209,   210,   128,   240,   241,   242,   243,
     263,   244,   264,   150,    83,   190,   283,    88,   130,   131,
     226,   317,   318,   313,    89,   314,    90,    57,     6,   284,
      92,    93,    58,    59,    60,    61,    62,   249,    63,    64,
      65,    66,   143,   144,    67,    68,    94,    95,   152,    96,
      98,   165,    97,   101,    69,   105,    76,   141,   142,   143,
     144,    70,   138,   139,   140,   141,   142,   143,   144,   102,
     106,   151,   109,   171,   126,   110,   111,   112,   153,   113,
     114,   172,   173,   174,   175,   176,   145,   179,   180,   181,
     182,   183,   184,   185,   115,   288,   188,   116,   117,    77,
     292,   196,   118,   119,   120,   154,   121,   122,     1,   123,
     124,   127,   129,   155,   156,     2,   157,   227,   159,   147,
     148,   160,   163,   309,   166,   169,   136,     3,   215,   213,
     214,   170,     4,     5,     6,   191,   194,   215,   197,   200,
       7,   201,   203,   208,   222,   223,   224,   229,     8,   231,
     230,     9,   234,    10,   239,   237,    11,    51,    52,    53,
      54,    55,   247,   250,    56,   214,   252,    12,    13,    14,
     253,   255,   254,   256,   165,   265,    15,   259,   260,   266,
     267,    16,    17,   257,   268,    18,    19,    20,    74,    75,
     274,   272,   277,   273,   279,   282,   290,   289,   293,   215,
     294,   296,   297,   301,    21,   303,   304,   306,   308,   310,
     298,   311,   132,   133,   312,   134,   135,   136,   320,    57,
     315,   322,   202,   193,    58,    59,    60,    61,    62,   285,
      63,    64,    65,    66,   146,   108,    67,    68,   215,     0,
     248,   300,   215,     1,   251,     0,    69,   281,   321,     0,
       2,     0,     0,    70,   261,     0,     0,     0,     0,   215,
       0,   220,     3,     0,     0,     0,     0,     4,     5,     6,
       0,   134,   135,   136,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     9,     0,    10,     0,
       0,    11,     0,   138,   139,   140,   141,   142,   143,   144,
       1,     0,    12,    13,    14,     0,     0,     2,     0,     0,
       0,    15,     0,     0,     0,     0,    16,    17,   302,     3,
      18,    19,    20,     0,     4,     5,     6,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,    21,
       8,     0,     0,     9,     0,    10,     0,     0,    11,   138,
     139,   140,   141,   142,   143,   144,     0,     1,     0,    12,
      13,    14,     0,     0,     2,     0,     0,     0,    15,     0,
       0,     0,     0,    16,    17,   316,     3,    18,    19,    20,
       0,     4,     5,     6,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,    21,     8,     0,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,    12,    13,    14,     0,
       0,     2,     0,     0,     0,    15,     0,     0,     0,     0,
      16,    17,     0,     3,    18,    19,    20,     0,     4,     5,
       6,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,    21,     8,     0,     0,     9,     0,    10,
       0,     0,    11,    51,    52,    53,    54,    55,     0,     0,
      56,     0,     0,    12,    13,    14,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,    16,    17,     0,
       0,    18,    19,    20,    51,    52,    53,    54,    55,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
      21,   132,   133,   164,   134,   135,   136,     0,     0,     0,
       0,     0,     0,   132,   133,    57,   134,   135,   136,     0,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
       0,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,   228,    57,     0,     0,    70,
       0,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,     0,     0,    67,    68,     0,     0,     0,     0,     0,
       0,   132,   133,    69,   134,   135,   136,     0,     0,     0,
      70,     0,   138,   139,   140,   141,   142,   143,   144,     0,
     137,     0,     0,   221,   138,   139,   140,   141,   142,   143,
     144,   132,   133,     0,   134,   135,   136,     0,   132,   133,
       0,   134,   135,   136,     0,     0,     0,     0,   132,   133,
     271,   134,   135,   136,     0,     0,     0,     0,     0,     0,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,   138,
     139,   140,   141,   142,   143,   144
};

static const short int yycheck[] =
{
       0,    18,     3,     4,    32,     6,    38,    36,   210,    48,
      27,    13,    24,    62,    33,     3,     4,     5,     6,     7,
     146,   145,    10,     7,   100,    56,   102,    58,    13,   231,
      49,     8,     9,    48,    11,    12,    13,     7,   100,   163,
     102,   100,   100,   102,   102,    37,    34,    35,    49,     7,
     100,    63,   102,    15,    16,    56,    17,    18,    19,    20,
     100,    22,   102,   102,     7,    94,   268,     7,    69,    70,
     102,    45,    46,   100,     7,   102,     7,    65,    33,    63,
      87,    87,    70,    71,    72,    73,    74,   213,    76,    77,
      78,    79,    94,    95,    82,    83,     7,     0,    15,    98,
      98,   102,    99,    98,    92,    98,    94,    92,    93,    94,
      95,    99,    89,    90,    91,    92,    93,    94,    95,    38,
      98,    37,    98,   100,    99,    98,    98,    98,     7,    98,
      98,   132,   133,   134,   135,   136,    99,   138,   139,   140,
     141,   142,   143,   144,    98,   271,   147,    98,    98,   150,
     276,   152,    98,    98,    98,    51,    98,    98,     7,    98,
      98,    97,    97,     7,     7,    14,    59,   195,    48,    99,
      99,    99,    99,   299,     7,    69,    13,    26,   178,    28,
      29,    69,    31,    32,    33,     7,     7,   187,     7,    99,
      39,    57,   101,    54,     7,   100,   102,    89,    47,     7,
     102,    50,     7,    52,     7,   206,    55,     3,     4,     5,
       6,     7,    23,   214,    10,    29,    25,    66,    67,    68,
      30,     7,   100,     7,   225,    61,    75,   228,   229,   104,
     101,    80,    81,    39,     7,    84,    85,    86,    34,    35,
      41,    26,    99,    50,    60,     7,    43,    42,     3,   249,
      88,    99,    98,    44,   103,   100,    10,     7,     7,     7,
      64,    30,     8,     9,     6,    11,    12,    13,     7,    65,
      23,    98,   159,   150,    70,    71,    72,    73,    74,   270,
      76,    77,    78,    79,    30,    32,    82,    83,   288,    -1,
     212,   287,   292,     7,   217,    -1,    92,   264,   315,    -1,
      14,    -1,    -1,    99,   230,    -1,    -1,    -1,    -1,   309,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,    -1,
      -1,    55,    -1,    89,    90,    91,    92,    93,    94,    95,
       7,    -1,    66,    67,    68,    -1,    -1,    14,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    81,    25,    26,
      84,    85,    86,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      47,    -1,    -1,    50,    -1,    52,    -1,    -1,    55,    89,
      90,    91,    92,    93,    94,    95,    -1,     7,    -1,    66,
      67,    68,    -1,    -1,    14,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    81,    25,    26,    84,    85,    86,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    47,    -1,    -1,
      50,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    66,    67,    68,    -1,
      -1,    14,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    81,    -1,    26,    84,    85,    86,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    47,    -1,    -1,    50,    -1,    52,
      -1,    -1,    55,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,     8,     9,    53,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     9,    65,    11,    12,    13,    -1,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    40,    65,    -1,    -1,    99,
      -1,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    92,    11,    12,    13,    -1,    -1,    -1,
      99,    -1,    89,    90,    91,    92,    93,    94,    95,    -1,
      27,    -1,    -1,   100,    89,    90,    91,    92,    93,    94,
      95,     8,     9,    -1,    11,    12,    13,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,     8,     9,
      27,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     7,    14,    26,    31,    32,    33,    39,    47,    50,
      52,    55,    66,    67,    68,    75,    80,    81,    84,    85,
      86,   103,   106,   111,   112,   113,   125,   126,   127,   131,
     132,   133,   134,   135,   136,   137,   138,   142,   143,   144,
     145,   146,   147,   148,   155,   159,   160,   161,   169,    62,
       7,     3,     4,     5,     6,     7,    10,    65,    70,    71,
      72,    73,    74,    76,    77,    78,    79,    82,    83,    92,
      99,   108,   109,   108,    34,    35,    94,   108,   117,   118,
     119,     7,    48,     7,    37,    56,    58,   157,     7,     7,
       7,   125,    87,    87,     7,     0,    98,    99,    98,    49,
     125,    98,    38,   120,   130,    98,    98,   120,   130,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,   108,    99,    97,   108,    97,
     108,   108,     8,     9,    11,    12,    13,    27,    89,    90,
      91,    92,    93,    94,    95,    99,    30,    99,    99,    48,
     102,    37,    15,     7,    51,     7,     7,    59,   158,    48,
      99,   108,   116,    99,    53,   108,     7,   163,   164,    69,
      69,   100,   108,   108,   108,   108,   108,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   116,   107,   108,    36,
      94,     7,   115,   117,     7,   114,   108,     7,   128,   129,
      99,    57,   115,   101,   110,   100,   102,   116,    54,    15,
      16,   100,   102,    28,    29,   106,   139,   140,   141,   100,
      25,   100,     7,   100,   102,    38,   102,   120,    40,    89,
     102,     7,   149,   150,     7,   100,   102,   108,   100,     7,
      17,    18,    19,    20,    22,   162,   162,    23,   163,   107,
     108,   139,    25,    30,   100,     7,     7,    39,   121,   108,
     108,   128,   162,   100,   102,    61,   104,   101,     7,   165,
     166,    27,    26,    50,    41,   122,    30,    99,   151,    60,
     154,   149,     7,   162,    63,   165,   167,   168,   107,    42,
      43,   124,   107,     3,    88,   152,    99,    98,    64,    24,
     167,    44,    25,   100,    10,   153,     7,   156,     7,   107,
       7,    30,     6,   100,   102,    23,    25,    45,    46,   123,
       7,   125,    98
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 24:
#line 157 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 25:
#line 159 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-1], yyvsp[0]); ;}
    break;

  case 26:
#line 163 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 27:
#line 165 "pars0grm.y"
    { yyval = pars_func(yyvsp[-3], yyvsp[-1]); ;}
    break;

  case 28:
#line 166 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 29:
#line 167 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 30:
#line 168 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 31:
#line 169 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 32:
#line 170 "pars0grm.y"
    { yyval = yyvsp[0];;}
    break;

  case 33:
#line 171 "pars0grm.y"
    { yyval = pars_op('+', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 34:
#line 172 "pars0grm.y"
    { yyval = pars_op('-', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 35:
#line 173 "pars0grm.y"
    { yyval = pars_op('*', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 36:
#line 174 "pars0grm.y"
    { yyval = pars_op('/', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 37:
#line 175 "pars0grm.y"
    { yyval = pars_op('-', yyvsp[0], NULL); ;}
    break;

  case 38:
#line 176 "pars0grm.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 39:
#line 177 "pars0grm.y"
    { yyval = pars_op('=', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 40:
#line 178 "pars0grm.y"
    { yyval = pars_op('<', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 41:
#line 179 "pars0grm.y"
    { yyval = pars_op('>', yyvsp[-2], yyvsp[0]); ;}
    break;

  case 42:
#line 180 "pars0grm.y"
    { yyval = pars_op(PARS_GE_TOKEN, yyvsp[-2], yyvsp[0]); ;}
    break;

  case 43:
#line 181 "pars0grm.y"
    { yyval = pars_op(PARS_LE_TOKEN, yyvsp[-2], yyvsp[0]); ;}
    break;

  case 44:
#line 182 "pars0grm.y"
    { yyval = pars_op(PARS_NE_TOKEN, yyvsp[-2], yyvsp[0]); ;}
    break;

  case 45:
#line 183 "pars0grm.y"
    { yyval = pars_op(PARS_AND_TOKEN, yyvsp[-2], yyvsp[0]); ;}
    break;

  case 46:
#line 184 "pars0grm.y"
    { yyval = pars_op(PARS_OR_TOKEN, yyvsp[-2], yyvsp[0]); ;}
    break;

  case 47:
#line 185 "pars0grm.y"
    { yyval = pars_op(PARS_NOT_TOKEN, yyvsp[0], NULL); ;}
    break;

  case 48:
#line 187 "pars0grm.y"
    { yyval = pars_op(PARS_NOTFOUND_TOKEN, yyvsp[-2], NULL); ;}
    break;

  case 49:
#line 189 "pars0grm.y"
    { yyval = pars_op(PARS_NOTFOUND_TOKEN, yyvsp[-2], NULL); ;}
    break;

  case 50:
#line 193 "pars0grm.y"
    { yyval = &pars_to_char_token; ;}
    break;

  case 51:
#line 194 "pars0grm.y"
    { yyval = &pars_to_number_token; ;}
    break;

  case 52:
#line 195 "pars0grm.y"
    { yyval = &pars_to_binary_token; ;}
    break;

  case 53:
#line 197 "pars0grm.y"
    { yyval = &pars_binary_to_number_token; ;}
    break;

  case 54:
#line 198 "pars0grm.y"
    { yyval = &pars_substr_token; ;}
    break;

  case 55:
#line 199 "pars0grm.y"
    { yyval = &pars_concat_token; ;}
    break;

  case 56:
#line 200 "pars0grm.y"
    { yyval = &pars_instr_token; ;}
    break;

  case 57:
#line 201 "pars0grm.y"
    { yyval = &pars_length_token; ;}
    break;

  case 58:
#line 202 "pars0grm.y"
    { yyval = &pars_sysdate_token; ;}
    break;

  case 59:
#line 203 "pars0grm.y"
    { yyval = &pars_rnd_token; ;}
    break;

  case 60:
#line 204 "pars0grm.y"
    { yyval = &pars_rnd_str_token; ;}
    break;

  case 64:
#line 215 "pars0grm.y"
    { yyval = pars_stored_procedure_call(yyvsp[-4]); ;}
    break;

  case 65:
#line 220 "pars0grm.y"
    { yyval = pars_procedure_call(yyvsp[-3], yyvsp[-1]); ;}
    break;

  case 66:
#line 224 "pars0grm.y"
    { yyval = &pars_replstr_token; ;}
    break;

  case 67:
#line 225 "pars0grm.y"
    { yyval = &pars_printf_token; ;}
    break;

  case 68:
#line 226 "pars0grm.y"
    { yyval = &pars_assert_token; ;}
    break;

  case 69:
#line 230 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 70:
#line 232 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 71:
#line 236 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 72:
#line 237 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 73:
#line 239 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 74:
#line 243 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 75:
#line 244 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]);;}
    break;

  case 76:
#line 245 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 77:
#line 249 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 78:
#line 251 "pars0grm.y"
    { yyval = pars_func(&pars_count_token,
				          que_node_list_add_last(NULL,
					    sym_tab_add_int_lit(
						pars_sym_tab_global, 1))); ;}
    break;

  case 79:
#line 256 "pars0grm.y"
    { yyval = pars_func(&pars_count_token,
					    que_node_list_add_last(NULL,
						pars_func(&pars_distinct_token,
						     que_node_list_add_last(
								NULL, yyvsp[-1])))); ;}
    break;

  case 80:
#line 262 "pars0grm.y"
    { yyval = pars_func(&pars_sum_token,
						que_node_list_add_last(NULL,
									yyvsp[-1])); ;}
    break;

  case 81:
#line 268 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 82:
#line 269 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 83:
#line 271 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 84:
#line 275 "pars0grm.y"
    { yyval = pars_select_list(&pars_star_denoter,
								NULL); ;}
    break;

  case 85:
#line 278 "pars0grm.y"
    { yyval = pars_select_list(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 86:
#line 279 "pars0grm.y"
    { yyval = pars_select_list(yyvsp[0], NULL); ;}
    break;

  case 87:
#line 283 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 88:
#line 284 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 89:
#line 288 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 90:
#line 290 "pars0grm.y"
    { yyval = &pars_update_token; ;}
    break;

  case 91:
#line 294 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 92:
#line 296 "pars0grm.y"
    { yyval = &pars_consistent_token; ;}
    break;

  case 93:
#line 300 "pars0grm.y"
    { yyval = &pars_asc_token; ;}
    break;

  case 94:
#line 301 "pars0grm.y"
    { yyval = &pars_asc_token; ;}
    break;

  case 95:
#line 302 "pars0grm.y"
    { yyval = &pars_desc_token; ;}
    break;

  case 96:
#line 306 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 97:
#line 308 "pars0grm.y"
    { yyval = pars_order_by(yyvsp[-1], yyvsp[0]); ;}
    break;

  case 98:
#line 317 "pars0grm.y"
    { yyval = pars_select_statement(yyvsp[-6], yyvsp[-4], yyvsp[-3],
								yyvsp[-2], yyvsp[-1], yyvsp[0]); ;}
    break;

  case 99:
#line 323 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 100:
#line 328 "pars0grm.y"
    { yyval = pars_insert_statement(yyvsp[-4], yyvsp[-1], NULL); ;}
    break;

  case 101:
#line 330 "pars0grm.y"
    { yyval = pars_insert_statement(yyvsp[-1], NULL, yyvsp[0]); ;}
    break;

  case 102:
#line 334 "pars0grm.y"
    { yyval = pars_column_assignment(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 103:
#line 338 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 104:
#line 340 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 105:
#line 346 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 106:
#line 352 "pars0grm.y"
    { yyval = pars_update_statement_start(FALSE,
								yyvsp[-2], yyvsp[0]); ;}
    break;

  case 107:
#line 358 "pars0grm.y"
    { yyval = pars_update_statement(yyvsp[-1], NULL, yyvsp[0]); ;}
    break;

  case 108:
#line 363 "pars0grm.y"
    { yyval = pars_update_statement(yyvsp[-1], yyvsp[0], NULL); ;}
    break;

  case 109:
#line 368 "pars0grm.y"
    { yyval = pars_update_statement_start(TRUE,
								yyvsp[0], NULL); ;}
    break;

  case 110:
#line 374 "pars0grm.y"
    { yyval = pars_update_statement(yyvsp[-1], NULL, yyvsp[0]); ;}
    break;

  case 111:
#line 379 "pars0grm.y"
    { yyval = pars_update_statement(yyvsp[-1], yyvsp[0], NULL); ;}
    break;

  case 112:
#line 384 "pars0grm.y"
    { yyval = pars_row_printf_statement(yyvsp[0]); ;}
    break;

  case 113:
#line 389 "pars0grm.y"
    { yyval = pars_assignment_statement(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 114:
#line 395 "pars0grm.y"
    { yyval = pars_elsif_element(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 115:
#line 399 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 116:
#line 401 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-1], yyvsp[0]); ;}
    break;

  case 117:
#line 405 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 118:
#line 407 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 119:
#line 408 "pars0grm.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 120:
#line 415 "pars0grm.y"
    { yyval = pars_if_statement(yyvsp[-5], yyvsp[-3], yyvsp[-2]); ;}
    break;

  case 121:
#line 421 "pars0grm.y"
    { yyval = pars_while_statement(yyvsp[-4], yyvsp[-2]); ;}
    break;

  case 122:
#line 429 "pars0grm.y"
    { yyval = pars_for_statement(yyvsp[-8], yyvsp[-6], yyvsp[-4], yyvsp[-2]); ;}
    break;

  case 123:
#line 433 "pars0grm.y"
    { yyval = pars_return_statement(); ;}
    break;

  case 124:
#line 438 "pars0grm.y"
    { yyval = pars_open_statement(
						ROW_SEL_OPEN_CURSOR, yyvsp[0]); ;}
    break;

  case 125:
#line 444 "pars0grm.y"
    { yyval = pars_open_statement(
						ROW_SEL_CLOSE_CURSOR, yyvsp[0]); ;}
    break;

  case 126:
#line 450 "pars0grm.y"
    { yyval = pars_fetch_statement(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 127:
#line 455 "pars0grm.y"
    { yyval = pars_column_def(yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); ;}
    break;

  case 128:
#line 459 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 129:
#line 461 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 130:
#line 465 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 131:
#line 467 "pars0grm.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 132:
#line 471 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 133:
#line 473 "pars0grm.y"
    { yyval = &pars_int_token;
					/* pass any non-NULL pointer */ ;}
    break;

  case 134:
#line 478 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 135:
#line 480 "pars0grm.y"
    { yyval = &pars_int_token;
					/* pass any non-NULL pointer */ ;}
    break;

  case 136:
#line 485 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 137:
#line 487 "pars0grm.y"
    { yyval = &pars_int_token;
					/* pass any non-NULL pointer */ ;}
    break;

  case 138:
#line 494 "pars0grm.y"
    { yyval = pars_create_table(yyvsp[-4], yyvsp[-2], yyvsp[0]); ;}
    break;

  case 139:
#line 498 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 140:
#line 500 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 141:
#line 504 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 142:
#line 505 "pars0grm.y"
    { yyval = &pars_unique_token; ;}
    break;

  case 143:
#line 509 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 144:
#line 510 "pars0grm.y"
    { yyval = &pars_clustered_token; ;}
    break;

  case 145:
#line 518 "pars0grm.y"
    { yyval = pars_create_index(yyvsp[-8], yyvsp[-7], yyvsp[-5], yyvsp[-3], yyvsp[-1]); ;}
    break;

  case 146:
#line 523 "pars0grm.y"
    { yyval = pars_commit_statement(); ;}
    break;

  case 147:
#line 528 "pars0grm.y"
    { yyval = pars_rollback_statement(); ;}
    break;

  case 148:
#line 532 "pars0grm.y"
    { yyval = &pars_int_token; ;}
    break;

  case 149:
#line 533 "pars0grm.y"
    { yyval = &pars_int_token; ;}
    break;

  case 150:
#line 534 "pars0grm.y"
    { yyval = &pars_char_token; ;}
    break;

  case 151:
#line 535 "pars0grm.y"
    { yyval = &pars_binary_token; ;}
    break;

  case 152:
#line 536 "pars0grm.y"
    { yyval = &pars_blob_token; ;}
    break;

  case 153:
#line 541 "pars0grm.y"
    { yyval = pars_parameter_declaration(yyvsp[-2],
							PARS_INPUT, yyvsp[0]); ;}
    break;

  case 154:
#line 544 "pars0grm.y"
    { yyval = pars_parameter_declaration(yyvsp[-2],
							PARS_OUTPUT, yyvsp[0]); ;}
    break;

  case 155:
#line 549 "pars0grm.y"
    { yyval = NULL; ;}
    break;

  case 156:
#line 550 "pars0grm.y"
    { yyval = que_node_list_add_last(NULL, yyvsp[0]); ;}
    break;

  case 157:
#line 552 "pars0grm.y"
    { yyval = que_node_list_add_last(yyvsp[-2], yyvsp[0]); ;}
    break;

  case 158:
#line 557 "pars0grm.y"
    { yyval = pars_variable_declaration(yyvsp[-2], yyvsp[-1]); ;}
    break;

  case 162:
#line 569 "pars0grm.y"
    { yyval = pars_cursor_declaration(yyvsp[-3], yyvsp[-1]); ;}
    break;

  case 166:
#line 585 "pars0grm.y"
    { yyval = pars_procedure_definition(yyvsp[-9], yyvsp[-7],
								yyvsp[-1]); ;}
    break;


    }

/* Line 1010 of yacc.c.  */
#line 2290 "pars0grm.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 589 "pars0grm.y"


