#pragma once
#include "resource.h"
#include "afxwin.h"

class RenameDialog : public CDialog {

	DECLARE_DYNAMIC(RenameDialog)

public:

	RenameDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~RenameDialog();
	enum { IDD = IDD_DIALOG_RENAME };
	CEdit editNewName;
	CEdit editOldName;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()

};
