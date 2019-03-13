; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyView
LastTemplate=CRecordset
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "学生信息系统.h"
LastPage=0

ClassCount=7
Class1=CMyApp
Class2=CMyDoc
Class3=CMyView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=5
Resource1=IDR_CNTR_INPLACE
Resource2=IDR_MAINFRAME
Resource3=IDD_MY_FORM
Class5=CMySet
Class7=CRecordsetAdd
Resource4=IDD_ABOUTBOX
Resource5=IDD_DIALOG1

[CLS:CMyApp]
Type=0
HeaderFile=学生信息系统.h
ImplementationFile=学生信息系统.cpp
Filter=N

[CLS:CMyDoc]
Type=0
HeaderFile=学生信息系统Doc.h
ImplementationFile=学生信息系统Doc.cpp
Filter=N
LastObject=CMyDoc

[CLS:CMyView]
Type=0
HeaderFile=学生信息系统View.h
ImplementationFile=学生信息系统View.cpp
Filter=D
LastObject=IDC_ADD


[CLS:CMySet]
Type=0
HeaderFile=学生信息系统Set.h
ImplementationFile=学生信息系统Set.cpp
Filter=N
LastObject=CMySet

[DB:CMySet]
DB=1
DBType=ODBC
ColumnCount=10
Column1=[dbo].[C].[CNO], 12, 50
Column2=[CNAME], -1, 2147483647
Column3=[TEACHER], -1, 2147483647
Column4=[dbo].[S].[SNO], 12, 50
Column5=[SNAME], -1, 2147483647
Column6=[SAGE], 4, 4
Column7=[SDEPT], -1, 2147483647
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
HeaderFile=学生信息系统.cpp
ImplementationFile=学生信息系统.cpp
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
Class=CMyView
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
Class=CMyView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_CANCEL_EDIT_CNTR
CommandCount=7

[DLG:IDD_MY_FORM]
Type=1
Class=CMyView
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
Control18=IDC_BUTTON1,button,1342242816
Control19=IDC_BUTTON2,button,1342242816
Control20=IDC_BUTTON3,button,1342242816
Control21=IDC_BUTTON4,button,1342242816
Control22=IDC_EDIT2,edit,1350631552
Control23=IDC_STATIC,static,1342308352
Control24=IDC_BUTTON5,button,1342242816
Control25=IDC_BUTTON6,button,1342242816
Control26=IDC_EDIT4,edit,1350631552
Control27=IDC_STATIC,static,1342308352
Control28=IDC_STATIC,static,1342308352
Control29=IDC_LIST2,SysListView32,1350631425

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

[DB:CRecordsetAdd]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[SNO], 12, 50
Column2=[SNAME], -1, 2147483647
Column3=[SAGE], 4, 4
Column4=[SDEPT], -1, 2147483647
Column5=[SNAME], -1, 2147483647
Column6=[SAGE], 4, 4
Column7=[SDEPT], -1, 2147483647
Column8=[dbo].[SC].[SNO], 12, 50
Column9=[dbo].[SC].[CNO], 12, 50
Column10=[GRADE], -1, 2147483647

[CLS:CRecordsetAdd]
Type=0
HeaderFile=RecordsetAdd.h
ImplementationFile=RecordsetAdd.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CRecordsetAdd

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

