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
		cout << "男人喜欢吃米饭" << endl;
	}
	~Men() {
		cout << "Men的析构函数执行了！" << endl;
	}
};

#endif // !__MEN__
