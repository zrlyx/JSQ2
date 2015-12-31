
// srf-civilacsionDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "srf-civilacsion.h"
#include "srf-civilacsionDlg.h"
#include "afxdialogex.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsrfcivilacsionDlg 对话框




CsrfcivilacsionDlg::CsrfcivilacsionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CsrfcivilacsionDlg::IDD, pParent)
	, m_str1(_T(""))
	, m_str2(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CsrfcivilacsionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_str1);
	DDX_Text(pDX, IDC_EDIT2, m_str2);
}

BEGIN_MESSAGE_MAP(CsrfcivilacsionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, &CsrfcivilacsionDlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_2, &CsrfcivilacsionDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &CsrfcivilacsionDlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &CsrfcivilacsionDlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_dot, &CsrfcivilacsionDlg::OnBnClickeddot)
	ON_BN_CLICKED(IDC_ADD, &CsrfcivilacsionDlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_JIAN, &CsrfcivilacsionDlg::OnBnClickedJian)
	ON_BN_CLICKED(IDC_0, &CsrfcivilacsionDlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_DY, &CsrfcivilacsionDlg::OnBnClickedDy)
	ON_BN_CLICKED(IDC_C, &CsrfcivilacsionDlg::OnBnClickedC)
	ON_BN_CLICKED(IDC_CHEN, &CsrfcivilacsionDlg::OnBnClickedChen)
	ON_BN_CLICKED(IDC_CHU, &CsrfcivilacsionDlg::OnBnClickedChu)
	ON_BN_CLICKED(IDC_5, &CsrfcivilacsionDlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_6, &CsrfcivilacsionDlg::OnBnClicked6)
	ON_BN_CLICKED(IDC_7, &CsrfcivilacsionDlg::OnBnClicked7)
	ON_BN_CLICKED(IDC_8, &CsrfcivilacsionDlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_9, &CsrfcivilacsionDlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_delete, &CsrfcivilacsionDlg::OnBnClickeddelete)
	ON_BN_CLICKED(IDC_12, &CsrfcivilacsionDlg::OnBnClicked12)
	ON_BN_CLICKED(IDC_ZF, &CsrfcivilacsionDlg::OnBnClickedZf)
	ON_BN_CLICKED(IDC_FZY, &CsrfcivilacsionDlg::OnBnClickedFzy)
	ON_BN_CLICKED(IDC_GH, &CsrfcivilacsionDlg::OnBnClickedGh)
	ON_BN_CLICKED(IDC_BFH, &CsrfcivilacsionDlg::OnBnClickedBfh)
	ON_EN_CHANGE(IDC_EDIT2, &CsrfcivilacsionDlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, &CsrfcivilacsionDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CsrfcivilacsionDlg 消息处理程序

BOOL CsrfcivilacsionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CsrfcivilacsionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CsrfcivilacsionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CsrfcivilacsionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CsrfcivilacsionDlg::OnBnClicked1()
{
	//UpdateData(true);
	m_str1=m_str1+L"1";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked2()
{
	//UpdateData(true);
	m_str1=m_str1+L"2";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked3()
{
	UpdateData(true);
	m_str1=m_str1+L"3";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked4()
{
	UpdateData(true);
	m_str1=m_str1+L"4";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickeddot()
{
	UpdateData(true);
	m_str1=m_str1+L".";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedAdd()
{
	flag=1;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedJian()
{
	flag=2;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked0()
{
	UpdateData(true);
	m_str1=m_str1+L"0";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedDy()
{
	UpdateData(true);
	if(flag==1)
	{
		temp=temp+_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==2)
	{
		temp=temp-_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==3)
	{
		temp=temp*_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==4)
	{
		if(_ttof(m_str1)==0)
		{
			m_str2.Format(L"万万没想到，零不能作除数");
		}
		else
		{
			temp=temp/_ttof(m_str1);
			m_str2.Format(L"%lf",temp);
		}	
	}
	while(m_str2.Right(1)=="0")
		m_str2.Delete(m_str2.GetLength()-1,1);
	while(m_str2.Right(1)==".")
		m_str2.Delete(m_str2.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedC()
{
	m_str1=" ";
	m_str2=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedChen()
{
	flag=3;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedChu()
{
	flag=4;
	UpdateData(true);
	temp=_ttof(m_str1);
    m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked5()
{
	UpdateData(true);
	m_str1=m_str1+L"5";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked6()
{
	UpdateData(true);
	m_str1=m_str1+L"6";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked7()
{
	UpdateData(true);
	m_str1=m_str1+L"7";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked8()
{
	UpdateData(true);
	m_str1=m_str1+L"8";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked9()
{
	UpdateData(true);
	m_str1=m_str1+L"9";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickeddelete()
{
	UpdateData(true);
	m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked12()
{
	m_str2=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedZf()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=-temp;
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedFzy()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	if(_ttof(m_str1)==0)
		{
			m_str2.Format(L"万万没想到，零也不能做倒数");
		}
	else temp=1/temp;
		
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedGh()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=sqrt(temp);
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);

}


void CsrfcivilacsionDlg::OnBnClickedBfh()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=temp/100;
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
