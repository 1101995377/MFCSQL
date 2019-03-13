#if !defined(AFX_SHUJUNEW_H__0A240E7A_89B7_4114_8B5F_F31DA657CBF4__INCLUDED_)
#define AFX_SHUJUNEW_H__0A240E7A_89B7_4114_8B5F_F31DA657CBF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SHUJUNew.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSHUJUNew dialog

class CSHUJUNew : public CDialog
{
// Construction
public:
	CSHUJUNew(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSHUJUNew)
	enum { IDD = IDD_DIALOG2 };
	CString	m_course;
	CString	m_teacherid;
	CString	m_teachername;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSHUJUNew)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSHUJUNew)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHUJUNEW_H__0A240E7A_89B7_4114_8B5F_F31DA657CBF4__INCLUDED_)
