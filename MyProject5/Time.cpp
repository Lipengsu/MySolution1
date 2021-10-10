#include"Time.h"

Time::Time(int tmphour, int tmpmin,int tmpsec) {
	Hour = tmphour;
	Minute = tmpmin;
	Second = tmpsec;
	initMillTime(0);
}
Time::Time() {
	Hour = 2;
	Minute = 59;
	Second = 48;
	initMillTime(3);
}
void Time::initMillTime(int mis) {
	Hour = mis;
}