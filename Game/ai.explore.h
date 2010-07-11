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


#ifndef _HMM_GAME_AI_EXPLORER_H_
#define _HMM_GAME_AI_EXPLORER_H_

class iExplorePoint
{
public:
	iExplorePoint(iHero& hero);
	sint32 FindExplorePoint(sint32 radius, iPoint& target);
	void EnumAllExplorePoints(iShPointList& targets);

private:
	bool ScanRadius(sint32 radius, iShPointList& scanRes, iPlayer::iPassMap& passMap) const;

private:
	iHero&					m_hero;
	iPoint					m_pos;
	const iFogMap&			m_fogMap;
	iPlayer::iPassMap		m_passMap;
};

#endif //_HMM_GAME_AI_EXPLORER_H_

