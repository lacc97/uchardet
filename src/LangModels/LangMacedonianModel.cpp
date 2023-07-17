/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsSBCharSetProber-generated.h"
#include "../nsLanguageDetector.h"
#include "../nsLanguageDetector-generated.h"

/********* Language model for: Macedonian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-17 22:04:50.749968
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Windows_1251_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 4X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 6X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,CTR, /* 7X */
   63, 31,SYM, 31,SYM,SYM,SYM,SYM,SYM,SYM, 54,SYM, 25, 29, 70, 42, /* 8X */
   63,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 54,SYM, 25, 29, 70, 42, /* 9X */
  SYM, 71, 72, 15,SYM, 73,SYM,SYM, 67,SYM, 68,SYM,SYM,SYM,SYM, 64, /* AX */
  SYM,SYM, 69, 69, 74,SYM,SYM,SYM, 67,SYM, 68,SYM, 15, 55, 55, 64, /* BX */
    0, 18,  8, 16, 10,  3, 22, 17,  2, 57,  9, 11, 13,  4,  1, 12, /* CX */
    6,  7,  5, 14, 23, 24, 19, 20, 21, 65, 66, 59, 60, 56, 62, 61, /* DX */
    0, 18,  8, 16, 10,  3, 22, 17,  2, 57,  9, 11, 13,  4,  1, 12, /* EX */
    6,  7,  5, 14, 23, 24, 19, 20, 21, 65, 66, 59, 60, 56, 62, 61, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm855_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 4X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 6X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,CTR, /* 7X */
   63, 63, 31, 31, 67, 67, 68, 68, 55, 55, 69, 69, 64, 64, 15, 15, /* 8X */
   54, 54, 25, 25, 70, 70, 29, 29, 75, 76, 42, 42, 62, 62, 66, 66, /* 9X */
    0,  0, 18, 18, 19, 19, 10, 10,  3,  3, 23, 23, 16, 16,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 24, 24,  2,  2,SYM,SYM,SYM,SYM, 57, 57,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,  9,  9,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   11, 11, 13, 13,  4,  4,  1,  1, 12,SYM,SYM,SYM,SYM, 12, 61,SYM, /* DX */
   61,  6,  6,  7,  7,  5,  5, 14, 14, 22, 22,  8,  8, 60, 60,SYM, /* EX */
  SYM, 59, 59, 17, 17, 21, 21, 56, 56, 65, 65, 20, 20,SYM,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 4X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 44, 37, 39, 26, 46, 43, 41, 27, 52, 47, 36, 40, 30, 35, /* 6X */
   45, 58, 32, 33, 34, 38, 48, 50, 51, 49, 53,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 67, 63, 31, 68, 55, 69, 64, 15, 54, 25, 70, 29,SYM, 77, 42, /* AX */
    0, 18,  8, 16, 10,  3, 22, 17,  2, 57,  9, 11, 13,  4,  1, 12, /* BX */
    6,  7,  5, 14, 23, 24, 19, 20, 21, 65, 66, 59, 60, 56, 62, 61, /* CX */
    0, 18,  8, 16, 10,  3, 22, 17,  2, 57,  9, 11, 13,  4,  1, 12, /* DX */
    6,  7,  5, 14, 23, 24, 19, 20, 21, 65, 66, 59, 60, 56, 62, 61, /* EX */
  SYM, 67, 63, 31, 68, 55, 69, 64, 15, 54, 25, 70, 29,SYM, 78, 42, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 112;
