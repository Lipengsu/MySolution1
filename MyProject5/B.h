#pragma once
#include<iostream>
//#include"A.h"
class A;//类声明，仅仅声明了有A这样一个类型，因为可能类A的定义在类B之后
class B {
public:
	void callBAF(int x, A& a);
};
//class A;
