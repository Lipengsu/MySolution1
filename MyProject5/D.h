#pragma once
//�̳еĹ��캯��
#include<iostream>
using namespace std;
class A {
public:
	A(int i, int j, int k=5) {
		cout << "ִ����A�Ĺ��캯��" << endl;
	};
};
class B :public A
{
//public:
//	B(int i,int j,int k):A(i,j,k){}
public:
	
	using A::A;
	//�൱��
	//B(int i, int j, int k) :A(i, j, k) {}
	//B(int i, int j) :A(i, j) {}
};