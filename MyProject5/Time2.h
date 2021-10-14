#pragma once
#ifndef __MYTIME2__
#define __MYTIME2__
class OneClass
{
public:
	OneClass(int)
	{

	}
	//~OneClass();

private:

};

//OneClass::OneClass()
//{
//}
//
//OneClass::~OneClass()
//{
//}
class Time2
{
public:
	//explicit Time2();
	//Time2() = default;
	//Time2(int itmpvalue) {};

	//Time2() = delete;
	int Hour;
	int Minute;
	//这行代码的存在会生成“合成的默认构造函数”
	//int Seocnd; 就不会生成
	
	int Seocnd{ 0 };
	//OneClass oc;
	
	//~Time2();

private:

};

//Time2::Time2()
//{
//}
//
//Time2::~Time2()
//{
//}
#endif // !__MYTIME2__
