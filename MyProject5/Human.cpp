#include"Human.h"
#include<iostream>
using namespace std;

Human::Human() {
cout << "ִ����human���캯��" << endl;
}
Human::Human(int age) {
cout << "ִ����human(int age)���캯��" << endl;
}
void Human::samenamefunc() {
	cout << "ִ���˸����samename����" << endl;
}
void Human::samenamefunc(int) {
	cout << "ִ���˸����samename��int������" << endl;
}