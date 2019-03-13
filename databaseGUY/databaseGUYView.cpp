// databaseGUYView.cpp : implementation of the CDatabaseGUYView class
//

#include "stdafx.h"
#include "databaseGUY.h"

#include "databaseGUYSet.h"
#include "databaseGUYDoc.h"
#include "CntrItem.h"
#include "databaseGUYView.h"
#include "AddNew.h"   	// CAddNew类
#include "AddNew2.h"
#include "MainFrm.h"		//主界面类
#include "SHUJUNew.h" 	// CSHUJUNew类
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView

IMPLEMENT_DYNCREATE(CDatabaseGUYView, CRecordView)

BEGIN_MESSAGE_MAP(CDatabaseGUYView, CRecordView)
	//{{AFX_MSG_MAP(CDatabaseGUYView)
	ON_WM_DESTROY()
	ON_WM_SETFOCUS()
	ON_WM_SIZE()
	ON_COMMAND(ID_OLE_INSERT_NEW, OnInsertObject)
	ON_COMMAND(ID_CANCEL_EDIT_CNTR, OnCancelEditCntr)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_DEL, OnDel)
	ON_BN_CLICKED(IDC_MOD, OnMod)
	ON_BN_CLICKED(IDC_CHECK, OnCheck)
	ON_BN_CLICKED(IDC_BUTTON5, OnCreateTalbebutton)
	ON_BN_CLICKED(IDC_BUTTON7, OnAddNewtableButton)
	ON_BN_CLICKED(IDC_BUTTON6, OnDelNewtalbeButton)
	ON_BN_CLICKED(IDC_BUTTON8, OnModButton)
	ON_BN_CLICKED(IDC_BUTTON9, OnSelect)
	ON_BN_CLICKED(IDC_query, Onquery)
	ON_BN_CLICKED(IDC_ADD2, OnAdd2)
	ON_BN_CLICKED(IDC_DEL2, OnDel2)
	ON_BN_CLICKED(IDC_MOD2, OnMod2)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_BN_CLICKED(IDC_query1, Onquery1)
	ON_BN_CLICKED(IDC_query2, Onquery2)
	ON_BN_CLICKED(IDC_query3, Onquery3)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView construction/destruction

CDatabaseGUYView::CDatabaseGUYView()
	: CRecordView(CDatabaseGUYView::IDD)
{
	//{{AFX_DATA_INIT(CDatabaseGUYView)
	m_pSet = NULL;
	m_checkname = _T("");
	m_checkname2 = _T("");
	m_checkname3 = _T("");
	m_query = _T("");
	m_sql = _T("");
	m_query1 = _T("");
	m_query2 = _T("");
	m_query3 = _T("");
	//}}AFX_DATA_INIT
	m_pSelection = NULL;
	// TODO: add construction code here

}

CDatabaseGUYView::~CDatabaseGUYView()
{
}

void CDatabaseGUYView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDatabaseGUYView)
	DDX_Text(pDX, IDC_CHECKNAME, m_checkname);
	DDX_Text(pDX, IDC_CHECKNAME2, m_checkname2);
	DDX_Text(pDX, IDC_CHECKNAME3, m_checkname3);
	DDX_Text(pDX, IDC_query_EDIT, m_query);
	DDX_Text(pDX, IDC_SQL_EDIT, m_sql);
	DDX_Text(pDX, IDC_query1_EDIT, m_query1);
	DDX_Text(pDX, IDC_query2_EDIT, m_query2);
	DDX_Text(pDX, IDC_query3_EDIT, m_query3);
	//}}AFX_DATA_MAP
}

