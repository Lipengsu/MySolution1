#pragma once
#ifndef __MEN__
#define __MEN__
#include "Human.h"
#include<iostream>
using namespace std;
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
};

#endif // !__MEN__
