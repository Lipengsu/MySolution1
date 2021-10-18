// MyProject5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//类

#include <iostream>
#include"Time.h"
#include"Time2.h"
#include"Human.h"
#include"Men.h"
using namespace std;

int Time::mystaic = 5;

int func(Time myt) {
    return myt.Minute;
}
//void func1(int a);

int main()
{
    /*
    //隐式转换与显示转换
    Time myTime=Time(1,2,3);//调用构造函数
    Time myTime2 (myTime);//调用拷贝构造函数
    Time myTime3 (14);
    //Time mytiem4 =(12, 13, 14, 15, 16);
    Time myTime5  { 12,13,53 };
    Time myTime6 { 14 };
    func(Time(14));
    //func(2)使用int值传入func函数，会调用单参数构造函数
    cout << myTime5.Hour << " " << func(Time(2)) << endl;

    //拷贝构造函数
    cout << "拷贝测试开始" << endl;
    Time myTime12;
    Time myTime13 = myTime12;
    Time myTime14;
    myTime14 = myTime13;   //没有调用拷贝构造函数
    cout << "拷贝测试结束" << endl;
    int b = 3;
    //func1(30000);

    // this指针，杀毒软件关闭后执行
    /* Time mytime7;
    cout << mytime7.Hour << endl;
    mytime7.rtnhour(3);
    Time mytime8;
    mytime8.rtnhour(3).rtnminnute(5);
    cout << mytime8.Hour <<":" << mytime8.Minute <<":" << mytime8.Second << endl;*

    //static
    cout << Time::mystaic << endl;
    Time myTime9,myTime10;
    myTime9.mystaic = 12;
    cout << myTime10.mystaic << endl;
    Time::mystafunc(1288);
    myTime10.mystafunc(1299);
    cout << Time::mystaic << endl;

    //非成员函数
    Time myTime11;
    WriteTime(myTime11);

    //默认构造函数（无参数构造函数）
    Time2 mytime1;
    cout << mytime1.Seocnd << endl;

    //重载运算符
    Time myTime15;
    //对象15调用“=”重载运算符，形参为myTime12
    myTime15 = myTime12;

    */
    //继承访问等级
    //Men men;
    //m_age的权限变为protected，只允许在类中或类的成员函数访问，在主函数中不可以
    //men.m_age = 10;
    //cout << men.m_age << endl;
    //men.samenamefunc();
    //men.Human::samenamefunc();
    //men.Human::samenamefunc(5);

    
}
//void func1(double b) {
//    cout << b << endl;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