BOOL CDatabaseGUYView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CDatabaseGUYView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_databaseGUYSet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();


	// TODO: remove this code when final selection model code is written
	//m_pSelection = NULL;    // initialize selection
    while (!m_pSet->IsEOF())
	{
		m_pSet->MoveNext();
		m_pSet->GetRecordCount();
	}
	m_pSet->MoveFirst();
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	//像这种过长的语句在word只能分开在不同行，但是在程序里要写在一行里。
	list->InsertColumn(0,"SNAME");
	list->InsertColumn(1,"SAGE"); 
	list->InsertColumn(2,"SDEPT"); 
	list->InsertColumn(3,"SNO");
    list->InsertColumn(4,"GRADE");
	list->InsertColumn(5,"CNO");
	list->InsertColumn(6,"CNAME");
	list->InsertColumn(7,"TEACHER");
	list->SetColumnWidth(0,80);
	list->SetColumnWidth(1,80);
	list->SetColumnWidth(2,80); 
	list->SetColumnWidth(3,80);
	list->SetColumnWidth(4,80);
	list->SetColumnWidth(5,80);
	list->SetColumnWidth(6,130);
	list->SetColumnWidth(7,80);
	UpdateData(false);
}

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView printing

BOOL CDatabaseGUYView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDatabaseGUYView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDatabaseGUYView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDatabaseGUYView::OnDestroy()
{
	// Deactivate the item on destruction; this is important
	// when a splitter view is being used.
   CRecordView::OnDestroy();
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
}


/////////////////////////////////////////////////////////////////////////////
// OLE Client support and commands

BOOL CDatabaseGUYView::IsSelected(const CObject* pDocItem) const
{
	// The implementation below is adequate if your selection consists of
	//  only CDatabaseGUYCntrItem objects.  To handle different selection
	//  mechanisms, the implementation here should be replaced.

	// TODO: implement this function that tests for a selected OLE client item

	return pDocItem == m_pSelection;
}

void CDatabaseGUYView::OnInsertObject()
{
	// Invoke the standard Insert Object dialog box to obtain information
	//  for new CDatabaseGUYCntrItem object.
	COleInsertDialog dlg;
	if (dlg.DoModal() != IDOK)
		return;

	BeginWaitCursor();

	CDatabaseGUYCntrItem* pItem = NULL;
	TRY
	{
		// Create new item connected to this document.
		CDatabaseGUYDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pItem = new CDatabaseGUYCntrItem(pDoc);
		ASSERT_VALID(pItem);

		// Initialize the item from the dialog data.
		if (!dlg.CreateItem(pItem))
			AfxThrowMemoryException();  // any exception will do
		ASSERT_VALID(pItem);
		
        if (dlg.GetSelectionType() == COleInsertDialog::createNewItem)
			pItem->DoVerb(OLEIVERB_SHOW, this);

		ASSERT_VALID(pItem);

		// As an arbitrary user interface design, this sets the selection
		//  to the last item inserted.

		// TODO: reimplement selection as appropriate for your application

		m_pSelection = pItem;   // set selection to last inserted item
		pDoc->UpdateAllViews(NULL);
	}
	CATCH(CException, e)
	{
		if (pItem != NULL)
		{
			ASSERT_VALID(pItem);
			pItem->Delete();
		}
		AfxMessageBox(IDP_FAILED_TO_CREATE);
	}
	END_CATCH

	EndWaitCursor();
}

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the container (not the server) causes the deactivation.
void CDatabaseGUYView::OnCancelEditCntr()
{
	// Close any in-place active item on this view.
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
	{
		pActiveItem->Close();
	}
	ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}

// Special handling of OnSetFocus and OnSize are required for a container
//  when an object is being edited in-place.
void CDatabaseGUYView::OnSetFocus(CWnd* pOldWnd)
{
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL &&
		pActiveItem->GetItemState() == COleClientItem::activeUIState)
	{
		// need to set focus to this item if it is in the same view
		CWnd* pWnd = pActiveItem->GetInPlaceWindow();
		if (pWnd != NULL)
		{
			pWnd->SetFocus();   // don't call the base class
			return;
		}
	}

	CRecordView::OnSetFocus(pOldWnd);
}

void CDatabaseGUYView::OnSize(UINT nType, int cx, int cy)
{
	CRecordView::OnSize(nType, cx, cy);
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
		pActiveItem->SetItemRects();
}

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView diagnostics

