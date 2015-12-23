; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CChx393View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "chx393.h"
LastPage=0

ClassCount=8
Class1=CChx393App
Class2=CChx393Doc
Class3=CChx393View
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_DIALOG
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX
Class6=show_histogram
Class7=CMydlg
Resource3=IDD_DIALOG1
Class8=CHLFilterDlg
Resource4=IDR_MAINFRAME

[CLS:CChx393App]
Type=0
HeaderFile=chx393.h
ImplementationFile=chx393.cpp
Filter=N
LastObject=CChx393App

[CLS:CChx393Doc]
Type=0
HeaderFile=chx393Doc.h
ImplementationFile=chx393Doc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CChx393Doc

[CLS:CChx393View]
Type=0
HeaderFile=chx393View.h
ImplementationFile=chx393View.cpp
Filter=C
LastObject=CChx393View
BaseClass=CScrollView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_BHIGH
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=chx393.cpp
ImplementationFile=chx393.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=0

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
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

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
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_Graa
Command10=IDD_DIALOG
Command11=ID_LineCom
Command12=ID_Equal
Command13=ID_FFT
Command14=ID_IFFT
Command15=ID_AVERAGE_FILTER
Command16=ID_MEDIAN_FILTER
Command17=ID_GRAD_SHARP
Command18=ID_RAPLAS_SHARP
Command19=ID_LOW
Command20=ID_HIGH
Command21=ID_BLOW
Command22=ID_BHIGH
CommandCount=22

[CLS:show_histogram]
Type=0
HeaderFile=show_histogram.h
ImplementationFile=show_histogram.cpp
BaseClass=CDialog
Filter=D
LastObject=show_histogram
VirtualFilter=dWC

[DLG:IDD_DIALOG]
Type=1
Class=CMydlg
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON4,button,1342242816

[CLS:CMydlg]
Type=0
HeaderFile=Mydlg.h
ImplementationFile=Mydlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CMydlg
VirtualFilter=dWC

[DLG:IDD_DIALOG1]
Type=1
Class=CHLFilterDlg
ControlCount=4
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_BUTTON3,button,1342242816

[CLS:CHLFilterDlg]
Type=0
HeaderFile=HLFilterDlg.h
ImplementationFile=HLFilterDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON3
VirtualFilter=dWC

