
// srf-civilacsion.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CsrfcivilacsionApp:
// �йش����ʵ�֣������ srf-civilacsion.cpp
//

class CsrfcivilacsionApp : public CWinApp
{
public:
	CsrfcivilacsionApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CsrfcivilacsionApp theApp;