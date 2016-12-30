#pragma once
#include "afxwin.h"
#include "resource.h"

class TypeDialog : public CDialog{

	DECLARE_DYNAMIC(TypeDialog)

public:

	TypeDialog(CWnd* pParent = NULL); 
	CString getEditText();
	virtual ~TypeDialog();
	enum { IDD = IDD_DIALOG_TYPE };
	CEdit pathname;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()

};
