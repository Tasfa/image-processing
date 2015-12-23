// chx393View.h : interface of the CChx393View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHX393VIEW_H__F46B3B85_7D29_4DCB_A479_8BE24F2CDA87__INCLUDED_)
#define AFX_CHX393VIEW_H__F46B3B85_7D29_4DCB_A479_8BE24F2CDA87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CChx393View : public CScrollView
{
protected: // create from serialization only
	CChx393View();
	DECLARE_DYNCREATE(CChx393View)

// Attributes
public:
	CChx393Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChx393View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChx393View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CChx393View)
	afx_msg void OnGray();
	afx_msg void OnUpdateGray(CCmdUI* pCmdUI);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnHistogram();
	afx_msg void OnDialog();
	afx_msg void OnFft();
	afx_msg void OnUpdateFft(CCmdUI* pCmdUI);
	afx_msg void OnIfft();
	afx_msg void OnUpdateIfft(CCmdUI* pCmdUI);
	afx_msg void OnAverageFilter();
	afx_msg void OnUpdateAverageFilter(CCmdUI* pCmdUI);
	afx_msg void OnUpdateMedianFilter(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGradSharp(CCmdUI* pCmdUI);
	afx_msg void OnUpdateRaplasSharp(CCmdUI* pCmdUI);
	afx_msg void OnMedianFilter();
	afx_msg void OnGradSharp();
	afx_msg void OnRaplasSharp();
	afx_msg void OnHLFilter();
	afx_msg void OnDialog1();
	afx_msg void OnGraa();
	afx_msg void OnUpdateGraa(CCmdUI* pCmdUI);
	afx_msg void OnLineCom();
	afx_msg void OnUpdateLineCom(CCmdUI* pCmdUI);
	afx_msg void OnEqual();
	afx_msg void OnUpdateEqual(CCmdUI* pCmdUI);
	afx_msg void OnLow();
	afx_msg void OnUpdateLow(CCmdUI* pCmdUI);
	afx_msg void OnHigh();
	afx_msg void OnUpdateHigh(CCmdUI* pCmdUI);
	afx_msg void OnBlow();
	afx_msg void OnUpdateBlow(CCmdUI* pCmdUI);
	afx_msg void OnBhigh();
	afx_msg void OnUpdateBhigh(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in chx393View.cpp
inline CChx393Doc* CChx393View::GetDocument()
   { return (CChx393Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHX393VIEW_H__F46B3B85_7D29_4DCB_A479_8BE24F2CDA87__INCLUDED_)
