/*
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
*/

//
//

#include "stdafx.h"
//#include "xjp.boot.h"

#include "xjp.quant.h"

namespace xjp {

// mpeg_quant_intra
static sint16 quant_boot[64] =
{
	8, 17, 18, 19, 21, 23, 25, 27,
	17, 18, 19, 21, 23, 25, 27, 28,
	20, 21, 22, 23, 24, 26, 28, 30,
	21, 22, 23, 24, 26, 28, 30, 32,
	22, 23, 24, 26, 28, 30, 32, 35,
	23, 24, 26, 28, 30, 32, 35, 38,
	25, 26, 28, 30, 32, 35, 38, 41,
	27, 28, 30, 32, 35, 38, 41, 45
};

// PS SFW 51% quality
static sint16 quant_luma[64] =
{
	8,	5,	5,	8,	11,	13,	15,	17,
	5,	6,	6,	7,	10,	12,	12,	15,
	5,	6,	6,	8,	12,	13,	17,	23,  
	8,	7,	8,	13,	13,	18,	23,	34,
	11,	10,	12,	13,	19,	25,	33,	38,
	13,	12,	13,	18,	25,	33,	38,	38,
	15,	12,	17,	23,	33,	38,	38,	38,
	17,	15,	23,	34,	38,	38,	38,	38
};

// PS SFW 51% quality (not subsampled)
static sint16 quant_chro[64] =
{
	8,	9,	16,	29,	32,	38,	38,	38,
	9,	14,	20,	26,	38,	38,	38,	38,
	16,	20,	21,	38,	38,	38,	38,	38,
	29,	26,	38,	38,	38,	38,	38,	38,
	32,	38,	38,	38,	38,	38,	38,	38,
	38,	38,	38,	38,	38,	38,	38,	38,
	38,	38,	38,	38,	38,	38,	38,	38,
	38,	38,	38,	38,	38,	38,	38,	38
};

static sint16 quant_chro2[64] =
{
	8,	16,	32,	64,	64,	64,	64,	64,
	16,	32,	64,	64,	64,	64,	64,	64,
	32,	64,	64,	64,	64,	64,	64,	64,
	64,	64,	64,	64,	64,	64,	64,	64,
	64,	64,	64,	64,	64,	64,	64,	64,
	64,	64,	64,	64,	64,	64,	64,	64,
	64,	64,	64,	64,	64,	64,	64,	64,
	64,	64,	64,	64,	64,	64,	64,	64
};

static sint16 quant_jluma[64] = 
{
	4,	2,	2,	4,	6,	10,	12,	15,
	3,	3,	3,	4,	6,	14,	15,	13,
	3,	3,	4,	6,	10,	14,	17,	14, 
	3,	4,	5,	7,	12,	21,	20,	15,
	4,	5,	9,	14,	17,	27,	25,	19,
	6,	8,	13,	16,	20,	26,	28,	23,
	12,	16,	19,	21,	25,	30,	30,	25,
	18,	23,	23,	24,	28,	25,	25,	24
};

static sint16 quant_luma423[] =
{
	8,	8,	9,	10,	14,	15,	20,	21,
	8,	9,	10,	14,	15,	20,	21,	27,
	9,	11,	13,	16,	19,	22,	27,	28,
	11,	12,	16,	19,	22,	26,	28,	33,
	12,	17,	19,	23,	26,	29,	33,	34,
	17,	18,	23,	26,	29,	32,	34,	36,
	18,	24,	25,	30,	31,	25,	36,	37,
	24,	25,	30,	31,	35,	36,	37,	38
};

static sint16* tables[] = 
{
	quant_luma,
	quant_chro,
	quant_jluma
};

void quant_init( sint16 quant[64], uint32 tabn, sint32 param, const uint8* order )
{
	const sint16* qtable = tables[ tabn ];
	if ( order ) {
		for( size_t n = 0; n != 64; n++ ) {
			quant[n] = (sint16)(qtable[order[n]] * param);
		}
	} else {
		for( size_t n = 0; n != 64; n++ ) {
			quant[n] = (sint16)(qtable[n] * param);
		}
	}
}


} //xjp

