#pragma once
#include<iostream>
//#include"A.h"
//class A;//类声明，仅仅声明了有A这样一个类型，因为可能类A的定义在类B之后
class B:public A{
public:
	B(int i, int j, int k) :A(i), m_valuec(k) {};
	virtual ~B() {}
	void myinfoB() {
		std::cout << m_valuec << std::endl;
	}	
	//void callBAF(int x, A& a);
private:
	int m_valuec;

};
//class A;
