// 学生信息系统Set.h : interface of the CMySet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SET_H__F541629B_689D_49D6_9868_5F7DB4856A23__INCLUDED_)
#define AFX_SET_H__F541629B_689D_49D6_9868_5F7DB4856A23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMySet : public CRecordset
{
public:
	CMySet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMySet)

// Field/Param Data
	//{{AFX_FIELD(CMySet, CRecordset)
	CString	m_C_CNO;
	CString	m_CNAME;
	CString	m_TEACHER;
	CString	m_S_SNO;
	CString	m_SNAME;
	long	m_SAGE;
	CString	m_SDEPT;
	CString	m_SC_SNO;
	CString	m_SC_CNO;
	CString	m_GRADE;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySet)
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

#endif // !defined(AFX_SET_H__F541629B_689D_49D6_9868_5F7DB4856A23__INCLUDED_)

