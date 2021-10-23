#pragma once
#include<iostream>
using namespace std;
template<typename T,typename U>
struct TC {
	TC()
	{
		cout << "泛型构造函数" << endl;
	}
	void functest() {
		cout << "TC泛化版本" << endl;
	}
};

template<>
struct TC<int, int> {
	TC() {
		cout << "特化版本构造函数" << endl;
	}
	void testfunc() {
		cout << "特化版本" << endl;
	}
}; 
template<>
void TC<double, double>::functest() {
	cout << "成员函数的特化版本" << endl;
}

template<typename T,typename U,typename W>

//偏特化
struct TCP {
	TCP() {
		cout << "TCP泛化版本构造函数" << endl;
	}
	void functest() {
		cout << "TCP泛化版本" << endl;
	}
};
template<typename U>

struct TCP<int, U, double> {
	TCP() {
		cout << "偏特化构造函数" << endl;
	}
	void functest() {
		cout << "TCP偏特化版本" << endl;
	}
};
//范围上的偏特化
template <typename T>
struct TCF {
	TCF() {
		cout << "TCF泛型构造函数" << endl;
	}
	void testfunc() {
		cout << "TCF泛化版本" << endl;
	}
};

template<typename T>
struct TCF<const T> {
	TCF() {
		cout << "TCF const特化构造函数" << endl;
	}
	void testfunc() {
		cout << "TCF const特化版本" << endl;
	}
};

template<typename T>
struct TCF<T *> {
	TCF() {
		cout << "TCF*特化构造函数" << endl;
	}
	void testfunc() {
		cout << "TCF*特化版本" << endl;
	}
};

template<typename T>
struct TCF<T&> {
	TCF() {
		cout << "TCF&特化构造函数" << endl;
	}
	void testfunc() {
		cout << "TCF&特化版本" << endl;
	}
};

template<typename T>
struct TCF<T&&> {
	TCF() {
		cout << "TCF&&特化构造函数" << endl;
	}
	void testfunc() {
		cout << "TCF&&特化版本" << endl;
	}
};
//函数模板全特化
template <typename T,typename U>
void tfunc(T& tmprv, U& tmprv2) {
	cout << "tfunc泛化版本" << endl;
	cout << tmprv << endl;
	cout << tmprv2 << endl;
}

template<>
void tfunc(int& tmprv, double& tmprv2) {
	cout << "----------begin----------" << endl;
	cout << "tfunc<int,double>特化实例" << endl;
	cout << tmprv << endl;
	cout << tmprv2 << endl;
	cout << "----------end------------" << endl;
}
//函数模板与普通函数的区别
//1.普通函数调用时可以发生自动类型转换（隐式转换）；
//2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换；
//3.如果利用显示指定类型的方式，可以发生隐式类型转换。
//函数模板不能偏特化，只有类模板可以偏特化