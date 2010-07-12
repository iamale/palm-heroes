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

#ifndef _GXLIB_GENERIC_WINDOWS_APPLICATION_H_
#define _GXLIB_GENERIC_WINDOWS_APPLICATION_H_

class iWinApp
{
protected:
	bool	m_bExit;
	bool	m_bInited;
	HWND	m_hWnd;
	uint32	m_Flags;
	iDib	m_BackBuff;
public:
	iWinApp();
	~iWinApp();
	bool Init(HINSTANCE hInst, LPCWSTR appName, uint32 flags);
	sint32 Run();
	void Exit(uint32 code);
	void Destroy();
	void DoPaint();

	//
	virtual void msg_MouseMove(const iPoint& pos){};
	virtual void msg_MouseDown(const iPoint& pos){};
	virtual void msg_MouseUp(const iPoint& pos){};

	//
	inline operator HWND()
	{ return m_hWnd; }
	
	//
	LRESULT OnMessage( HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam );
};

#endif //_GXLIB_GENERIC_WINDOWS_APPLICATION_H_