static const unsigned int Unicode_CharOrder[] =
{
    65, 28,   66, 44,   67, 37,   68, 39,   69, 26,   70, 46,   71, 43,  72, 41,
    73, 27,   74, 52,   75, 47,   76, 36,   77, 40,   78, 30,   79, 35,  80, 45,
    82, 32,   83, 33,   84, 34,   85, 38,   86, 48,   87, 50,   88, 51,  89, 49,
    90, 53,   97, 28,   98, 44,   99, 37,  100, 39,  101, 26,  102, 46, 103, 43,
   104, 41,  105, 27,  106, 52,  107, 47,  108, 36,  109, 40,  110, 30, 111, 35,
   112, 45,  114, 32,  115, 33,  116, 34,  117, 38,  118, 48,  119, 50, 120, 51,
   121, 49,  122, 53, 1027, 31, 1029, 55, 1032, 15, 1033, 54, 1034, 25,1036, 29,
  1039, 42, 1040,  0, 1041, 18, 1042,  8, 1043, 16, 1044, 10, 1045,  3,1046, 22,
  1047, 17, 1048,  2, 1050,  9, 1051, 11, 1052, 13, 1053,  4, 1054,  1,1055, 12,
  1056,  6, 1057,  7, 1058,  5, 1059, 14, 1060, 23, 1061, 24, 1062, 19,1063, 20,
  1064, 21, 1072,  0, 1073, 18, 1074,  8, 1075, 16, 1076, 10, 1077,  3,1078, 22,
  1079, 17, 1080,  2, 1082,  9, 1083, 11, 1084, 13, 1085,  4, 1086,  1,1087, 12,
  1088,  6, 1089,  7, 1090,  5, 1091, 14, 1092, 23, 1093, 24, 1094, 19,1095, 20,
  1096, 21, 1107, 31, 1109, 55, 1112, 15, 1113, 54, 1114, 25, 1116, 29,1119, 42,
};


