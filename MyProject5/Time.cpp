#include"Time.h"
#include<iostream>
using namespace std;

//构造函数初始化列表在函数执行前就执行了
//某个成员变量的值不要依赖其他变量
// const成员初始化
Time::Time(int tmphour, int tmpmin,int tmpsec):convalue(tmphour){
	Hour = tmphour;
	Minute = tmpmin;
	Second = tmpsec;
	initMillTime(1);
}
Time::Time() :convalue() {
	Hour = 2;
	Minute = 59;
	Second = 48;
	initMillTime(3);
}
Time::Time(int tmphpur) :convalue(tmphpur) {
	Hour = tmphpur;
	Minute = tmphpur;
	Second = tmphpur;
	initMillTime(7);
}
void Time::initMillTime(int mis) {
	Hour = Hour + mis;
}
void Time::nonnne() const {
	myHour += 3;
}
//返回自身的引用
//Time& Time::rtnhour(int tmphour1) {
//	Hour += tmphour1;
//	return *this;
//}
//Time& Time::rtnminnute(int tmpminute) {
//	Minute += tmpminute;
//	return *this;
//}
void Time::mystafunc(int tmpstatic) {
	mystaic = tmpstatic;
}
void WriteTime(Time& mytime) {
	cout << mytime.Hour << endl;
}