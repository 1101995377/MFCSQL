// RecordsetAdd2.cpp : implementation file
//

#include "stdafx.h"
#include "databaseGUY.h"
#include "RecordsetAdd2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecordsetAdd2

IMPLEMENT_DYNAMIC(CRecordsetAdd2, CRecordset)

CRecordsetAdd2::CRecordsetAdd2(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CRecordsetAdd2)
	m_SNO = _T("");
	m_CNO = _T("");
	m_GRADE = _T("");
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CRecordsetAdd2::GetDefaultConnect()
{
	return _T("ODBC;DSN=学生信息");
}

CString CRecordsetAdd2::GetDefaultSQL()
{
	return _T("[dbo].[SC]");
}

void CRecordsetAdd2::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CRecordsetAdd2)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[SNO]"), m_SNO);
	RFX_Text(pFX, _T("[CNO]"), m_CNO);
	RFX_Text(pFX, _T("[GRADE]"), m_GRADE);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CRecordsetAdd2 diagnostics

#ifdef _DEBUG
void CRecordsetAdd2::AssertValid() const
{
	CRecordset::AssertValid();
}

void CRecordsetAdd2::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
