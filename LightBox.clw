; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CBlank
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "LightBox.h"

ClassCount=5
Class1=CLightBoxApp
Class2=CLightBoxDlg
Class3=CAboutDlg

ResourceCount=6
Resource1=IDD_LIGHTBOX_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG2
Class5=CBlank
Resource4=IDD_ABOUTBOX
Resource5=IDD_DIALOG1
Resource6=IDR_MENU1

[CLS:CLightBoxApp]
Type=0
HeaderFile=LightBox.h
ImplementationFile=LightBox.cpp
Filter=N

[CLS:CLightBoxDlg]
Type=0
HeaderFile=LightBoxDlg.h
ImplementationFile=LightBoxDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=LightBoxDlg.h
ImplementationFile=LightBoxDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_LIGHTBOX_DIALOG]
Type=1
Class=CLightBoxDlg
ControlCount=2
Control1=IDOK,button,1208025089
Control2=IDCANCEL,button,1073807360

[DLG:IDD_DIALOG2]
Type=1
Class=CBlank
ControlCount=0

[CLS:CBlank]
Type=0
HeaderFile=Blank.h
ImplementationFile=Blank.cpp
BaseClass=CDialog

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_RCLICK_WHITE
Command2=ID_RCLICK_GRAY
Command3=ID_RCLICK_DARKGRAY
Command4=ID_RCLICK_BLACK
Command5=ID_RCLICK_WINDOWSDEFAULT
Command6=ID_RCLICK_CUSTOM
Command7=ID_RCLICK_EXIT
CommandCount=7

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1208025089
Control2=IDCANCEL,button,1208025088

