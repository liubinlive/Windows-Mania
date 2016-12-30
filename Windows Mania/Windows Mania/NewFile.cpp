#include "stdafx.h"
#include "afxdialogex.h"
#include "NewFile.h"

IMPLEMENT_DYNAMIC(NewFileDialog, CDialog)

NewFileDialog::NewFileDialog(CWnd* pParent)
	: CDialog(NewFileDialog::IDD, pParent){}

NewFileDialog::~NewFileDialog(){}

void NewFileDialog::DoDataExchange(CDataExchange* pDX){

	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_NEW_NAME, editName);
	DDX_Control(pDX, IDC_EDIT_NEW_PATH, editPath);
}


BEGIN_MESSAGE_MAP(NewFileDialog, CDialog)
	ON_BN_CLICKED(IDOK, &NewFileDialog::OnBnClickedOk)
END_MESSAGE_MAP()

void NewFileDialog::OnBnClickedOk(){

	CDialog::OnOK();
	CString csFileName, csFilePath;
	editName.GetWindowText(csFileName);
	editPath.GetWindowText(csFilePath);
	const size_t nMaxPath = 512;
	TCHAR szPath[nMaxPath];
	SetCurrentDirectory((LPCWSTR)csFilePath);
	GetCurrentDirectory(nMaxPath, szPath);
	wcsncpy_s(szPath, csFileName, nMaxPath);
	CreateDirectory(szPath, NULL);
}
