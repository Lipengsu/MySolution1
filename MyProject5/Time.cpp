#include"Time.h"

//���캯����ʼ���б��ں���ִ��ǰ��ִ����
//ĳ����Ա������ֵ��Ҫ������������
Time::Time(int tmphour, int tmpmin,int tmpsec):Hour(tmphour),Minute(tmpmin){
	//Hour = tmphour;
	//Minute = tmpmin;
	Second = tmpsec;
	initMillTime(1);
}
Time::Time() {
	Hour = 2;
	Minute = 59;
	Second = 48;
	initMillTime(3);
}
Time::Time(int tmphpur) {
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
//�������������
Time& Time::rtnhour(int tmphour1) {
	Hour += tmphour1;
	return *this;
}
Time& Time::rtnminnute(int tmpminute) {
	Minute += tmpminute;
	return *this;
}
void Time::mystafunc(int tmpstatic) {
	mystaic = tmpstatic;
}