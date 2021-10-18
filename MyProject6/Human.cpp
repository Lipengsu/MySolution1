#include"Human.h"
#include<iostream>
using namespace std;

Human::Human() {
cout << "执行了human构造函数" << endl;
}
Human::Human(int age) {
cout << "执行了human(int age)构造函数" << endl;
}