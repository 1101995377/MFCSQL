; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDatabaseGUYView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "databaseGUY.h"
LastPage=0

ClassCount=11
Class1=CDatabaseGUYApp
Class2=CDatabaseGUYDoc
Class3=CDatabaseGUYView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=7
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CDatabaseGUYSet
Resource3=IDD_DIALOG2
Class7=CRecordsetAdd
Resource4=IDD_DATABASEGUY_FORM
Class8=CAddNew
Resource5=IDR_CNTR_INPLACE
Class9=CSHUJUNew
Class10=CRecordsetAdd2
Resource6=IDD_DIALOG1
Class11=CAddNew2
Resource7=IDD_DIALOG3

[CLS:CDatabaseGUYApp]
Type=0
HeaderFile=databaseGUY.h
ImplementationFile=databaseGUY.cpp
Filter=N
LastObject=CDatabaseGUYApp

[CLS:CDatabaseGUYDoc]
Type=0
HeaderFile=databaseGUYDoc.h
ImplementationFile=databaseGUYDoc.cpp
Filter=N
LastObject=CDatabaseGUYDoc

[CLS:CDatabaseGUYView]
Type=0
HeaderFile=databaseGUYView.h
ImplementationFile=databaseGUYView.cpp
Filter=D
LastObject=IDC_query2
BaseClass=CRecordView
VirtualFilter=RVWC


[CLS:CDatabaseGUYSet]
Type=0
HeaderFile=databaseGUYSet.h
ImplementationFile=databaseGUYSet.cpp
Filter=N
LastObject=CDatabaseGUYSet

[DB:CDatabaseGUYSet]
DB=1
DBType=ODBC
ColumnCount=10
Column1=[dbo].[C].[CNO], 12, 50
Column2=[CNAME], -1, 2147483647
Column3=[TEACHER], -1, 2147483647
Column4=[dbo].[S].[SNO], 1, 10
Column5=[SNAME], 1, 10
Column6=[SAGE], 1, 10
Column7=[SDEPT], 1, 10
Column8=[dbo].[SC].[SNO], 12, 50
Column9=[dbo].[SC].[CNO], 12, 50
Column10=[GRADE], -1, 2147483647


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=databaseGUY.cpp
ImplementationFile=databaseGUY.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_EDIT_PASTE_SPECIAL
Command15=ID_OLE_INSERT_NEW
Command16=ID_OLE_EDIT_LINKS
Command17=ID_OLE_VERB_FIRST
Command18=ID_RECORD_FIRST
Command19=ID_RECORD_PREV
Command20=ID_RECORD_NEXT
Command21=ID_RECORD_LAST
Command22=ID_VIEW_TOOLBAR
Command23=ID_VIEW_STATUS_BAR
Command24=ID_APP_ABOUT
CommandCount=24

[MNU:IDR_CNTR_INPLACE]
Type=1
Class=CDatabaseGUYView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
CommandCount=9

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
Command15=ID_CANCEL_EDIT_CNTR
CommandCount=15

[ACL:IDR_CNTR_INPLACE]
Type=1
Class=CDatabaseGUYView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_CANCEL_EDIT_CNTR
CommandCount=7

