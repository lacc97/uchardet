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

/********* Language model for: Swedish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2016-09-28 22:29:21.480940
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
static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 4X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 6X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 34,SYM,SYM,SYM,SYM,SYM,SYM, 48,SYM, 49,ILL, 50,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 52,ILL, 53, 54, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 55,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   56, 44, 57, 58, 17, 19, 38, 40, 32, 28, 45, 59, 60, 61, 47, 62, /* CX */
   63, 64, 65, 66, 35, 67, 21,SYM, 37, 68, 69, 70, 31, 71, 72, 73, /* DX */
   74, 44, 75, 76, 17, 19, 38, 40, 32, 28, 45, 77, 78, 79, 47, 80, /* EX */
   81, 82, 83, 84, 35, 85, 21,SYM, 37, 86, 87, 88, 31, 89, 90, 91, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 4X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 6X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 92,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   93, 44, 94, 95, 17, 19, 38, 40, 32, 28, 45, 96, 97, 98, 47, 99, /* CX */
  100,101,102,103, 35,104, 21,SYM, 37,105,106,107, 31,108,109,110, /* DX */
  111, 44,112,113, 17, 19, 38, 40, 32, 28, 45,114,115,116, 47,117, /* EX */
  118,119,120,121, 35,122, 21,SYM, 37,123,124,125, 31, 42,126,127, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 4X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 6X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,128,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  129, 44,130,131, 17, 19, 38, 40, 32, 28, 45,132,133,134, 47,135, /* CX */
  136,137,138,139, 35,140, 21,SYM, 37,141,142,143, 31,144,145,146, /* DX */
  147, 44,148,149, 17, 19, 38, 40, 32, 28, 45,150,151,152, 47,153, /* EX */
  154,155,156,157, 35,158, 21,SYM, 37,159,160,161, 31,162,163,164, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 4X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 6X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,165,166,167,SYM,168,169,SYM,SYM,170,171,172,173,SYM,174,SYM, /* AX */
  SYM,175,SYM,176,SYM,177,178,SYM,SYM,179,180,181,182, 43,183, 43, /* BX */
   29, 44,184,185, 17, 19, 38,186,187, 28,188,189, 39,190, 47, 41, /* CX */
  191,192, 33,193, 35,194, 21,SYM, 37, 36,195,196, 31,197, 46,198, /* DX */
   29, 44,199,200, 17, 19, 38,201,202, 28,203,204, 39,205, 47, 41, /* EX */
  206,207, 33,208, 35,209, 21,SYM, 37, 36,210,211, 31,212, 46,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 4X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 22, 20,  9,  1, 14, 12, 18,  6, 23, 10,  7, 11,  3,  8, /* 6X */
   15, 30,  2,  5,  4, 16, 13, 26, 25, 24, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,213,SYM,214,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,215,216,SYM,SYM,217,SYM,SYM,SYM,218,219,220,SYM, /* BX */
  221, 44,222,223, 17, 19, 38, 40, 32, 28, 45,224,225,226, 47,227, /* CX */
  228,229,230,231, 35,232, 21,SYM, 37,233,234,235, 31,236,237,238, /* DX */
  239, 44,240,241, 17, 19, 38, 40, 32, 28, 45,242,243,244, 47,245, /* EX */
  246,247,248,249, 35,249, 21,SYM, 37,249,249,249, 31,249,249,249, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 748
 * First 512 sequences: 0.997323508584682
 * Next 512 sequences (512-1024): 0.0026764914153179875
 * Rest: 1.7780915628762273e-17
 * Negative sequences: TODO
 */
static const PRUint8 SwedishLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,2,3,3,3,3,3,2,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,3,2,3,3,3,3,3,3,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,2,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,2,2,2,2,3,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,2,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,3,2,3,3,2,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,0,2,0,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,0,2,0,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,0,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,0,2,2,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,2,3,3,3,3,0,2,3,2,0,0,0,2,0,0,0,
  3,3,3,2,3,2,3,3,3,2,0,2,2,2,3,2,3,3,0,3,2,3,0,3,3,0,0,0,2,0,0,
  3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,3,2,2,2,2,3,2,0,2,3,2,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,0,2,0,3,2,3,2,0,3,0,0,0,2,0,
  2,2,3,3,3,3,0,3,0,3,3,3,3,3,3,3,2,2,0,0,3,0,3,0,0,3,0,0,0,0,0,
  3,3,3,3,3,2,3,2,3,2,2,2,2,0,0,0,3,3,2,3,2,3,2,3,3,0,0,3,0,2,0,
  2,3,3,3,3,3,2,3,0,3,3,3,3,3,2,0,0,0,2,0,0,2,3,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,3,2,2,2,2,0,3,0,3,0,3,2,2,0,3,0,0,2,2,0,2,
  3,3,3,3,3,3,2,3,2,3,3,3,3,3,2,3,0,2,2,0,3,2,2,3,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,2,2,0,2,2,2,3,3,2,3,3,3,3,3,3,0,0,2,2,0,0,
  3,3,0,2,2,3,2,3,3,3,2,0,0,0,2,0,3,3,0,0,0,3,2,0,0,0,0,0,2,0,0,
  3,2,3,3,3,3,2,3,3,3,3,3,3,2,3,3,2,0,2,0,3,0,3,2,0,3,0,2,0,0,0,
  3,3,0,3,3,0,3,2,3,0,2,2,0,0,2,3,2,0,2,0,0,0,2,0,2,2,0,0,0,0,0,
  3,3,2,2,2,3,3,2,3,2,2,0,0,0,0,0,2,0,2,0,0,0,0,0,2,0,2,2,0,0,0,
  3,3,0,2,2,0,2,0,3,0,2,0,0,0,0,0,2,0,2,0,0,0,2,0,2,0,0,2,0,0,0,
  0,3,2,2,0,2,0,2,2,2,0,0,0,2,0,2,0,0,2,0,0,2,2,0,0,0,0,0,0,0,0,
  0,0,0,2,0,0,2,0,3,0,2,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Windows_1252SwedishModel =
{
  Windows_1252_CharToOrderMap,
  SwedishLangModel,
  31,
  (float)0.997323508584682,
  PR_TRUE,
  "WINDOWS-1252",
  "sv"
};

const SequenceModel Iso_8859_9SwedishModel =
{
  Iso_8859_9_CharToOrderMap,
  SwedishLangModel,
  31,
  (float)0.997323508584682,
  PR_TRUE,
  "ISO-8859-9",
  "sv"
};

const SequenceModel Iso_8859_1SwedishModel =
{
  Iso_8859_1_CharToOrderMap,
  SwedishLangModel,
  31,
  (float)0.997323508584682,
  PR_TRUE,
  "ISO-8859-1",
  "sv"
};

const SequenceModel Iso_8859_4SwedishModel =
{
  Iso_8859_4_CharToOrderMap,
  SwedishLangModel,
  31,
  (float)0.997323508584682,
  PR_TRUE,
  "ISO-8859-4",
  "sv"
};

const SequenceModel Iso_8859_15SwedishModel =
{
  Iso_8859_15_CharToOrderMap,
  SwedishLangModel,
  31,
  (float)0.997323508584682,
  PR_TRUE,
  "ISO-8859-15",
  "sv"
};
