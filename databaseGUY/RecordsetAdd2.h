#if !defined(AFX_RECORDSETADD2_H__1F136EAA_C2A3_445E_974E_FD7114495BD4__INCLUDED_)
#define AFX_RECORDSETADD2_H__1F136EAA_C2A3_445E_974E_FD7114495BD4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RecordsetAdd2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRecordsetAdd2 recordset

class CRecordsetAdd2 : public CRecordset
{
public:
	CRecordsetAdd2(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CRecordsetAdd2)

// Field/Param Data
	//{{AFX_FIELD(CRecordsetAdd2, CRecordset)
	CString	m_SNO;
	CString	m_CNO;
	CString	m_GRADE;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecordsetAdd2)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECORDSETADD2_H__1F136EAA_C2A3_445E_974E_FD7114495BD4__INCLUDED_)
