#if !defined(AFX_ADDNEW2_H__745FE8C1_9408_4765_B59E_DC0FB35F791D__INCLUDED_)
#define AFX_ADDNEW2_H__745FE8C1_9408_4765_B59E_DC0FB35F791D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddNew2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAddNew2 dialog

class CAddNew2 : public CDialog
{
// Construction
public:
	CAddNew2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddNew2)
	enum { IDD = IDD_DIALOG3 };
	CString	m_cno1;
	CString	m_grade1;
	CString	m_sno1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddNew2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddNew2)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDNEW2_H__745FE8C1_9408_4765_B59E_DC0FB35F791D__INCLUDED_)
