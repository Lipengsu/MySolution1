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
	//	//Hour += 10;   //��������Ա�����������޸ĳ�Ա����ֵ
	//	myHour += 3;
	//}
	//�������������
	Time& rtnhour(int temhour);
	Time& rtnminnute(int tmpminute);
	static int mystaic;
	static void mystafunc(int testvalue);
	
private:
	int Millisecond;
	void initMillTime(int mls);
};
#endif // !__MYtime