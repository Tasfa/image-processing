// HLFilterDlg.cpp : implementation file
//

#include "stdafx.h"
#include "chx393.h"
#include "HLFilterDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHLFilterDlg dialog


CHLFilterDlg::CHLFilterDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHLFilterDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHLFilterDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CHLFilterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHLFilterDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CHLFilterDlg, CDialog)
	//{{AFX_MSG_MAP(CHLFilterDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHLFilterDlg message handlers
extern void Ideal_Filter_FFT(int D);
void CHLFilterDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	int num1;
	num1 = GetDlgItemInt(IDC_EDIT1);
	Ideal_Filter_FFT(50);
	Invalidate();		
}

void CHLFilterDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	int num1;
	num1 = GetDlgItemInt(IDC_EDIT1);
	Ideal_Filter_FFT((-num1));
	Invalidate();
}
