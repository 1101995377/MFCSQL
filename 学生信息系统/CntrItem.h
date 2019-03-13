// CntrItem.h : interface of the CMyCntrItem class
//

#if !defined(AFX_CNTRITEM_H__7BB09BC4_595A_4EF2_890B_FCA6ABBBCC62__INCLUDED_)
#define AFX_CNTRITEM_H__7BB09BC4_595A_4EF2_890B_FCA6ABBBCC62__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMyDoc;
class CMyView;

class CMyCntrItem : public COleClientItem
{
	DECLARE_SERIAL(CMyCntrItem)

// Constructors
public:
	CMyCntrItem(CMyDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE.
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer.

// Attributes
public:
	CMyDoc* GetDocument()
		{ return (CMyDoc*)COleClientItem::GetDocument(); }
	CMyView* GetActiveView()
		{ return (CMyView*)COleClientItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCntrItem)
	public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();
	protected:
	virtual void OnGetItemPosition(CRect& rPosition);
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
	//}}AFX_VIRTUAL

// Implementation
public:
	~CMyCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__7BB09BC4_595A_4EF2_890B_FCA6ABBBCC62__INCLUDED_)
