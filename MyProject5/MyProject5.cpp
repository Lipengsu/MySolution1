// MyProject5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//类

#include <iostream>
#include"Time.h"
using namespace std;

int Time::mystaic = 5;

int func(Time myt) {
    return myt.Minute;
}

int main()
{
    //隐式转换与显示转换
    Time myTime=Time(1,2,3);//调用构造函数
    Time myTime2 (myTime);//调用拷贝构造函数
    Time myTime3 (14);
    //Time mytiem4 =(12, 13, 14, 15, 16);
    Time mytime5  { 12,13,53 };
    Time mytime6 { 14 };
    func(Time(14));
    //func(2)使用int值传入func函数，会调用单参数构造函数
    cout << mytime5.Hour << " " << func(Time(2)) << endl;

   // this指针，杀毒软件关闭后执行
    Time mytime7;
    cout << mytime7.Hour << endl;
    mytime7.rtnhour(3);
    Time mytime8;
    mytime8.rtnhour(3).rtnminnute(5);
    cout << mytime8.Hour <<":" << mytime8.Minute <<":" << mytime8.Second << endl;

    //static
    cout << Time::mystaic << endl;
    Time mytime9,mytime10;
    mytime9.mystaic = 12;
    cout << mytime10.mystaic << endl;
    Time::mystafunc(1288);
    mytime10.mystafunc(1299);
    cout << Time::mystaic << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
