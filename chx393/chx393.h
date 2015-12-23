// chx393.h : main header file for the CHX393 application
//

#if !defined(AFX_CHX393_H__E49C0C4B_F8F6_4789_9691_50D9DD2F24BF__INCLUDED_)
#define AFX_CHX393_H__E49C0C4B_F8F6_4789_9691_50D9DD2F24BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CChx393App:
// See chx393.cpp for the implementation of this class
//

class CChx393App : public CWinApp
{
public:
	CChx393App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChx393App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CChx393App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHX393_H__E49C0C4B_F8F6_4789_9691_50D9DD2F24BF__INCLUDED_)
