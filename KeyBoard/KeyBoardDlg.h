
// KeyBoardDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CKeyBoardDlg 对话框
class CKeyBoardDlg : public CDialogEx
{
// 构造
public:
	CKeyBoardDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_KEYBOARD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	BOOL OnEraseBkgnd(CDC * pDC);
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_jzmPicture;
	afx_msg void OnStnClickedJizhuomiStatic();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
