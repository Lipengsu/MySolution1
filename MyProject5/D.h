#pragma once
//继承的构造函数
#include<iostream>
using namespace std;
class A {
public:
	A(int i, int j, int k=5) {
		cout << "执行了A的构造函数" << endl;
	};
};
class B :public A
{
//public:
//	B(int i,int j,int k):A(i,j,k){}
public:
	
	using A::A;
	//相当于
	//B(int i, int j, int k) :A(i, j, k) {}
	//B(int i, int j) :A(i, j) {}
};