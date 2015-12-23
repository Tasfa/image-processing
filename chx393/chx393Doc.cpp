// chx393Doc.cpp : implementation of the CChx393Doc class
//

#include "stdafx.h"
#include "chx393.h"

#include "chx393Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChx393Doc

IMPLEMENT_DYNCREATE(CChx393Doc, CDocument)
BOOL LoadBmpFile (char*);
BEGIN_MESSAGE_MAP(CChx393Doc, CDocument)
	//{{AFX_MSG_MAP(CChx393Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChx393Doc construction/destruction

CChx393Doc::CChx393Doc()
{
	// TODO: add one-time construction code here

}

CChx393Doc::~CChx393Doc()
{
}

BOOL CChx393Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CChx393Doc serialization

void CChx393Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CChx393Doc diagnostics

#ifdef _DEBUG
void CChx393Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CChx393Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChx393Doc commands

BOOL CChx393Doc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	LoadBmpFile((char*) lpszPathName);
	// TODO: Add your specialized creation code here
	
	return TRUE;
}
