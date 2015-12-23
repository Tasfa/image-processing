// show_histogram.cpp : implementation file
//

#include "stdafx.h"
#include "chx393.h"
#include "show_histogram.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// show_histogram dialog


show_histogram::show_histogram(CWnd* pParent /*=NULL*/)
	: CDialog(show_histogram::IDD, pParent)
{
	//{{AFX_DATA_INIT(show_histogram)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void show_histogram::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(show_histogram)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(show_histogram, CDialog)
	//{{AFX_MSG_MAP(show_histogram)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// show_histogram message handlers
