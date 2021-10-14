#pragma once
#ifndef __MYtime
#define __MYtime
class Time {
public:
	int Hour;
	int Minute;
	int Second;
	mutable int myHour;
	explicit Time(int tmphour, int tmpmin, int tmpsec=12);
	Time();
	explicit Time(int tmphour);
	//{
	//	Hour = tmphour;
	//	Minute = tmpmin;
	//	Second = tmpsec;
	//	initMillTime(0);
	//}
	void nonnne()const;
	//  {
	//	//Hour += 10;   //错误常量成员函数不可以修改成员变量值
	//	myHour += 3;
	//}
	//返回自身的引用
	Time& rtnhour(int temhour);
	Time& rtnminnute(int tmpminute);
	static int mystaic;
	static void mystafunc(int testvalue);
	
private:
	int Millisecond;
	void initMillTime(int mls);
};
#endif // !__MYtime