/* Model Table:
 * Total considered sequences: 1405 / 3136
 * - Positive sequences: first 613 (0.9950204964819953)
 * - Probable sequences: next 273 (886-613) (0.003979891583654749)
 * - Neutral sequences: last 2250 (0.0009996119343499421)
 * - Negative sequences: 1731 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 MacedonianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,
   0,3,0,3,0,0,1,1,1,1,0,1,0,0,3,0,0,0,0,0,1,0,0,0,1,0,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,0,
   0,3,0,3,0,0,0,0,0,0,0,0,0,0,2,0,0,1,1,0,0,0,0,0,0,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,
   0,3,0,1,0,0,1,0,1,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,
   0,3,0,3,0,0,0,0,1,0,0,0,0,0,3,0,0,0,0,0,1,0,0,0,0,0,2,0,
  3,3,3,3,1,3,3,3,3,3,3,3,2,2,3,2,3,3,3,3,3,3,2,3,3,0,1,0,
   1,1,0,2,0,0,0,1,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,1,2,2,2,1,1,3,3,0,0,0,
   1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,
   1,0,0,2,0,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,3,3,2,1,0,3,3,1,1,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,1,3,3,3,3,2,3,3,3,1,2,3,2,1,1,0,1,0,1,0,
   1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,
  3,3,3,3,3,3,3,3,3,2,1,3,2,3,3,2,1,1,1,3,1,2,1,2,2,1,0,0,
   1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,2,3,3,3,2,1,0,1,1,2,0,1,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,1,3,3,3,3,2,3,3,3,3,3,2,3,3,2,3,3,3,3,0,0,0,
   1,0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,1,3,1,3,2,1,3,2,1,1,1,3,3,3,0,3,2,0,1,0,
   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,2,3,3,2,3,3,2,2,3,2,2,2,0,3,1,0,1,0,
   1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,1,0,0,
   0,2,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,2,3,0,0,0,
   0,3,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,2,3,2,3,3,1,2,3,1,1,2,2,1,1,2,1,1,2,1,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,1,3,1,3,2,3,3,1,3,3,3,3,1,3,1,0,0,0,0,0,0,0,0,
   1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,1,3,3,1,1,3,3,1,2,1,1,0,1,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,
  3,3,3,3,3,1,3,0,3,2,2,1,0,1,3,0,0,0,2,1,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,1,1,1,2,3,1,3,1,1,3,3,0,0,0,0,0,0,1,0,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,2,1,3,3,1,3,3,2,3,2,1,0,0,1,2,0,0,0,0,1,1,0,
   0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,1,2,0,1,0,3,2,0,1,3,3,1,0,3,0,1,0,0,0,0,1,0,0,
   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,3,1,1,1,3,1,1,3,2,2,0,1,1,0,1,0,1,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,2,1,2,2,0,3,3,2,1,1,1,0,2,1,0,1,0,0,0,1,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,2,3,0,1,0,1,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,1,1,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,3,3,
   3,0,3,0,3,3,3,2,3,3,3,3,3,2,0,3,2,3,2,2,2,2,2,2,1,2,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,3,0,3,3,3,3,3,3,2,3,3,1,0,3,3,2,2,3,3,2,2,3,2,2,0,0,
  0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,1,0,1,2,3,
   2,0,3,0,3,3,3,1,3,3,3,3,3,2,0,3,3,2,2,2,3,2,2,1,2,2,0,0,
  3,1,3,3,3,2,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,3,0,1,3,3,3,2,3,2,3,2,2,0,3,2,1,2,2,1,2,1,0,1,2,0,0,
  3,2,2,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,
   3,0,3,0,2,3,3,3,3,2,3,2,2,1,0,3,2,2,1,3,2,2,1,1,1,2,0,0,
  0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,3,3,
   3,0,3,0,2,3,3,3,2,3,2,1,2,3,0,1,3,2,1,2,2,2,2,0,1,1,0,0,
  0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,3,3,2,3,2,3,3,1,2,3,0,1,1,1,1,1,2,3,1,0,1,2,0,0,
  0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,
   1,0,3,0,3,3,3,2,3,3,3,2,3,2,0,2,2,3,3,2,2,1,2,2,1,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,1,3,3,3,3,2,2,3,2,2,0,2,2,1,1,2,2,2,0,1,1,1,0,0,
  0,1,0,1,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,2,0,2,2,3,3,3,2,3,2,1,3,0,1,2,0,1,2,1,2,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,
   3,0,3,0,3,3,3,1,3,3,2,2,3,1,0,2,3,2,1,2,2,1,1,1,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,2,2,1,3,1,1,2,2,2,0,0,2,2,1,1,1,1,1,1,0,1,1,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,1,2,2,3,2,1,2,2,3,1,0,1,2,2,1,1,0,2,2,1,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,2,0,2,2,2,3,2,1,3,0,1,1,0,0,1,0,0,1,1,2,1,0,1,0,0,0,
  3,3,3,3,1,0,1,1,0,1,2,1,0,1,3,0,0,1,1,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,2,0,3,2,1,3,2,0,3,2,2,2,0,1,1,1,1,1,0,2,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,3,0,3,2,1,2,3,2,3,1,1,1,0,0,2,1,0,1,1,2,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,
   3,0,1,0,3,2,2,3,2,1,2,1,1,2,0,1,1,2,1,1,0,1,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,
   2,0,0,0,3,1,2,3,1,0,2,0,1,1,0,2,1,0,2,1,0,1,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,2,2,1,3,1,0,2,1,2,1,0,1,0,1,1,2,1,1,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,2,1,0,2,1,1,1,1,0,1,0,1,1,2,0,1,1,1,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,
   2,0,2,0,1,2,1,2,2,1,1,1,2,0,0,1,1,2,1,0,0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
   3,0,1,0,1,2,1,2,1,0,1,1,1,2,0,0,0,1,0,1,0,0,2,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,
   1,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,1,1,0,3,0,0,3,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,2,1,
   3,0,1,0,1,0,0,2,1,0,2,0,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,
   2,0,1,0,1,1,1,1,0,0,1,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,
  2,0,1,2,0,0,0,1,0,1,1,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,3,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
};


const SequenceModel Windows_1251MacedonianModel =
{
  Windows_1251_CharToOrderMap,
  MacedonianLangModel,
  56,
  (float)0.9990003880656501,
  PR_FALSE,
  "WINDOWS-1251",
  "mk"
};

const SequenceModel Ibm855MacedonianModel =
{
  Ibm855_CharToOrderMap,
  MacedonianLangModel,
  56,
  (float)0.9990003880656501,
  PR_FALSE,
  "IBM855",
  "mk"
};

const SequenceModel Iso_8859_5MacedonianModel =
{
  Iso_8859_5_CharToOrderMap,
  MacedonianLangModel,
  56,
  (float)0.9990003880656501,
  PR_FALSE,
  "ISO-8859-5",
  "mk"
};

const LanguageModel MacedonianModel =
{
  "mk",
  Unicode_CharOrder,
  112,
  MacedonianLangModel,
  56,
  4,
  (float)0.41003687343909273,
  22,
  (float)0.03216741519703955,
};