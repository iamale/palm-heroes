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


#ifndef _HMM_GAME_HERO_VIEW_SPELLBOOK_PAGE_H_
#define _HMM_GAME_HERO_VIEW_SPELLBOOK_PAGE_H_

#include "SpellListView.h"

class iSpellBookTab : public iHeroViewChild, public IViewCmdHandler
{

public:
	iSpellBookTab(iViewMgr* pViewMgr) : iHeroViewChild(pViewMgr)
	{
		iRect clRect(5,8, m_Rect.w-10, m_Rect.h-16);
		AddChild(m_pSpellListView = new iSpellListView(pViewMgr, NULL, clRect, 100, NULL, false));
		m_pSpellListView->SetMask(SPT_MASK_ALL);
	}

	void OnHeroChanged() 
	{
		m_pSpellListView->SetOwner(m_pHero);
	}
	
	void OnCompose()
	{
		iHeroViewChild::OnCompose();
		iRect rc = GetScrRect();
	}

	inline iSpellListView* SpellList() { return m_pSpellListView; }

	void iCMDH_ControlCommand(iView* pView, CTRL_CMD_ID cmd, sint32 param)
	{
	}

private:
	iSpellListView*	m_pSpellListView;
};

#endif //_HMM_GAME_HERO_VIEW_SPELLBOOK_PAGE_H_

