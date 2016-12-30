#pragma once
#include "afxwin.h"
#include "resource.h"

class NewFileDialog : public CDialog {

	DECLARE_DYNAMIC(NewFileDialog)

public:

	NewFileDialog(CWnd* pParent = NULL);
	virtual ~NewFileDialog();
	enum { IDD = IDD_DIALOG_NEWFILE };
	CEdit editName;
	CEdit editPath;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()
};