[DLG:IDD_DATABASEGUY_FORM]
Type=1
Class=CDatabaseGUYView
ControlCount=58
Control1=IDC_STATIC,button,1342178055
Control2=IDC_STATIC,button,1342178055
Control3=IDC_STATIC,button,1342178055
Control4=IDC_ADD,button,1342242816
Control5=IDC_DEL,button,1342242816
Control6=IDC_MOD,button,1342242816
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_NAME_EDIT,edit,1350631552
Control12=IDC_ID_EDIT,edit,1350631552
Control13=IDC_CHECKNAME,edit,1350631552
Control14=IDC_AGE_EDIT,edit,1350631552
Control15=IDC_DEPT_EDIT,edit,1350631552
Control16=IDC_CHECK,button,1342242816
Control17=IDC_STATIC,static,1342308352
Control18=IDC_BUTTON5,button,1342242816
Control19=IDC_BUTTON6,button,1342242816
Control20=IDC_BUTTON7,button,1342242816
Control21=IDC_BUTTON8,button,1342242816
Control22=IDC_BUTTON9,button,1342242816
Control23=IDC_query,button,1342242816
Control24=IDC_query_EDIT,edit,1350631552
Control25=IDC_STATIC,static,1342308352
Control26=IDC_STATIC,static,1342308352
Control27=IDC_SQL_EDIT,edit,1350631552
Control28=IDC_STATIC,static,1342308352
Control29=IDC_LIST1,SysListView32,1350631425
Control30=IDC_STATIC,button,1342178055
Control31=IDC_ADD2,button,1342242816
Control32=IDC_DEL2,button,1342242816
Control33=IDC_MOD2,button,1342242816
Control34=IDC_STATIC,static,1342308352
Control35=IDC_STATIC,static,1342308352
Control36=IDC_STATIC,static,1342308352
Control37=IDC_CNO_EDIT2,edit,1350631552
Control38=IDC_ID_EDIT2,edit,1350631552
Control39=IDC_CHECKNAME3,edit,1350631552
Control40=IDC_GRADE_EDIT2,edit,1350631552
Control41=IDC_CHECKNAME2,edit,1350631552
Control42=IDC_CHECK2,button,1342242816
Control43=IDC_STATIC,static,1342308352
Control44=IDC_STATIC,static,1342308352
Control45=IDC_STATIC,button,1342178055
Control46=IDC_STATIC,button,1342178055
Control47=IDC_STATIC,button,1342178055
Control48=IDC_STATIC,static,1342308352
Control49=IDC_query3_EDIT,edit,1350631552
Control50=IDC_query3,button,1342242816
Control51=IDC_STATIC,button,1342178055
Control52=IDC_STATIC,static,1342308352
Control53=IDC_query1_EDIT,edit,1350631552
Control54=IDC_query1,button,1342242816
Control55=IDC_STATIC,button,1342178055
Control56=IDC_STATIC,static,1342308352
Control57=IDC_query2_EDIT,edit,1350631552
Control58=IDC_query2,button,1342242816

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_RECORD_FIRST
Command9=ID_RECORD_PREV
Command10=ID_RECORD_NEXT
Command11=ID_RECORD_LAST
Command12=ID_APP_ABOUT
CommandCount=12

[CLS:CRecordsetAdd]
Type=0
HeaderFile=RecordsetAdd.h
ImplementationFile=RecordsetAdd.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CRecordsetAdd

[DB:CRecordsetAdd]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[SNO], 1, 10
Column2=[SNAME], 1, 10
Column3=[SAGE], 1, 10
Column4=[SDEPT], 1, 10

[DLG:IDD_DIALOG1]
Type=1
Class=CAddNew
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_AGE,edit,1350631552
Control4=IDC_ID,edit,1350631552
Control5=IDC_DEPT,edit,1350631552
Control6=IDC_NAME,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352

[CLS:CAddNew]
Type=0
HeaderFile=AddNew.h
ImplementationFile=AddNew.cpp
BaseClass=CDialog
Filter=D
LastObject=CAddNew
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CSHUJUNew
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_CNO,edit,1350631552
Control7=IDC_CNAME,edit,1350631552
Control8=IDC_TEACHER,edit,1350631552

[CLS:CSHUJUNew]
Type=0
HeaderFile=SHUJUNew.h
ImplementationFile=SHUJUNew.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CSHUJUNew

[CLS:CRecordsetAdd2]
Type=0
HeaderFile=RecordsetAdd2.h
ImplementationFile=RecordsetAdd2.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CRecordsetAdd2

[DB:CRecordsetAdd2]
DB=1
DBType=ODBC
ColumnCount=3
Column1=[SNO], 12, 50
Column2=[CNO], 12, 50
Column3=[GRADE], -1, 2147483647

[DLG:IDD_DIALOG3]
Type=1
Class=CAddNew2
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_SNO1,edit,1350631552
Control7=IDC_CNO1,edit,1350631552
Control8=IDC_GRADE1,edit,1350631552

[CLS:CAddNew2]
Type=0
HeaderFile=AddNew2.h
ImplementationFile=AddNew2.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAddNew2

