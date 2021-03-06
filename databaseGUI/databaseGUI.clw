; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDatabaseGUIView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "databaseGUI.h"
LastPage=0

ClassCount=9
Class1=CDatabaseGUIApp
Class2=CDatabaseGUIDoc
Class3=CDatabaseGUIView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=7
Resource1=IDD_DATABASEGUI_FORM
Resource2=IDD_ABOUTBOX
Class5=CDatabaseGUISet
Resource3=IDR_MAINFRAME
Class7=CRecordsetAdd
Resource4=IDR_CNTR_INPLACE
Class8=CAddNew
Resource5=IDD_DIALOG1
Class9=CSHUJUNew
Resource6=IDD_DIALOG2
Resource7=IDD_DIALOG3

[CLS:CDatabaseGUIApp]
Type=0
HeaderFile=databaseGUI.h
ImplementationFile=databaseGUI.cpp
Filter=N

[CLS:CDatabaseGUIDoc]
Type=0
HeaderFile=databaseGUIDoc.h
ImplementationFile=databaseGUIDoc.cpp
Filter=N

[CLS:CDatabaseGUIView]
Type=0
HeaderFile=databaseGUIView.h
ImplementationFile=databaseGUIView.cpp
Filter=D
LastObject=CDatabaseGUIView
BaseClass=CRecordView
VirtualFilter=RVWC


[CLS:CDatabaseGUISet]
Type=0
HeaderFile=databaseGUISet.h
ImplementationFile=databaseGUISet.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r
LastObject=CDatabaseGUISet

[DB:CDatabaseGUISet]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[SNO], 12, 50
Column2=[SNAME], -1, 2147483647
Column3=[SAGE], 12, 50
Column4=[SDEPT], -1, 2147483647

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=databaseGUI.cpp
ImplementationFile=databaseGUI.cpp
Filter=D

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
Class=CDatabaseGUIView
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
Class=CDatabaseGUIView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_CANCEL_EDIT_CNTR
CommandCount=7

[DLG:IDD_DATABASEGUI_FORM]
Type=1
Class=CDatabaseGUIView
ControlCount=29
Control1=IDC_ID_EDIT,edit,1350631552
Control2=IDC_NAME_EDIT,edit,1350631552
Control3=IDC_DEPT_EDIT,edit,1350631552
Control4=IDC_AGE_EDIT,edit,1350631552
Control5=IDC_CHECKNAME,edit,1350631552
Control6=IDC_ADD,button,1342242816
Control7=IDC_MOD,button,1342242816
Control8=IDC_CHECK,button,1342242816
Control9=IDC_DEL,button,1342242816
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,button,1342177287
Control15=IDC_STATIC,static,1342312448
Control16=IDC_STATIC,button,1342178055
Control17=IDC_STATIC,button,1342177287
Control18=CreateTalbebutton,button,1342242816
Control19=DelNewtalbeButton,button,1342242816
Control20=AddNewtableButton,button,1342242816
Control21=ModButton,button,1342242816
Control22=IDC_SQL_EDIT,edit,1350631552
Control23=IDC_STATIC,static,1342308352
Control24=Select,button,1342242816
Control25=query,button,1342242816
Control26=IDC_query_EDIT,edit,1350631552
Control27=IDC_STATIC,static,1342308352
Control28=IDC_STATIC,static,1342308352
Control29=IDC_LIST1,SysListView32,1350631425

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
Column1=[SNO], 12, 50
Column2=[SNAME], -1, 2147483647
Column3=[SAGE], 12, 50
Column4=[SDEPT], -1, 2147483647

[DLG:IDD_DIALOG1]
Type=1
Class=CAddNew
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_NAME,edit,1350631552
Control4=IDC_ID,edit,1350631552
Control5=IDC_AGE,edit,1350631552
Control6=IDC_DEPT,edit,1350631552
Control7=IDC_STATIC,button,1342178055
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352

[CLS:CAddNew]
Type=0
HeaderFile=AddNew.h
ImplementationFile=AddNew.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAddNew

[DLG:IDD_DIALOG2]
Type=1
Class=CSHUJUNew
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_TEACHERNAME,edit,1350631552
Control4=IDC_TEACHERID,edit,1350631552
Control5=IDC_COURSE,edit,1350631552
Control6=IDC_STATIC,button,1342178055
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352

[CLS:CSHUJUNew]
Type=0
HeaderFile=SHUJUNew.h
ImplementationFile=SHUJUNew.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CSHUJUNew

[DLG:IDD_DIALOG3]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

