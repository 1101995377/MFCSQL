// AddNew2.cpp : implementation file
//

#include "stdafx.h"
#include "databaseGUY.h"
#include "AddNew2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddNew2 dialog


CAddNew2::CAddNew2(CWnd* pParent /*=NULL*/)
	: CDialog(CAddNew2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddNew2)
	m_cno1 = _T("");
	m_grade1 = _T("");
	m_sno1 = _T("");
	//}}AFX_DATA_INIT
}


void CAddNew2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddNew2)
	DDX_Text(pDX, IDC_CNO1, m_cno1);
	DDX_Text(pDX, IDC_GRADE1, m_grade1);
	DDX_Text(pDX, IDC_SNO1, m_sno1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddNew2, CDialog)
	//{{AFX_MSG_MAP(CAddNew2)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddNew2 message handlers
