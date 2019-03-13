// SHUJUNew.cpp : implementation file
//

#include "stdafx.h"
#include "databaseGUI.h"
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
	m_course = _T("");
	m_teacherid = _T("");
	m_teachername = _T("");
	//}}AFX_DATA_INIT
}


void CSHUJUNew::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSHUJUNew)
	DDX_Text(pDX, IDC_COURSE, m_course);
	DDX_Text(pDX, IDC_TEACHERID, m_teacherid);
	DDX_Text(pDX, IDC_TEACHERNAME, m_teachername);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSHUJUNew, CDialog)
	//{{AFX_MSG_MAP(CSHUJUNew)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSHUJUNew message handlers
