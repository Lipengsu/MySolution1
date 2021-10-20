#pragma once
#include<iostream>
using namespace std;
class B {
public:
	B() :m_bm(100)
	{
		//cout << "��B�Ĺ��캯��ִ����" << endl;
	}
	B(const B& tmp) {
		m_bm = tmp.m_bm;
		//cout << "��B�Ŀ������캯��ִ����" << endl;
	}
	virtual ~B() {
		//cout << "��B����������ִ����" << endl;
	}
	int m_bm;
};

class  A
{
public:
	A();
	A(const A& tmpa) :m_pb(new B(*(tmpa.m_pb))) {
		cout << "��A�Ŀ������캯��ִ����" << endl;
	}
	virtual ~A() {
		delete m_pb;
		cout << "��A����������ִ����" << endl;
	}
	//�ƶ����캯��
	A(A&& tmp) noexcept:m_pb(tmp.m_pb) {
		tmp.m_pb = nullptr;
		cout << "��A���ƶ����캯��ִ����" << endl;
	}
	//������ֵ�����
	A& operator==(const A& src) {
		if (this == &src)
			return *this;
		delete m_pb;
		m_pb = new B(*(src.m_pb));
		cout << "��A�Ŀ�����ֵ�����ִ����" << endl;
		return *this;
	}
	//�ƶ���ֵ�������ĩβҲ��noexcept
	A& operator=(A&& src)noexcept {
		if (this == &src)
			return *this;
		delete m_pb;
		m_pb = src.m_pb;
		src.m_pb = nullptr;
		cout << "��A���ƶ���ֵ�����ִ����" << endl;
		return *this;
	}

private:
	B* m_pb;
};

 A:: A():m_pb(new B)
{
	 cout << "��A�Ĺ��캯��ִ����" << endl;
}

 static A getA() {
	 A a;
	 return a;
 }