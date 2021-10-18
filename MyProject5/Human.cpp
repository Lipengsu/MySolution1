#include"Human.h"
#include<iostream>
using namespace std;

Human::Human() {
cout << "执行了human构造函数" << endl;
}
Human::Human(int age) {
cout << "执行了human(int age)构造函数" << endl;
}
void Human::samenamefunc() {
	cout << "执行了父类的samename函数" << endl;
}
void Human::samenamefunc(int) {
	cout << "执行了父类的samename（int）函数" << endl;
}