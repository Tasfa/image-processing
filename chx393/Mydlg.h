#if !defined(AFX_MYDLG_H__F7DEA971_ED64_4D1A_9F3E_7389EABBA804__INCLUDED_)
#define AFX_MYDLG_H__F7DEA971_ED64_4D1A_9F3E_7389EABBA804__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Mydlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMydlg dialog

class CMydlg : public CDialog
{
// Construction
public:
	CMydlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMydlg)
	enum { IDD = IDD_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMydlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMydlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDLG_H__F7DEA971_ED64_4D1A_9F3E_7389EABBA804__INCLUDED_)
