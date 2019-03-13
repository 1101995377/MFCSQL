// databaseGUY.h : main header file for the DATABASEGUY application
//

#if !defined(AFX_DATABASEGUY_H__B1EC82F6_F25E_4E82_8A74_02B095C0E151__INCLUDED_)
#define AFX_DATABASEGUY_H__B1EC82F6_F25E_4E82_8A74_02B095C0E151__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYApp:
// See databaseGUY.cpp for the implementation of this class
//

class CDatabaseGUYApp : public CWinApp
{
public:
	CDatabaseGUYApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUYApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDatabaseGUYApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEGUY_H__B1EC82F6_F25E_4E82_8A74_02B095C0E151__INCLUDED_)
