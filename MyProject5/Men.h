#pragma once
#ifndef __MEN__
#define __MEN__
#include "Human.h"
#include<iostream>
using namespace std;

//class A {
//	//友元类
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
		cout << "男人喜欢吃米饭" << endl;
	}
	~Men() {
		cout << "Men的析构函数执行了！" << endl;
	}
	void testfunc1() {
		cout << "父类指针调用子类成员函数测试" << endl;
	}
private:
	void funcmen2() const{
		cout << "men::funcmen2" << endl;
	}
	friend void func(const Men& tmpmen);
};

#endif // !__MEN__
