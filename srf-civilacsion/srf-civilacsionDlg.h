
// srf-civilacsionDlg.h : ͷ�ļ�
//

#pragma once


// CsrfcivilacsionDlg �Ի���
class CsrfcivilacsionDlg : public CDialogEx
{
// ����
public:
	CsrfcivilacsionDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SRFCIVILACSION_DIALOG };

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
	DECLARE_MESSAGE_MAP()
public:
	int flag;
	double temp;
    CString m_str;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClickeddot();
	afx_msg void OnBnClickedAdd();
	CString m_str1;
	afx_msg void OnBnClickedJian();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedDy();
	afx_msg void OnBnClickedC();
	afx_msg void OnBnClickedChen();
	afx_msg void OnBnClickedChu();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickeddelete();
	CString m_str2;
	afx_msg void OnBnClicked12();
	afx_msg void OnBnClickedZf();
	afx_msg void OnBnClickedFzy();
	afx_msg void OnBnClickedGh();
	afx_msg void OnBnClickedBfh();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit1();
};
