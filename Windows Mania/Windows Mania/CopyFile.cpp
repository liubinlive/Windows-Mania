#include "stdafx.h"
#include "afxdialogex.h"
#include "CopyFile.h"

IMPLEMENT_DYNAMIC(CopyFileDialog, CDialog)

CopyFileDialog::CopyFileDialog(CWnd* pParent)
	: CDialog(CopyFileDialog::IDD, pParent) {}

CopyFileDialog::~CopyFileDialog() {}

void CopyFileDialog::DoDataExchange(CDataExchange* pDX) {

	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_CURRENTPATH, currPath);
	DDX_Control(pDX, IDC_EDIT_NEWPATH, newPath);
}

BEGIN_MESSAGE_MAP(CopyFileDialog, CDialog)
	ON_BN_CLICKED(IDOK, &CopyFileDialog::OnBnClickedOk)
END_MESSAGE_MAP()


void CopyFileDialog::OnBnClickedOk() {
	CDialog::OnOK();
	CString csCurrent, csNew;
	currPath.GetWindowTextW(csCurrent);
	newPath.GetWindowTextW(csNew);
	CopyFile(csCurrent, csNew, FALSE);
}
