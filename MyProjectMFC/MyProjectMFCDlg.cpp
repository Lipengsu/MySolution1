
// MyProjectMFCDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MyProjectMFC.h"
#include "MyProjectMFCDlg.h"
#include "afxdialogex.h"
#include<iostream>
#include<string>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyProjectMFCDlg 对话框

//添加的代码
class A {
public:
	A() {
		cout << "A的构造函数执行了" << endl;
	}
	~A() {
		cout << "~A()的析构函数执行了" << endl;
	}
};




CMyProjectMFCDlg::CMyProjectMFCDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MYPROJECTMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyProjectMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyProjectMFCDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CMyProjectMFCDlg 消息处理程序

BOOL CMyProjectMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	//string* ppts = new string("Hello World!");
	//int* p = new int(100);//4字节内存泄露
	//int* p2 = new int[2];//8字节内存泄露
	//int ilen = sizeof(A);
	//A* pA = new A();//1字节内存泄露
	//A* pA2 = new A[2]();//6字节内存泄露
	//自定义类型A中有析构函数内存为2字节，则必须使用delete []来释放内存，
	//若无析构函数内存为6字节，则使用delete和delete[]都可以
	//
	A* pA3 = new A[2];
	//delete []pA3;

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMyProjectMFCDlg::OnPaint()
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
HCURSOR CMyProjectMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

