// databaseGUIDoc.h : interface of the CDatabaseGUIDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATABASEGUIDOC_H__65986D1B_54C7_4383_B13F_8800F92C0C53__INCLUDED_)
#define AFX_DATABASEGUIDOC_H__65986D1B_54C7_4383_B13F_8800F92C0C53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "databaseGUISet.h"


class CDatabaseGUIDoc : public COleDocument
{
protected: // create from serialization only
	CDatabaseGUIDoc();
	DECLARE_DYNCREATE(CDatabaseGUIDoc)

// Attributes
public:
	CDatabaseGUISet m_databaseGUISet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUIDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDatabaseGUIDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDatabaseGUIDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEGUIDOC_H__65986D1B_54C7_4383_B13F_8800F92C0C53__INCLUDED_)
