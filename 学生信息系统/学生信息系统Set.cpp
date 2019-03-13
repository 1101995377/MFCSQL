// 学生信息系统Set.cpp : implementation of the CMySet class
//

#include "stdafx.h"
#include "学生信息系统.h"
#include "学生信息系统Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySet implementation

IMPLEMENT_DYNAMIC(CMySet, CRecordset)

CMySet::CMySet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMySet)
	m_C_CNO = _T("");
	m_CNAME = _T("");
	m_TEACHER = _T("");
	m_S_SNO = _T("");
	m_SNAME = _T("");
	m_SAGE = 0;
	m_SDEPT = _T("");
	m_SC_SNO = _T("");
	m_SC_CNO = _T("");
	m_GRADE = _T("");
	m_nFields = 10;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}

CString CMySet::GetDefaultConnect()
{
	return _T("ODBC;DSN=学生信息");
}

CString CMySet::GetDefaultSQL()
{
	return _T("[dbo].[C],[dbo].[S],[dbo].[SC]");
}

void CMySet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMySet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[dbo].[C].[CNO]"), m_C_CNO);
	RFX_Text(pFX, _T("[CNAME]"), m_CNAME);
	RFX_Text(pFX, _T("[TEACHER]"), m_TEACHER);
	RFX_Text(pFX, _T("[dbo].[S].[SNO]"), m_S_SNO);
	RFX_Text(pFX, _T("[SNAME]"), m_SNAME);
	RFX_Long(pFX, _T("[SAGE]"), m_SAGE);
	RFX_Text(pFX, _T("[SDEPT]"), m_SDEPT);
	RFX_Text(pFX, _T("[dbo].[SC].[SNO]"), m_SC_SNO);
	RFX_Text(pFX, _T("[dbo].[SC].[CNO]"), m_SC_CNO);
	RFX_Text(pFX, _T("[GRADE]"), m_GRADE);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMySet diagnostics

#ifdef _DEBUG
void CMySet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMySet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
