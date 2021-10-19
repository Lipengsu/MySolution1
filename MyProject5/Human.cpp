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
Human::Human(const Human& human) {
	//Human类作为基类，只能处理基类自己的成员
	cout << "执行了human的拷贝构造函数" << endl;
}