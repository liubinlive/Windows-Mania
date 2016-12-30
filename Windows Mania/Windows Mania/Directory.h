#pragma once
#include "afxwin.h"
#include "resource.h"

class DirDialog : public CDialog {

	DECLARE_DYNAMIC(DirDialog)

public:

	DirDialog(CWnd* pParent = NULL);
	virtual ~DirDialog();
	enum { IDD = IDD_DIALOG_DIR };
	CEdit editDir;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()
};
