#include"Men.h"
#include<iostream>

using namespace std;

Men::Men() {
	cout << "ִ����men���캯��" << endl;
}
void Men::func1() {
	Men men;
	men.m_age = 20;
	cout << men.m_age << endl;
}
void Men::samenamefunc() {
	//cout << "ִ����Men�����samename����"<<endl;
	Human::samenamefunc();
}