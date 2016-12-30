#pragma once
#include "resource.h"
#include "afxwin.h"


class MoveFileDialog : public CDialog {

	DECLARE_DYNAMIC(MoveFileDialog)

public:

	MoveFileDialog(CWnd* pParent = NULL);
	virtual ~MoveFileDialog();
	enum { IDD = IDD_DIALOG_MOVEFILE };
	CEdit currPath;
	CEdit newPath;
	afx_msg void OnBnClickedOk();

protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()
};
