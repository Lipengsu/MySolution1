#pragma once
#include<iostream>
using namespace  std;

template <typename C> 
class A {
public:
	template<typename T2>
	A(T2 v1, T2 v2);
	//类成员函数模板
	template<typename T>
	void myft(T tmpt) {
		cout << tmpt << endl;
	}
	C m_ic;
};


//成员函数写在外面
template <typename C>
template <typename T2>
A<C>::A(T2 v1, T2 v2) {
	cout << v1 << v2 << endl;
}