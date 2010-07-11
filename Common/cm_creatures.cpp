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

#include "stdafx.h"

#ifdef DO_INCLUDE_CREAT_DESC

const CREAT_DESCRIPTOR CREAT_DESC[CREAT_COUNT] = {
	/* Knight */
	{
		// Pesant
		1,NATION_HIGHMEN,
		1,1,										// Attack, defence
		3,1,TRANS_WALK,0,							// Speed, size, transportation, range attack
		2,											// Hit points
		1,1,										// Min, max damage
		{20,0,0,0,0,0,0},							// Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		22, 15, CPERK_NONE							// growth rate, power index, perls
	},{
		// Archer
		2,NATION_HIGHMEN,
		5,3,
		5,1,TRANS_WALK,24,
		10,
		2,3,
		{200,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		10, 140, CPERK_DOUBLESHOT
	},{
		// Pikeman
		3,NATION_HIGHMEN,
		5,9,
		5,1,TRANS_WALK,0,
		25,
		3,4,
		{250,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		7, 250, CPERK_NONE
	},{
		// Swordsman
		4,NATION_HIGHMEN,
		7,9,
		7,1,TRANS_WALK,0,
		30,
		4,6,
		{300,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 409, CPERK_NONE
	},{
		// Cavalry
		5,NATION_HIGHMEN,
		10,9,
		10,2,TRANS_WALK,0,
		40,
		5,10,
		{375,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 689, CPERK_JOUSTING
	},{
		// Paladin
		6,NATION_HIGHMEN,
		9,12,
		10,1,TRANS_WALK,0,
		65,
		10,20,
		{1000,0,0,0,0,1,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 1764, CPERK_DOUBLEATTACK
	},

	/* Barbarian */
	{
		// Goblin
		1,NATION_BARBARIANS,
		4,1,
		5,1,TRANS_WALK,0,
		3,
		1,2,
		{40,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		20, 33, CPERK_NONE
	},{
		// Orc
		2,NATION_BARBARIANS,
		3,4,
		3,1,TRANS_WALK,5,
		15,
		3,4,
		{175,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		10, 155, CPERK_NONE
	},{
		// Wolf
		3,NATION_BARBARIANS,
		6,2,
		9,2,TRANS_WALK,0,
		20,
		3,5,
		{200,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		7, 262, CPERK_DOUBLEATTACK
	},{
		// Ogre
		4,NATION_BARBARIANS,
		9,5,
		5,1,TRANS_WALK,0,
		60,
		5,7,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 627, CPERK_NONE
	},{
		// Troll
		5,NATION_BARBARIANS,
		10,5,
		8,1,TRANS_WALK,15,
		40,
		7,12,
		{700,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 807, CPERK_REGENERATES
	},{
		// Cyclop
		6,NATION_BARBARIANS,
		12,9,
		8,1,TRANS_WALK,0,
		100,
		12,24,
		{1000,0,0,0,0,1,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 2036, CPERK_TWOHEXATTACK
	},

	/* Wizard */
	{ 
		// Halfling
		1,NATION_WIZARDS,
		2,1,
		3,1,TRANS_WALK,5,
		3,
		1,3,
		{50,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		18, 41, CPERK_NONE
	},{
		// Boar
		2,NATION_WIZARDS,
		5,4,
		8,2,TRANS_WALK,0,
		15,
		2,3,
		{150,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		8, 149, CPERK_NONE
	},{
		// Golem
		3,NATION_WIZARDS,
		7,10,
		4,1,TRANS_WALK,0,
		35,
		4,5,
		{350,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 401, CPERK_LIFELESS | CPERK_QUARTERDMG
	},{
		// Roc
		4,NATION_WIZARDS,
		7,7,
		9,2,TRANS_FLY,0,
		40,
		5,8,
		{400,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 527, CPERK_NONE
	},{
		// Mage
		5,NATION_WIZARDS,
		12,8,
		9,1,TRANS_WALK,15,
		35,
		7,9,
		{700,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 748, CPERK_NOMELEEPENALTY
	},{
		// Titan
		6,NATION_WIZARDS,
		15,15,
		14,1,TRANS_WALK,20,
		300,
		20,30,
		{5000,0,0,0,2,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		3, 6950, CPERK_NOMELEEPENALTY
	},

	/* Warlock */
	{	
		// Centaur
		1,NATION_BEASTMEN,
		3,1,
		5,2,TRANS_WALK,5,
		5,
		1,2,
		{60,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		18, 47, CPERK_NONE
	},{
		// Gargoyle
		2,NATION_BEASTMEN,
		4,7,
		9,1,TRANS_FLY,0,
		15,
		2,3,
		{200,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		8, 175, CPERK_LIFELESS
	},{
		// Griffin
		3,NATION_BEASTMEN,
		6,6,
		8,2,TRANS_FLY,0,
		25,
		3,5,
		{300,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 334, CPERK_RETALTOALL
	},{
		// Minotaur
		4,NATION_BEASTMEN,
		9,8,
		8,1,TRANS_WALK,0,
		45,
		5,10,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 682, CPERK_NONE
	},{
		// Hydra
		5,NATION_BEASTMEN,
		8,9,
		3,2,TRANS_WALK,0,
		75,
		6,12,
		{800,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 872, CPERK_NONRETALATTACK | CPERK_ADJACENTATTACK
	},{
		// Black dragon
		6,NATION_BEASTMEN,
		14,14,
		15,2,TRANS_FLY,0,
		300,
		25,50,
		{5000,0,0,0,0,0,2},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		3, 8528, CPERK_ALLMAGICIMM | CPERK_TWOHEXATTACK
	},

	/* Sorcer */
	{
		// Sprite
		1,NATION_ELVES,
		4,2,
		6,1,TRANS_FLY,0,
		2,
		1,2,
		{50,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		18, 39, CPERK_NONRETALATTACK
	},{
		// Dwarf
		2,NATION_ELVES,
		6,6,
		4,1,TRANS_WALK,0,
		20,
		2,4,
		{250,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		8, 190, CPERK_40PROCRESIST
	},{
		// Elf
		3,NATION_ELVES,
		5,5,
		8,1,TRANS_WALK,20,
		15,
		2,3,
		{300,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 194, CPERK_DOUBLESHOT
	},{
		// Druid
		4,NATION_ELVES,
		7,7,
		8,1,TRANS_WALK,15,
		25,
		5,8,
		{400,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 433, CPERK_NOMELEEPENALTY
	},{
		// Unicorn
		5,NATION_ELVES,
		10,9,
		9,2,TRANS_WALK,0,
		60,
		7,14,
		{700,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 819, CPERK_NONE
	},{
		// Phoenix
		6,NATION_ELVES,
		12,10,
		18,2,TRANS_FLY,0,
		100,
		20,40,
		{1500,0,0,1,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		3, 3064, CPERK_FIREMAGICIMM | CPERK_TWOHEXATTACK
	},

		
	/* Necromant */
	{
		// Skeleton
		1,NATION_UNDEADS,
		4,3,
		5,1,TRANS_WALK,0,
		4,
		2,3,
		{75,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		18, 62, CPERK_UNDEAD
	},{
		// Zombie
		2,NATION_UNDEADS,
		5,2,
		5,1,TRANS_WALK,0,
		20,
		2,3,
		{200,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		8, 153, CPERK_UNDEAD
	},{
		// Mummy
		3,NATION_UNDEADS,
		6,6,
		7,1,TRANS_WALK,0,
		30,
		3,4,
		{300,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6, 320, CPERK_UNDEAD
	},{
		// Vampire
		4,NATION_UNDEADS,
		8,6,
		9,1,TRANS_FLY,0,
		40,
		5,7,
		{650,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		5, 746, CPERK_UNDEAD | CPERK_NONRETALATTACK | CPERK_DRAINLIFES
	},{
		// Lich
		5,NATION_UNDEADS,
		7,13,
		8,1,TRANS_WALK,15,
		35,
		8,10,
		{900,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 795, CPERK_UNDEAD | CPERK_NOMELEEPENALTY | CPERK_LICHSHOOT
	},{
		// Bone dragon
		6,NATION_UNDEADS,
		11,9,
		13,2,TRANS_FLY,0,
		150,
		25,45,
		{1500,0,0,1,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		3, 3559, CPERK_UNDEAD
	},

	/* Neutral = 9 */
	{
		// Rogue
		1,NATION_NEUTRAL,
		6,1,
		6,1,TRANS_WALK,0,
		4,
		1,2,
		{50,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		8, 54, CPERK_NONRETALATTACK
	},{
		// Nomad
		3,NATION_NEUTRAL,
		7,5,
		9,2,TRANS_WALK,0,
		20,
		2,5,
		{200,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		6,244, CPERK_NONE
	},{
		// Ghost
		5,NATION_NEUTRAL,
		8,6,
		7,1,TRANS_FLY,0,
		20,
		4,6,
		{1000,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 468, CPERK_UNDEAD | CPERK_GHOST
	},{
		// Genie
		6,NATION_NEUTRAL,
		10,9,
		10,1,TRANS_FLY,0,
		50,
		20,30,
		{750,0,0,0,1,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		3, 1725, CPERK_DOHALF
	},{
		// Medusa
		4,NATION_NEUTRAL,
		8,9,
		5,2,TRANS_WALK,0,
		35,
		6,10,
		{350,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 600, CPERK_NONE
	},{
		// Earth elemental
		4,NATION_NEUTRAL,
		8,8,
		4,1,TRANS_WALK,0,
		50,
		4,5,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 525, CPERK_EARTHMAGICIMM | CPERK_LIFELESS
	},{
		// Air elemental
		4,NATION_NEUTRAL,
		7,7,
		7,1,TRANS_WALK,0,
		35,
		2,8,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 428, CPERK_AIRMAGICIMM | CPERK_LIFELESS
	},{
		// Fire elemental
		4,NATION_NEUTRAL,
		8,6,
		6,1,TRANS_WALK,0,
		40,
		4,5,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 455, CPERK_FIREMAGICIMM | CPERK_LIFELESS
	},{
		// Water elemental
		4,NATION_NEUTRAL,
		6,8,
		5,1,TRANS_WALK,0,
		45,
		3,7,
		{500,0,0,0,0,0,0},							//	Gold,	Ore,	Wood,	Merc,	Gems,	Cryst,	Sulfur
		4, 512, CPERK_WATERMAGICIMM | CPERK_LIFELESS
	}
};

//////////////////////////////////////////////////////////////////////////
const sint32 INITIAL_HERO_ARMY[HERO_TYPE_COUNT][2][3] = {
	{
		// Knight
		{
			CREAT_PEASANT, 25, 50
		},{
			CREAT_ARCHER, 0, 7
		}
		
	},{
		// Barbarian
		{
			CREAT_GOBLIN, 15, 30
		},{
			CREAT_ORC, 0, 8
		}
	},{
		// Wizard
		{
			CREAT_HALFLING, 10, 20
		},{
			CREAT_BOAR, 0, 6
		}
	},{
		// Warlock
		{
			CREAT_CENTAUR, 11, 22
		},{
			CREAT_GARGOYLE, 0, 6
		}
	},{
		// Sorceress
		{
			CREAT_SPRITE, 14, 28
		},{
			CREAT_DWARF, 0, 8
		}
	},{
		// Necromancer
		{
			CREAT_SKELETON, 20, 40
		},{
			CREAT_ZOMBIE, 0, 9
		}
	}
};

#endif // DO_INCLUDE_CREAT_DESC

