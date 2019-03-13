// databaseGUYSet.h : interface of the CDatabaseGUYSet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATABASEGUYSET_H__252A8279_5184_4D74_B5EE_0F4FB5F89485__INCLUDED_)
#define AFX_DATABASEGUYSET_H__252A8279_5184_4D74_B5EE_0F4FB5F89485__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDatabaseGUYSet : public CRecordset
{
public:
	CDatabaseGUYSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CDatabaseGUYSet)

// Field/Param Data
	//{{AFX_FIELD(CDatabaseGUYSet, CRecordset)
	CString	m_C_CNO;
	CString	m_CNAME;
	CString	m_TEACHER;
	CString	m_S_SNO;
	CString m_SNO;
	CString m_CNO;
	CString	m_SNAME;
	CString	m_SAGE;
	CString	m_SDEPT;
	CString	m_SC_SNO;
	CString	m_SC_CNO;
	CString	m_GRADE;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUYSet)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEGUYSET_H__252A8279_5184_4D74_B5EE_0F4FB5F89485__INCLUDED_)

