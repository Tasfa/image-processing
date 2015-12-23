#if !defined(AFX_SHOW_HISTOGRAM_H__C5294FBD_5480_448F_99A8_5BD91A197CE9__INCLUDED_)
#define AFX_SHOW_HISTOGRAM_H__C5294FBD_5480_448F_99A8_5BD91A197CE9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// show_histogram.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// show_histogram dialog

class show_histogram : public CDialog
{
// Construction
public:
	show_histogram(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(show_histogram)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(show_histogram)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(show_histogram)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOW_HISTOGRAM_H__C5294FBD_5480_448F_99A8_5BD91A197CE9__INCLUDED_)
