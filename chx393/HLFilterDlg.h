#if !defined(AFX_HLFILTERDLG_H__A01E73F4_1F11_4C8C_81EB_C7411EBA03F2__INCLUDED_)
#define AFX_HLFILTERDLG_H__A01E73F4_1F11_4C8C_81EB_C7411EBA03F2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// HLFilterDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CHLFilterDlg dialog

class CHLFilterDlg : public CDialog
{
// Construction
public:
	CHLFilterDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CHLFilterDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHLFilterDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CHLFilterDlg)
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HLFILTERDLG_H__A01E73F4_1F11_4C8C_81EB_C7411EBA03F2__INCLUDED_)
