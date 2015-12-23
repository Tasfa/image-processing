// chx393Doc.h : interface of the CChx393Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHX393DOC_H__F00C6872_CEA0_4128_B09E_35B21FE01DA7__INCLUDED_)
#define AFX_CHX393DOC_H__F00C6872_CEA0_4128_B09E_35B21FE01DA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CChx393Doc : public CDocument
{
protected: // create from serialization only
	CChx393Doc();
	DECLARE_DYNCREATE(CChx393Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChx393Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChx393Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CChx393Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHX393DOC_H__F00C6872_CEA0_4128_B09E_35B21FE01DA7__INCLUDED_)
