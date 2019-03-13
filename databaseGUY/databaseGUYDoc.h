// databaseGUYDoc.h : interface of the CDatabaseGUYDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATABASEGUYDOC_H__D58EC1F0_3119_4DC1_AF1D_3C2E78327A1F__INCLUDED_)
#define AFX_DATABASEGUYDOC_H__D58EC1F0_3119_4DC1_AF1D_3C2E78327A1F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "databaseGUYSet.h"


class CDatabaseGUYDoc : public COleDocument
{
protected: // create from serialization only
	CDatabaseGUYDoc();
	DECLARE_DYNCREATE(CDatabaseGUYDoc)

// Attributes
public:
	CDatabaseGUYSet m_databaseGUYSet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUYDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDatabaseGUYDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDatabaseGUYDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEGUYDOC_H__D58EC1F0_3119_4DC1_AF1D_3C2E78327A1F__INCLUDED_)
