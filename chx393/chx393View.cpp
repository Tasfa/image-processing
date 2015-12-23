// chx393View.cpp : implementation of the CChx393View class
//

#include "stdafx.h"
#include "chx393.h"

#include "chx393Doc.h"
#include "chx393View.h"
#include "Mydlg.h"
//#include "HLFilterDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChx393View

IMPLEMENT_DYNCREATE(CChx393View, CScrollView)

BEGIN_MESSAGE_MAP(CChx393View, CScrollView)
	//{{AFX_MSG_MAP(CChx393View)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(IDD_DIALOG, OnDialog)
	ON_COMMAND(ID_FFT, OnFft)
	ON_UPDATE_COMMAND_UI(ID_FFT, OnUpdateFft)
	ON_COMMAND(ID_IFFT, OnIfft)
	ON_UPDATE_COMMAND_UI(ID_IFFT, OnUpdateIfft)
	ON_COMMAND(ID_AVERAGE_FILTER, OnAverageFilter)
	ON_UPDATE_COMMAND_UI(ID_AVERAGE_FILTER, OnUpdateAverageFilter)
	ON_UPDATE_COMMAND_UI(ID_MEDIAN_FILTER, OnUpdateMedianFilter)
	ON_UPDATE_COMMAND_UI(ID_GRAD_SHARP, OnUpdateGradSharp)
	ON_UPDATE_COMMAND_UI(ID_RAPLAS_SHARP, OnUpdateRaplasSharp)
	ON_COMMAND(ID_MEDIAN_FILTER, OnMedianFilter)
	ON_COMMAND(ID_GRAD_SHARP, OnGradSharp)
	ON_COMMAND(ID_RAPLAS_SHARP, OnRaplasSharp)
	ON_COMMAND(ID_Graa, OnGraa)
	ON_UPDATE_COMMAND_UI(ID_Graa, OnUpdateGraa)
	ON_COMMAND(ID_LineCom, OnLineCom)
	ON_UPDATE_COMMAND_UI(ID_LineCom, OnUpdateLineCom)
	ON_COMMAND(ID_Equal, OnEqual)
	ON_UPDATE_COMMAND_UI(ID_Equal, OnUpdateEqual)
	ON_COMMAND(ID_LOW, OnLow)
	ON_UPDATE_COMMAND_UI(ID_LOW, OnUpdateLow)
	ON_COMMAND(ID_HIGH, OnHigh)
	ON_UPDATE_COMMAND_UI(ID_HIGH, OnUpdateHigh)
	ON_COMMAND(ID_BLOW, OnBlow)
	ON_UPDATE_COMMAND_UI(ID_BLOW, OnUpdateBlow)
	ON_COMMAND(ID_BHIGH, OnBhigh)
	ON_UPDATE_COMMAND_UI(ID_BHIGH, OnUpdateBhigh)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChx393View construction/destruction

CChx393View::CChx393View()
{
	// TODO: add construction code here

}

CChx393View::~CChx393View()
{
}

BOOL CChx393View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CChx393View drawing
extern LPBITMAPINFO   lpBitsInfo;
extern BITMAPINFO *lpDIB_FFT;
extern BITMAPINFO *lpDIB_IFFT;
void CChx393View::OnDraw(CDC* pDC)
{
	CChx393Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if (NULL == lpBitsInfo) 
		return;
	LPVOID lpBits = (LPVOID)&lpBitsInfo ->bmiColors[lpBitsInfo ->bmiHeader.biClrUsed];
	StretchDIBits (pDC->GetSafeHdc(), 
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
		lpBits, lpBitsInfo,
		DIB_RGB_COLORS, SRCCOPY);
	if (lpDIB_FFT)
	{
	    lpBits = (LPVOID)&lpDIB_FFT->bmiColors[lpDIB_FFT->bmiHeader.biClrUsed];
		StretchDIBits( 
			pDC->GetSafeHdc(),
			600,0,
			lpDIB_FFT->bmiHeader.biWidth,
			lpDIB_FFT->bmiHeader.biHeight,
			0,0,
			lpDIB_FFT->bmiHeader.biWidth,
			lpDIB_FFT->bmiHeader.biHeight,
			lpBits,
			lpDIB_FFT, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY);
	}
	if (lpDIB_IFFT)
	{
		lpBits = (LPVOID)&lpDIB_IFFT->bmiColors[lpDIB_IFFT->bmiHeader.biClrUsed];
		StretchDIBits( 
			pDC->GetSafeHdc(),
			600,0,
			lpDIB_IFFT->bmiHeader.biWidth,
			lpDIB_IFFT->bmiHeader.biHeight,
			0,0,
			lpDIB_IFFT->bmiHeader.biWidth,
			lpDIB_IFFT->bmiHeader.biHeight,
			lpBits,
			lpDIB_IFFT, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY);
	}

	// TODO: add draw code for native data here
}

