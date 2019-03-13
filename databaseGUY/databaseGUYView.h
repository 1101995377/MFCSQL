// databaseGUYView.h : interface of the CDatabaseGUYView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATABASEGUYVIEW_H__753C63F3_AB90_43D0_9D27_BC13401268C2__INCLUDED_)
#define AFX_DATABASEGUYVIEW_H__753C63F3_AB90_43D0_9D27_BC13401268C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDatabaseGUYCntrItem;
class CDatabaseGUYSet;

class CDatabaseGUYView : public CRecordView
{
protected: // create from serialization only
	CDatabaseGUYView();
	DECLARE_DYNCREATE(CDatabaseGUYView)

public:
	//{{AFX_DATA(CDatabaseGUYView)
	enum { IDD = IDD_DATABASEGUY_FORM };
	CDatabaseGUYSet* m_pSet;
	CString	m_checkname;
	CString	m_checkname2;
	CString	m_checkname3;
	CString	m_query;
	CString	m_sql;
	CString	m_query1;
	CString	m_query2;
	CString	m_query3;
	//}}AFX_DATA

// Attributes
public:
	CDatabaseGUYDoc* GetDocument();
	// m_pSelection holds the selection to the current CDatabaseGUYCntrItem.
	// For many applications, such a member variable isn't adequate to
	//  represent a selection, such as a multiple selection or a selection
	//  of objects that are not CDatabaseGUYCntrItem objects.  This selection
	//  mechanism is provided just to help you get started.

	// TODO: replace this selection mechanism with one appropriate to your app.
	CDatabaseGUYCntrItem* m_pSelection;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUYView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL IsSelected(const CObject* pDocItem) const;// Container support
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDatabaseGUYView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDatabaseGUYView)
	afx_msg void OnDestroy();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnInsertObject();
	afx_msg void OnCancelEditCntr();
	afx_msg void OnAdd();
	afx_msg void OnDel();
	afx_msg void OnMod();
	afx_msg void OnCheck();
	afx_msg void OnCreateTalbebutton();
	afx_msg void OnAddNewtableButton();
	afx_msg void OnDelNewtalbeButton();
	afx_msg void OnModButton();
	afx_msg void OnSelect();
	afx_msg void Onquery();
	afx_msg void OnAdd2();
	afx_msg void OnDel2();
	afx_msg void OnMod2();
	afx_msg void OnCheck2();
	afx_msg void OnSelect2();
	afx_msg void OnClickList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void Onquery1();
	afx_msg void Onquery2();
	afx_msg void Onquery3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in databaseGUYView.cpp
inline CDatabaseGUYDoc* CDatabaseGUYView::GetDocument()
   { return (CDatabaseGUYDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEGUYVIEW_H__753C63F3_AB90_43D0_9D27_BC13401268C2__INCLUDED_)
