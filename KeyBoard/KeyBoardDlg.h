
// KeyBoardDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CKeyBoardDlg �Ի���
class CKeyBoardDlg : public CDialogEx
{
// ����
public:
	CKeyBoardDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_KEYBOARD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
