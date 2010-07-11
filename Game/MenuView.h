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


#ifndef _HMM_GAME_MENU_VIEW_H_
#define _HMM_GAME_MENU_VIEW_H_

//////////////////////////////////////////////////////////////////////////
class iMenuView : public iChildGameView
{
public:
	iMenuView();
	void Start();
	void OnCompose();
	bool Process(fix32 t);
	void OnMouseClick(const iPoint& pos);

	void StartCredits();
	void StopCredits();

private:
	void iCMDH_ControlCommand(iView* pView, CTRL_CMD_ID cmd, sint32 param);

private:
	iCreditsComposer	m_crComposer;
};


#endif //_HMM_GAME_MENU_VIEW_H_

