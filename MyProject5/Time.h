#pragma once
#ifndef __MYtime
#define __MYtime
class Time {
public:
	int Hour;
	int Minute;
	int Second;
	explicit Time(int tmphour, int tmpmin, int tmpsec=12);
	Time();
	explicit Time(int tmphour);
	//{
	//	Hour = tmphour;
	//	Minute = tmpmin;
	//	Second = tmpsec;
	//	initMillTime(0);
	//}
private:
	int Millisecond;
	void initMillTime(int mls);
};
#endif // !__MYtime