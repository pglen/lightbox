// LightBox.h : main header file for the LIGHTBOX application
//

#if !defined(AFX_LIGHTBOX_H__04C0B41F_0EEC_4F03_AA42_771A214DBB51__INCLUDED_)
#define AFX_LIGHTBOX_H__04C0B41F_0EEC_4F03_AA42_771A214DBB51__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLightBoxApp:
// See LightBox.cpp for the implementation of this class
//

class CLightBoxApp : public CWinApp
{
public:
	CLightBoxApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLightBoxApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLightBoxApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIGHTBOX_H__04C0B41F_0EEC_4F03_AA42_771A214DBB51__INCLUDED_)
