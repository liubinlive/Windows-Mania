#include "stdafx.h"
#include "TypeDiag.h"
#include "afxdialogex.h"
#include <io.h>
#include <fstream>
#include <string>
using std::ifstream;
using std::string;

CString text;
IMPLEMENT_DYNAMIC(TypeDialog, CDialog)

TypeDialog::TypeDialog(CWnd* pParent)
	: CDialog(TypeDialog::IDD, pParent) {}

TypeDialog::~TypeDialog() {}

void TypeDialog::DoDataExchange(CDataExchange* pDX) {

	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_TYPE_PATH, pathname);
}

BEGIN_MESSAGE_MAP(TypeDialog, CDialog)
	ON_BN_CLICKED(IDOK, &TypeDialog::OnBnClickedOk)
END_MESSAGE_MAP()

void TypeDialog::OnBnClickedOk() {
	CDialog::OnOK();
	CString filePath;
	string fileInfo = "", temp = "";
	pathname.GetWindowTextW(filePath);
	try {
		ifstream file(filePath.GetString());
		if (file) {
			MessageBox(L"File is there", L"Status", MB_OK);
			while (getline(file, temp)) {
				fileInfo += temp + "\r\n";
			}
			text = CString(fileInfo.c_str());
		}

		else
			MessageBox(L"File not found", L"Status", MB_OK);

		file.close();
	}

	catch (...) {
		MessageBox(L"File is too big to be loaded\n64K Maximum size\n--Returning!", L"Status", MB_OK);
	}

}

CString TypeDialog::getEditText() {
	return text;
}
