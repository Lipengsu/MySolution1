#pragma once
#include<iostream>
//#include"B.h"
class A {
public:
	//���캯����ʼ���б�
	A(int i) :m_valuea(i),data(i){};
	virtual ~A() {};
	void myinfoA() {
		std::cout << m_valuea << std::endl;
	}
	//friend void B::callBAF(int x, A& a);
private:
	int data;
	int m_valuea;
};