#ifdef _DEBUG
void CDatabaseGUYView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDatabaseGUYView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDatabaseGUYDoc* CDatabaseGUYView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDatabaseGUYDoc)));
	return (CDatabaseGUYDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView database support
CRecordset* CDatabaseGUYView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CDatabaseGUYView message handlers

void CDatabaseGUYView::OnAdd() 
{
	// TODO: Add your control notification handler code here
	CAddNew dlg; 
	CString str; 
	CString str1; 
	CDatabase db;
	if (IDOK==dlg.DoModal())
	{
		try
		{
			str1.Format("INSERT INTO S(SNO,SNAME,SAGE,SDEPT) values('%s','%s','%s','%s')",dlg.m_id,dlg.m_name,dlg.m_age,dlg.m_dept);
			db.Open("学生信息");
			db.ExecuteSQL(str1);
		}
		catch(CDBException *e)
		{
			AfxMessageBox(e->m_strError);
			return;
		}
		str.Format("添加[%s]成功！",dlg.m_name); 
		MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
	}
}

void CDatabaseGUYView::OnDel() 
{
	// TODO: Add your control notification handler code here
	CAddNew dlg; 
	CDatabase db; 
	try
	{
		CString str1; CString str;
		if (m_pSet->IsOpen())
		{
			m_pSet->Close();
		}
		str.Format("删除记录[%s]成功！",m_pSet->m_SNAME);
		str1.Format("DELETE FROM S WHERE SNO='%s'",m_pSet->m_SNO);
		db.Open("学生信息");
		db.ExecuteSQL(str1); 
		MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
		//	MessageBox("HELLO");
	}
	catch (CDBException* e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
}

void CDatabaseGUYView::OnMod() 
{
	// TODO: Add your control notification handler code here
	CAddNew dlg; 
	CString str; 
	CString str1; 
	CDatabase db;
	if (IDOK==dlg.DoModal())
	{
	try
	{
		if (m_pSet->IsOpen())
		{
			m_pSet->Close();
		}
		str1.Format("UPDATE S SET SNAME='%s',SAGE='%s',SDEPT='%s' WHERE SNO='%s'",dlg.m_name,dlg.m_age,dlg.m_dept,dlg.m_id);
		db.Open("学生信息");
		db.ExecuteSQL(str1);
	}
	catch(CDBException *e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
	str.Format("修改[%s]成功！",dlg.m_name);
	MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
	}
}

void CDatabaseGUYView::OnCheck() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CDatabase db;
	db.Open("学生信息");
	CString str;
	m_checkname.TrimLeft();
	if(m_checkname.IsEmpty())
	{
		MessageBox("要查询的学号不能为空! ");
		return;
	}
	CRecordset recset(&db);
	CString strSQL;
	strSQL.Format( "SELECT * FROM S WHERE SNO='%s'", m_checkname );
	recset.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);
	if(recset.IsEOF())
	{
		MessageBox("没有查到你要找的学生记录!");
	}
	else
	{
		CString temp1, temp2, temp4;
		CString temp3;
		recset.GetFieldValue("SNO", temp1);
		recset.GetFieldValue("SNAME", temp2);
		recset.GetFieldValue("SAGE", temp3);
		recset.GetFieldValue("SDEPT", temp4);
		m_pSet->m_SNO=temp1;
		m_pSet->m_SNAME=temp2;
		m_pSet->m_SAGE=temp3;
		m_pSet->m_SDEPT=temp4;
		GetDlgItem(IDC_ID_EDIT)-> SetWindowText(temp1); 
		GetDlgItem(IDC_NAME_EDIT)-> SetWindowText(temp2); 
		GetDlgItem(IDC_AGE_EDIT)-> SetWindowText(temp3); 
		GetDlgItem(IDC_DEPT_EDIT)-> SetWindowText(temp4); 
	}
	//注：这里的updatedata一样被我干掉了，用了上面四行代码代替。
	recset.Close();
}

void CDatabaseGUYView::OnCreateTalbebutton() 
{
	// TODO: Add your control notification handler code here
	CDatabase db;
	//if (!SQLConfigDataSource(NULL,ODBC_ADD_DSN,"SQL Server","DSN=学生信息"));
	try
	{
		db.Open("学生信息");
		db.ExecuteSQL("CREATE TABLE	C(CNO CHAR(10),CNAME CHAR(10),TEACHER CHAR(10), PRIMARY KEY (CNO))");
	}
	catch (CDBException* e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
	MessageBox("新建表成功！");
}

void CDatabaseGUYView::OnAddNewtableButton() 
{
	// TODO: Add your control notification handler code here
	CDatabase db;
	CSHUJUNew dlg; 
	CString str; 
	CString str1; 
	
	if (IDOK==dlg.DoModal())
	{
		try
		{
			str1.Format("INSERT INTO C(CNO,CNAME,TEACHER) values('%s','%s','%s')",dlg.m_cno,dlg.m_cname,dlg.m_teacher);
			db.Open("学生信息");
			db.ExecuteSQL(str1);
		}
		catch (CDBException* e)
		{
			AfxMessageBox(e->m_strError);
			return;
		}
		MessageBox("添加数据成功！");
	}
}

void CDatabaseGUYView::OnDelNewtalbeButton() 
{
	// TODO: Add your control notification handler code here
	CDatabase db;
	try
	{
		db.Open("学生信息");
		db.ExecuteSQL("DROP TABLE C");
	}
	catch(CDBException *e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
	MessageBox("删除表成功！");
}

void CDatabaseGUYView::OnModButton() 
{
	// TODO: Add your control notification handler code here
	CDatabase db;
	try
	{
		db.Open("学生信息");
		db.ExecuteSQL("ALTER TABLE C ADD CLASSGRADE INT");
	}
	catch(CDBException *e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
	MessageBox("修改表成功！");
}

void CDatabaseGUYView::OnSelect() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	list->DeleteAllItems(); 
	CDatabase db;
	db.Open("学生信息");
	CRecordset recset(&db);
	list->DeleteAllItems();
	CString sql,edit1;
	m_sql.TrimLeft();
	if ( m_sql.IsEmpty())
	{
		AfxMessageBox("请输入查询语句！");
		return;
	}
	sql.Format("%s", m_sql); 
	char tempp[255]; 
	strcpy(tempp,sql);
	for (int i=0;i<3;i++)
	{
		if (isupper(tempp[i]))
			tempp[i]=tolower(tempp[i]);
	}
	if((tempp[0]=='s' && tempp[1]=='e' && tempp[2]=='l'))
	{
		CString t="";
		int i=7;
        while(tempp[i]!=' ')
		{
		   t=t+tempp[i];
		   i++;
		}
		recset.Open(CRecordset::forwardOnly,sql,CRecordset::readOnly);
		int ii;
		while(!recset.IsEOF())
		{
			if(tempp[7]=='*')
			{
			if(tempp[14]=='C')
			{
			    CString temp8,temp9,temp10;
		    	recset.GetFieldValue("CNO",temp8);
                recset.GetFieldValue("CNAME",temp9);
                recset.GetFieldValue("TEACHER",temp10);
                ii=list->InsertItem(0,"");
                list->SetItemText(ii,5, temp8); 
                list->SetItemText(ii,6, temp9);
                list->SetItemText(ii,7, temp10);
			    UpdateData(false);
			    ii++;
		    	recset.MoveNext();
			}
			else if(tempp[15]=='C')
			{ 
			  CString temp5,temp6,temp7;
			  recset.GetFieldValue("SNO",temp5);
              recset.GetFieldValue("CNO",temp6);
              recset.GetFieldValue("GRADE",temp7);
              ii=list->InsertItem(0,"");
              list->SetItemText(ii,3, temp5); 
              list->SetItemText(ii,5, temp6);
              list->SetItemText(ii,4, temp7);
		   	  UpdateData(false);
		      ii++;
			  recset.MoveNext();
			}
			else
			{
              CString temp1,temp2,temp3,temp4;
			  recset.GetFieldValue("SNO",temp1); 
			  recset.GetFieldValue("SNAME",temp2); 
			  recset.GetFieldValue("SAGE",temp3); 
			  recset.GetFieldValue("SDEPT",temp4);
			  ii=list->InsertItem(0,"");
			  //list->InsertItem(ii,"");
			  list->SetItemText(ii,3, temp1); 
			  list->SetItemText(ii,0, temp2); 
			  list->SetItemText(ii,1, temp3); 
			  list->SetItemText(ii,2, temp4);
			  UpdateData(false);
			  ii++;
			  recset.MoveNext();
			}
			}
			else
			{
               CString temp1;
			   recset.GetFieldValue(t,temp1);
			   ii=list->InsertItem(0,"");
               int u=0;
			   if(t=="SNO")
			   {
				   u=3;
			   }
			   else if(t=="SNAME")
			   {
			       u=0;
			   }
			   else if(t=="SAGE")
			   {
			       u=1;
			   }
               else if(t=="SDEPT")
			   {
			       u=2;
			   }
               else if(t=="GRADE")
			   {
			       u=4;
			   }
			   else if(t=="CNO")
			   {
			       u=5;
			   }
               else if(t=="CNAME")
			   {
			       u=6;
			   }
               else if(t=="TEACHER")
			   {
			       u=7;  
			   }
			   else
			   {
			       u=8;
			   }
			   list->SetItemText(ii,u, temp1);
			   UpdateData(false);
			   ii++;
			   recset.MoveNext();
			}
		}
	}
	else
	{
		recset.Close(); MessageBox("查询成功！！！");
		try
		{
			db.ExecuteSQL(sql);
			db.Close();
		}
		catch (CDBException* e)
		{
			AfxMessageBox(e->m_strError);
			return;
		}
		MessageBox("执行成功，请刷新数据库显示执行结果！");
	}
	db.Close();
}
void CDatabaseGUYView::Onquery() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	//list->DeleteAllItems();
	CDatabase db;
	db.Open("学生信息");
	CRecordset recset(&db); 
	CRecordset recset2(&db);
	list->DeleteAllItems(); 
	CString sql,edit1,sql2; 
	CString t[50];
	m_query.TrimLeft();
	if ( m_query.IsEmpty())
	{
		AfxMessageBox("请输入正确的学号或课程号！");
		return;
	}
	//sql.Format("select * from S where (SNO='%s') or (SNAME='%s') or (SAGE='%s') or (SDEPT='%s')", m_query,m_query,m_query,m_query);
	sql.Format("select * from S inner join SC on S.SNO=SC.SNO inner join C on SC.CNO=C.CNO where S.SNO='%s' or C.CNO='%s' or SC.SNO='%s' or SC.CNO='%s'",m_query,m_query,m_query,m_query);
	recset.Open(CRecordset::forwardOnly,sql,CRecordset::readOnly); 
	int ii;
	while(!recset.IsEOF())
	{
	CString temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8; 
	recset.GetFieldValue("SNO",temp1);
	recset.GetFieldValue("SNAME",temp2); 
	recset.GetFieldValue("SAGE",temp3); 
	recset.GetFieldValue("SDEPT",temp4);
	recset.GetFieldValue("CNO",temp5);
	recset.GetFieldValue("GRADE",temp6);
	recset.GetFieldValue("CNAME",temp7);
	recset.GetFieldValue("TEACHER",temp8);
	ii=list->InsertItem(0,"");
	//list->InsertItem(ii,"");
	list->SetItemText(ii,3, temp1); 
	list->SetItemText(ii,0, temp2); 
	list->SetItemText(ii,1, temp3); 
	list->SetItemText(ii,2, temp4);
	list->SetItemText(ii,5, temp5);
	list->SetItemText(ii,4, temp6);
	list->SetItemText(ii,6, temp7);
	list->SetItemText(ii,7, temp8);
	UpdateData(false);
	ii++;
	recset.MoveNext();
	}
	recset.Close(); MessageBox("查询成功！！！");
	db.Close();
}

void CDatabaseGUYView::OnAdd2() 
{
	// TODO: Add your control notification handler code here
	CAddNew2 dlg; 
	CString str; 
	CString str1; 
	CDatabase db;
	if (IDOK==dlg.DoModal())
	{
		try
		{
			str1.Format("INSERT INTO SC(SNO,CNO,GRADE) values('%s','%s','%s')",dlg.m_sno1,dlg.m_cno1,dlg.m_grade1);
			db.Open("学生信息");
			db.ExecuteSQL(str1);
		}
		catch(CDBException *e)
		{
			AfxMessageBox(e->m_strError);
			return;
		}
		str.Format("添加[%s]成功！",dlg.m_sno1); 
		MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
	}
}

void CDatabaseGUYView::OnDel2() 
{
	// TODO: Add your control notification handler code here
	CAddNew2 dlg; 
	CDatabase db; 
	try
	{
		CString str1; CString str;
		if (m_pSet->IsOpen())
		{
			m_pSet->Close();
		}
		str.Format("删除记录[%s]成功！",m_pSet->m_CNO);
		str1.Format("DELETE FROM SC WHERE SNO='%s'",m_pSet->m_SNO);
		db.Open("学生信息");
		db.ExecuteSQL(str1); 
		MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
		//	MessageBox("HELLO");
	}
	catch (CDBException* e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
}

void CDatabaseGUYView::OnMod2() 
{
	// TODO: Add your control notification handler code here
	CAddNew2 dlg; 
	CString str; 
	CString str1; 
	CDatabase db;
	if (IDOK==dlg.DoModal())
	{
	try
	{
		if (m_pSet->IsOpen())
		{
			m_pSet->Close();
		}
		str1.Format("UPDATE SC SET CNO='%s',GRADE='%s' WHERE SNO='%s'",dlg.m_cno1,dlg.m_grade1,dlg.m_sno1);
		db.Open("学生信息");
		db.ExecuteSQL(str1);
	}
	catch(CDBException *e)
	{
		AfxMessageBox(e->m_strError);
		return;
	}
	str.Format("修改[%s]成功！",dlg.m_sno1);
	MessageBox(str,NULL,MB_OK|MB_ICONINFORMATION);
	}
}

void CDatabaseGUYView::OnCheck2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CDatabase db;
	db.Open("学生信息");
	CString str;
	m_checkname2.TrimLeft();
	m_checkname3.TrimLeft();
	if(m_checkname2.IsEmpty())
	{
		MessageBox("要查询的课程号不能为空! ");
		return;
	}
	else if(m_checkname3.IsEmpty())
	{
		MessageBox("要查询的学号不能为空! ");
		return;
	}
	CRecordset recset(&db);
	CString strSQL;
	strSQL.Format( "SELECT * FROM SC WHERE SNO='%s'  and CNO='%s'", m_checkname3,m_checkname2 );	
	recset.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);
	if(recset.IsEOF())
	{
		MessageBox("没有查到你要找的学生记录!");
	}
	else
	{
		CString temp1, temp2, temp3;
		recset.GetFieldValue("SNO", temp1);
		recset.GetFieldValue("CNO", temp2);
		recset.GetFieldValue("GRADE", temp3);
		m_pSet->m_SNO=temp1;
		m_pSet->m_CNO=temp2;
		m_pSet->m_GRADE=temp3;
		GetDlgItem(IDC_ID_EDIT2)-> SetWindowText(temp1); 
		GetDlgItem(IDC_CNO_EDIT2)-> SetWindowText(temp2); 
		GetDlgItem(IDC_GRADE_EDIT2)-> SetWindowText(temp3);  
	}
	//注：这里的updatedata一样被我干掉了，用了上面四行代码代替。
	recset.Close();
}

void CDatabaseGUYView::Onquery1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	//list->DeleteAllItems();
	CDatabase db;
	db.Open("学生信息");
	CRecordset recset(&db); 
	CRecordset recset2(&db);
	list->DeleteAllItems(); 
	CString sql,edit1,sql2; 
	CString t[50];
	m_query1.TrimLeft();
	if ( m_query1.IsEmpty())
	{
		AfxMessageBox("请输入正确的学号或课程号！");
		return;
	}
	//sql.Format("select * from S where (SNO='%s') or (SNAME='%s') or (SAGE='%s') or (SDEPT='%s')", m_query,m_query,m_query,m_query);
	sql.Format("select * from S  where  (SNO='%s') or (SNAME='%s') or (SAGE='%s') or (SDEPT='%s')",m_query1,m_query1,m_query1,m_query1);
	recset.Open(CRecordset::forwardOnly,sql,CRecordset::readOnly); 
	int ii;
	while(!recset.IsEOF())
	{
	CString temp1,temp2,temp3,temp4; 
	recset.GetFieldValue("SNO",temp1);
	recset.GetFieldValue("SNAME",temp2); 
	recset.GetFieldValue("SAGE",temp3); 
	recset.GetFieldValue("SDEPT",temp4);
	ii=list->InsertItem(0,"");
	//list->InsertItem(ii,"");
	list->SetItemText(ii,3, temp1); 
	list->SetItemText(ii,0, temp2); 
	list->SetItemText(ii,1, temp3); 
	list->SetItemText(ii,2, temp4);
	UpdateData(false);
	ii++;
	recset.MoveNext();
	}
	recset.Close(); MessageBox("查询成功！！！");
	db.Close();
}
void CDatabaseGUYView::Onquery2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	//list->DeleteAllItems();
	CDatabase db;
	db.Open("学生信息");
	CRecordset recset(&db); 
	CRecordset recset2(&db);
	list->DeleteAllItems(); 
	CString sql,edit1,sql2; 
	CString t[50];
	m_query2.TrimLeft();
	if ( m_query2.IsEmpty())
	{
		AfxMessageBox("请输入正确的学号或课程号！");
		return;
	}
	//sql.Format("select * from S where (SNO='%s') or (SNAME='%s') or (SAGE='%s') or (SDEPT='%s')", m_query,m_query,m_query,m_query);
	sql.Format("select * from SC  where  (SNO='%s') or (CNO='%s')",m_query2,m_query2);
	recset.Open(CRecordset::forwardOnly,sql,CRecordset::readOnly); 
	int ii;
	while(!recset.IsEOF())
	{
	CString temp1,temp2,temp3; 
	recset.GetFieldValue("SNO",temp1);
	recset.GetFieldValue("CNO",temp2); 
	recset.GetFieldValue("GRADE",temp3);
	ii=list->InsertItem(0,"");
	//list->InsertItem(ii,"");
	list->SetItemText(ii,3, temp1); 
	list->SetItemText(ii,5, temp2); 
	list->SetItemText(ii,4, temp3);
	UpdateData(false);
	ii++;
	recset.MoveNext();
	}
	recset.Close(); MessageBox("查询成功！！！");
	db.Close();
}
void CDatabaseGUYView::Onquery3() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CListCtrl * list=(CListCtrl*) GetDlgItem(IDC_LIST1);//(CListCtrl&)GetListCtrl();
	list->ModifyStyle(NULL,LVS_REPORT);
	list->SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_ONECLICKACTIVATE);
	//list->DeleteAllItems();
	CDatabase db;
	db.Open("学生信息");
	CRecordset recset(&db); 
	CRecordset recset2(&db);
	list->DeleteAllItems(); 
	CString sql,edit1,sql2; 
	CString t[50];
	m_query3.TrimLeft();
	if ( m_query3.IsEmpty())
	{
		AfxMessageBox("请输入正确的学号或课程号！");
		return;
	}
	//sql.Format("select * from S where (SNO='%s') or (SNAME='%s') or (SAGE='%s') or (SDEPT='%s')", m_query,m_query,m_query,m_query);
	sql.Format("select * from S inner join SC on S.SNO=SC.SNO where S.SNO='%s' or SC.SNO='%s'",m_query3,m_query3);
	recset.Open(CRecordset::forwardOnly,sql,CRecordset::readOnly); 
	int ii;
	while(!recset.IsEOF())
	{
	CString temp1,temp2,temp3,temp4,temp5,temp6; 
	recset.GetFieldValue("SNO",temp1);
	recset.GetFieldValue("SNAME",temp2); 
	recset.GetFieldValue("SAGE",temp3); 
	recset.GetFieldValue("SDEPT",temp4);
	recset.GetFieldValue("CNO",temp5);
	recset.GetFieldValue("GRADE",temp6);
	ii=list->InsertItem(0,"");
	//list->InsertItem(ii,"");
	list->SetItemText(ii,3, temp1); 
	list->SetItemText(ii,0, temp2); 
	list->SetItemText(ii,1, temp3); 
	list->SetItemText(ii,2, temp4);
	list->SetItemText(ii,5, temp5);
	list->SetItemText(ii,4, temp6);
	UpdateData(false);
	ii++;
	recset.MoveNext();
	}
	recset.Close(); MessageBox("查询成功！！！");
	db.Close();
}
