#pragma once
#include<iostream>
//#include"A.h"
//class A;//��������������������A����һ�����ͣ���Ϊ������A�Ķ�������B֮��
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
