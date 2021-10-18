#include"Men.h"
#include<iostream>

using namespace std;

Men::Men() {
	cout << "执行了men构造函数" << endl;
}
void Men::func1() {
	Men men;
	men.m_age = 20;
	cout << men.m_age << endl;
}
void Men::samenamefunc() {
	//cout << "执行了Men里面的samename函数"<<endl;
	Human::samenamefunc();
}