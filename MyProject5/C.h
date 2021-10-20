#pragma once
#include<iostream>
using namespace std;
class B {
public:
	B() :m_bm(100)
	{
		//cout << "类B的构造函数执行了" << endl;
	}
	B(const B& tmp) {
		m_bm = tmp.m_bm;
		//cout << "类B的拷贝构造函数执行了" << endl;
	}
	virtual ~B() {
		//cout << "类B的析构函数执行了" << endl;
	}
	int m_bm;
};

class  A
{
public:
	A();
	A(const A& tmpa) :m_pb(new B(*(tmpa.m_pb))) {
		cout << "类A的拷贝构造函数执行了" << endl;
	}
	virtual ~A() {
		delete m_pb;
		cout << "类A的析构函数执行了" << endl;
	}
	//移动构造函数
	A(A&& tmp) noexcept:m_pb(tmp.m_pb) {
		tmp.m_pb = nullptr;
		cout << "类A的移动构造函数执行了" << endl;
	}
	//拷贝赋值运算符
	A& operator==(const A& src) {
		if (this == &src)
			return *this;
		delete m_pb;
		m_pb = new B(*(src.m_pb));
		cout << "类A的拷贝赋值运算符执行了" << endl;
		return *this;
	}
	//移动赋值运算符，末尾也加noexcept
	A& operator=(A&& src)noexcept {
		if (this == &src)
			return *this;
		delete m_pb;
		m_pb = src.m_pb;
		src.m_pb = nullptr;
		cout << "类A的移动赋值运算符执行了" << endl;
		return *this;
	}

private:
	B* m_pb;
};

 A:: A():m_pb(new B)
{
	 cout << "类A的构造函数执行了" << endl;
}

 static A getA() {
	 A a;
	 return a;
 }