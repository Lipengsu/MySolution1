#pragma once
#include<iostream>
#include"B.h"
class A {
	friend void B::callBAF(int x, A& a);
private:
	int data;
};