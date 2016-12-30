#pragma once
#include "afxwin.h"
#include "resource.h"

class RemoveDirDialog : public CDialog {

	DECLARE_DYNAMIC(RemoveDirDialog)

public:

	RemoveDirDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~RemoveDirDialog();
	enum { IDD = IDD_DIALOG_REMOVE_DIR };
	CEdit editRemove;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()
};