void CChx393View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CChx393View printing

BOOL CChx393View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CChx393View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CChx393View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CChx393View diagnostics

#ifdef _DEBUG
void CChx393View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CChx393View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CChx393Doc* CChx393View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CChx393Doc)));
	return (CChx393Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChx393View message handlers
void Gray();
void CChx393View::OnGray() 
{
	// TODO: Add your command handler code here
	
}

void CChx393View::OnUpdateGray(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
		pCmdUI->Enable(lpBitsInfo != NULL);
}
void toGreyOther();
void CChx393View::OnGraa() 
{
	// TODO: Add your command handler code here
	if(lpBitsInfo == NULL){
		AfxMessageBox("还没打开BMP图像!");
		return;
	}

	//实际用到的颜色数，即调色板数组中的颜色个数
	DWORD NumColors = lpBitsInfo->bmiHeader.biClrUsed ;

	if(NumColors){	
		//change to grey for less than 256
		toGreyOther();
	}else if(0 == NumColors){
		switch(0){
			case 0: Gray();break;
		}
	}
	
	Invalidate();
}

void CChx393View::OnUpdateGraa(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}
void pixel(CPoint point1);
void CChx393View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CScrollView::OnLButtonDown(nFlags, point);
	pixel(point);
}
void Histogram();
void CChx393View::OnHistogram() 
{
	// TODO: Add your command handler code here
	if (lpBitsInfo->bmiHeader.biBitCount == 24) 
	{
		AfxMessageBox("不支持24位图像!");
		return;
	}
	Histogram();
	Invalidate();
}



void CChx393View::OnDialog() 
{
	// TODO: Add your command handler code here
	CMydlg *pDlg=new CMydlg;
	pDlg->Create(IDD_DIALOG,this);
	pDlg->ShowWindow(SW_SHOW);
	Histogram();
}
void Fourier();
void CChx393View::OnFft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_FFT)
		free(lpDIB_FFT);

	Fourier();
	Invalidate();
}

void CChx393View::OnUpdateFft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}
void IFourier();
void CChx393View::OnIfft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_IFFT)
		free(lpDIB_IFFT);

	IFourier();
	Invalidate();
}

void CChx393View::OnUpdateIfft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpDIB_FFT != NULL);
}
void AverageFilter();
void MedianFilter();
void GradSharp();
void RaplasSharp();

void CChx393View::OnAverageFilter() 
{
	// TODO: Add your command handler code here
	AverageFilter();
	Invalidate();
}

void CChx393View::OnUpdateAverageFilter(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnUpdateMedianFilter(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnUpdateGradSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnUpdateRaplasSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnMedianFilter() 
{
	// TODO: Add your command handler code here
	MedianFilter();
	Invalidate();
}

void CChx393View::OnGradSharp() 
{
	// TODO: Add your command handler code here
	GradSharp();
	Invalidate();
}

void CChx393View::OnRaplasSharp() 
{
	// TODO: Add your command handler code here
	RaplasSharp();
	Invalidate();
}
void Ideal_Filter_FFT(int D);
void CChx393View::OnHLFilter() 
{
	// TODO: Add your command handler code here
	Ideal_Filter_FFT(50);
	Invalidate();
}



void LinerTrans(float a, float b);
void CChx393View::OnLineCom() 
{
	// TODO: Add your command handler code here
	LinerTrans(2, -100);
	Invalidate();
}

void CChx393View::OnUpdateLineCom(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}
void Equalize();
void CChx393View::OnEqual() 
{
	// TODO: Add your command handler code here
	 Equalize();
	Invalidate();
}

void CChx393View::OnUpdateEqual(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}


void Ideal_Filter_FFT(int D);
void CChx393View::OnLow() 
{
	// TODO: Add your command handler code here
	OnFft();
	Ideal_Filter_FFT(50);
	Invalidate();
}

void CChx393View::OnUpdateLow(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnHigh() 
{
	// TODO: Add your command handler code here
	OnFft();
	Ideal_Filter_FFT(-10);
	Invalidate();
}

void CChx393View::OnUpdateHigh(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}
void ba_Filter(int D);
void CChx393View::OnBlow() 
{
	// TODO: Add your command handler code here	
	OnFft();
	ba_Filter(0);
	Invalidate();
}

void CChx393View::OnUpdateBlow(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CChx393View::OnBhigh() 
{
	// TODO: Add your command handler code here
	OnFft();
	ba_Filter(1);
	Invalidate();
}

void CChx393View::OnUpdateBhigh(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}
