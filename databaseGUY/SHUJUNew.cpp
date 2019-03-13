// SHUJUNew.cpp : implementation file
//

#include "stdafx.h"
#include "databaseGUY.h"
#include "SHUJUNew.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSHUJUNew dialog


CSHUJUNew::CSHUJUNew(CWnd* pParent /*=NULL*/)
	: CDialog(CSHUJUNew::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSHUJUNew)
	m_cname = _T("");
	m_cno = _T("");
	m_teacher = _T("");
	//}}AFX_DATA_INIT
}


void CSHUJUNew::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSHUJUNew)
	DDX_Text(pDX, IDC_CNAME, m_cname);
	DDX_Text(pDX, IDC_CNO, m_cno);
	DDX_Text(pDX, IDC_TEACHER, m_teacher);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSHUJUNew, CDialog)
	//{{AFX_MSG_MAP(CSHUJUNew)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSHUJUNew message handlers
