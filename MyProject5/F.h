#pragma once
#include<iostream>
using namespace std;


class Testint {
public:
	//类型转换构造函数
	Testint(int x = 0) :m_i(x)
	{
		if (m_i < 0) m_i = 0;
		if (m_i > 100)m_i = 100;
	}

	//类型转换运算符
	explicit operator int()const {
		return m_i;
	}
	int m_i;

	//类对象转换为函数指针
	//typedef void(* tfpoint)(int);
	using tfpoint = void(*)(int);
	static void mysfunc(int v1) {
		cout << v1 << endl;
	}
	//类型转换运算符
	operator tfpoint() {
		return mysfunc;
	}
};
