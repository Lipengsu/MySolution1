#pragma once
#include<iostream>
using namespace std;
class Grand {
public:
	Grand(int i):m_valuegrand(i){
		cout << "Grand���캯��" << endl;
	}
	virtual ~Grand(){}
	void myinfo() {
		cout << m_valuegrand << endl;
	}
	int m_valuegrand;
	static int m_static;
};
class A:virtual public Grand {
public:
	A(int i) :Grand(i),m_valuea(i) {
		cout << "A���캯��" << endl;
	}
	virtual ~A() {}
	void myinfo() {
		cout << m_valuea << endl;
	}
	int m_valuea;
};
class B {
public:
	B(int i) :m_valueb(i) {
		cout << "B���캯��" << endl;
	}
	virtual ~B() {}
	void myinfo() {
		cout << m_valueb << endl;
	}
	int m_valueb;
};
class A2 :virtual public Grand {
public:
	//Grand�Ĺ��캯����������C�����ã�A2��A�Ĺ��캯����grand��Ч��
	//������ɾ����Ϊ������﷨����
	A2(int i) :Grand(i), m_valuea2(i) {
		cout << "A2��Ĺ��캯��" << endl;
	}
	virtual ~A2() {
		cout << "A2�����������" << endl;
	}
	void myinfo() {
		cout << m_valuea2 << endl;
	}
	int m_valuea2;
};
class C :public A,public A2,public B {
public:
	C(int i,int j,int k) :A(i),A2(i),B(j),Grand(i),m_valuec(k) {
		cout << "C���캯��" << endl;
	}
	virtual ~C() {}
	void myinfo() {
		cout << m_valuec << endl;
	}
	int m_valuec;
};
int Grand::m_static = 5;



//class A
//{
//public:
//	A(int tv) {};
//};
//class B {
//public:
//	B(int tv) {};
//};
//class C :public A, public B {
//public:
//	using A::A;
//	using B::B;//�����ظ�������C�Ĺ��캯��
//};