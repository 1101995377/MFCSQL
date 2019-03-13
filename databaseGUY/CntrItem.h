// CntrItem.h : interface of the CDatabaseGUYCntrItem class
//

#if !defined(AFX_CNTRITEM_H__66C6E36F_D6E9_47F1_973C_2544DB5FC569__INCLUDED_)
#define AFX_CNTRITEM_H__66C6E36F_D6E9_47F1_973C_2544DB5FC569__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDatabaseGUYDoc;
class CDatabaseGUYView;

class CDatabaseGUYCntrItem : public COleClientItem
{
	DECLARE_SERIAL(CDatabaseGUYCntrItem)

// Constructors
public:
	CDatabaseGUYCntrItem(CDatabaseGUYDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE.
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer.

// Attributes
public:
	CDatabaseGUYDoc* GetDocument()
		{ return (CDatabaseGUYDoc*)COleClientItem::GetDocument(); }
	CDatabaseGUYView* GetActiveView()
		{ return (CDatabaseGUYView*)COleClientItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseGUYCntrItem)
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
	~CDatabaseGUYCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__66C6E36F_D6E9_47F1_973C_2544DB5FC569__INCLUDED_)
