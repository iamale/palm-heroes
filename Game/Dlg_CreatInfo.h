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


#ifndef _HMM_GAME_CREATURE_INFORMATION_DIALOG_H_
#define _HMM_GAME_CREATURE_INFORMATION_DIALOG_H_

class iDlg_CreatInfo : public iBaseGameDlg
{
public:
	iDlg_CreatInfo(iViewMgr* pViewMgr, PLAYER_ID pid, iCreatGroup& cGroup, const iFurtSkills& furtSkills, bool bCanDismiss, sint32 moraleMod);

private:
	void OnCreateDlg();
	void DoCompose(const iRect& rect);
	iSize ClientSize() const;
	void iCMDH_ControlCommand(iView* pView, CTRL_CMD_ID cmd, sint32 param);

private:
	sint32			m_moraleMod;
	iCreatGroup&	m_cGroup;
	iFurtSkills		m_furtSkills;
	bool			m_bCanDismiss;
};

#endif //_HMM_GAME_CREATURE_INFORMATION_DIALOG_H_