// MyProject5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//类

#include <iostream>
#include"Time.h"
#include"Time2.h"
#include"Human.h"
#include"Men.h"
#include"func.h"
#include"A.h"
#include"B.h"
using namespace std;

int Time::mystaic = 5;

int func(Time myt) {
	return myt.Minute;
}
//void func1(int a);
//非const成员函数不能被const对象调用
//void func(const Men& tmpmen) {
//    tmpmen.funcmen2();
//}



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

    //父类指针调用子类的成员函数(通过虚函数来实现访问)
  /*  Human* phuman = new Human();
    phuman->eat();
    delete phuman;*/

    //Human *phuman = new Men();
    //phuman->eat();
    //phuman->Human::eat();
    //delete phuman;

    //友元函数
    /*Men men;
    func(men);
    A a;
    B b;
    b.callBAF(3, a);*/

    ////父类指针访问不了子类成员函数
    //Human* phuman = new Men;
    //phuman->testfunc();

    //Human* phuman = new Men;
    //Men* p = (Men*)phuman;
    //p->testfunc1();
    //delete phuman;
    //指针转换
 //   Human* phuman = new Men;
 //   Men* pmen = dynamic_cast<Men*>(phuman);
 //   if (pmen != nullptr) {
 //       cout << "phuman实际指向一个Men类型对象" << endl;
 //   }
 //   else {
 //       cout << "phuman实际指向的不是一个Men类型对象" << endl;
 //   }
 //   //引用转换
 //   Men mymen;
 //   Human& myhuman = mymen;
	//try {
	//	Men& ifment = dynamic_cast<Men&>(myhuman);
	//	cout << "myhuman实际上是一个Men类型" << endl;
	//}
	//catch (bad_cast) {
	//	cout << "myhuman实际上不是一个Men类型" << endl;
	//}
    //typeid
    //Human* phuman = new Men;
    //Human& q = *phuman;
    //cout << typeid(*phuman).name() << endl;
    //cout << typeid(q).name() << endl;

    //Human* phuman = new Men;
    //Human* phuman2 = new Men;
    //if (typeid(phuman) == typeid(phuman2)) {
    //    cout << typeid(phuman).name() << endl;
    //    cout << "phuamn与phuman2的指针类型相同" << endl;
    //}
    //else {
    //    cout << "phuamn与phuman2的指针类型不相同" << endl;
    //}

    //Human* phuman3 = new Men;
    //Men* phuman4 = new Men;
    //Human* phuman5 =  phuman4;
    //if (typeid(*phuman3) == typeid(*phuman4)) //都指向Men
    //{
    //    cout << typeid(*phuman3).name() << endl;
    //    cout << "phuamn3与phuman4的指向同一种类型" << endl;
    //}
    //if (typeid(*phuman4) == typeid(*phuman5)) //都指向Men
    //{
    //    cout << "phuamn4与phuman5的指向同一种类型" << endl;
    //}

    //Human* phuman6 = new Men;
    //if (typeid(*phuman6) == typeid(Men)) {
    //    cout << "phuman6指向Men" << endl;
    //}

    //Human* phuman7 = new Human;
    //if (typeid(*phuman7) == typeid(Human)) {
    //    cout << "没有虚函数时就成立"<<endl;
    //}

    //Human* phuman8 = new Human;
    //const std::type_info& tp = typeid(*phuman8);
    //cout << tp.name() << endl;

    //Human* phuman9 = new Men;
    //const std::type_info& tp1 = typeid(*phuman9);
    //if (tp == tp1) {
    //    cout << "类型相同" << endl;
    //}


	B btest(10, 20, 50);
	btest.myinfoB();
	btest.myinfoA();

	Men men;
	Human human(men);





    
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
