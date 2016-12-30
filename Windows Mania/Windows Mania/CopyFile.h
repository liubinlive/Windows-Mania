#pragma once
#include "afxwin.h"
#include "resource.h"

class CopyFileDialog : public CDialog {

	DECLARE_DYNAMIC(CopyFileDialog)

public:

	CopyFileDialog(CWnd* pParent = NULL);
	virtual ~CopyFileDialog();
	enum { IDD = IDD_DIALOG_COPY_FILE };
	CEdit currPath;
	CEdit newPath;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()
};
