// Blank.cpp : implementation file
//

#include "stdafx.h"
#include "LightBox.h"
#include "Blank.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBlank dialog


CBlank::CBlank(CWnd* pParent /*=NULL*/)
	: CDialog(CBlank::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBlank)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBlank::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBlank)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBlank, CDialog)
	//{{AFX_MSG_MAP(CBlank)
	ON_WM_CTLCOLOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBlank message handlers

BOOL CBlank::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	HDC     hdc = ::GetDC(HWND_DESKTOP);
    int     xsize =  GetDeviceCaps(hdc, HORZRES);
    int     ysize =  GetDeviceCaps(hdc, VERTRES);
	SetWindowPos( NULL, 0, 0, xsize, ysize, SWP_NOZORDER);

	// The timer version of the fill
	if(!SetTimer(1, 30000, NULL))
		{
		}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

HBRUSH CBlank::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 

{
	//HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	HBRUSH hbr = CreateSolidBrush(RGB(255,255,255));
	return hbr;
}

void CBlank::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	EndDialog(IDOK);
	CDialog::OnLButtonDown(nFlags, point);
}

void CBlank::OnTimer(UINT nIDEvent) 
{
	KillTimer(1);
	EndDialog(IDOK);
	CDialog::OnTimer(nIDEvent);
}
