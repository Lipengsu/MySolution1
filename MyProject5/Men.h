#pragma once
#ifndef __MEN__
#define __MEN__
#include "Human.h"
#include<iostream>
using namespace std;

//class A {
//	//��Ԫ��
//	friend class B;
//private:
//	int data;
//};
//class B {
//public:
//	void callBAF(int x, A& a) {
//		a.data = x;
//		cout << a.data << endl;
//	}
//};

class Men :public Human {
public:
	Men();
	void func1();
	void samenamefunc();
	using Human::samenamefunc;
	void eat() override{
		cout << "����ϲ�����׷�" << endl;
	}
	~Men() {
		cout << "Men����������ִ���ˣ�" << endl;
	}
	void testfunc1() {
		cout << "����ָ����������Ա��������" << endl;
	}
private:
	void funcmen2() const{
		cout << "men::funcmen2" << endl;
	}
	friend void func(const Men& tmpmen);
};

#endif // !__MEN__
