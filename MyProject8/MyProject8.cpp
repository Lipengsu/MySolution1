// MyProject8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include <debugapi.h>
#include <iostream>

using namespace std;

//class A {
//public:
//    A() {
//        cout << "A的构造函数执行了" << endl;
//    }
//    ~A() {
//        cout << "~A()的析构函数执行了" << endl;
//    }
//};
//
//shared_ptr<int> makes(int value) {
//    //return new int(value);//错误，不可以隐式转换
//    return shared_ptr<int>(new int(value));
//}
//
//void myfunc(shared_ptr<string> &ptmp) {
//    return;
//}

//删除器函数
void myDelete(int* p) {
    cout << "执行了自定义的删除器" << endl;
    delete p;
}

int main()
{
    //A* pi = new A[2];
    //delete []pi;

    ////智能指针,为explicit，不可以进行隐式转换
    ////shared_ptr<int> pi2 = new int(100);//错误
    //shared_ptr<int> pi1(new int(100));

    ////make_shared函数
    //shared_ptr<int> p2 = make_shared<int>(100);
    //shared_ptr<int> p3 = make_shared<int>(100);
    //shared_ptr<string> p4 = make_shared<string>(5, 'a');

    //shared_ptr<int> p5 = make_shared<int>();
    //p5 = make_shared<int>(400); //释放刚才的对象，重新指向新对象
    //auto p6 = make_shared<string>(5,'a');
    //auto p7(p6);
    ////执行到此行，p7与p6计数为2

    ////进入函数体myfunc中的引用计数有三个，从myfunc中返回时引用计数恢复为2
    //myfunc(p7);

    //int icount = p6.use_count(); //2
    //cout << "p6此时的引用个数为：" << icount << endl;

    //if (p5.unique()) {
    //    cout << "p5独占对象" << endl;
    //}
    //else {
    //    cout << "p5不独占对象" << endl;
    //}
    //if (p7.unique()) {
    //    cout << "p7独占对象" << endl;
    //}
    //else {
    //    cout << "p7不独占对象" << endl;
    //}
    //reset成员函数,pi引用减一，同时pi置空，若变为0，则释放对象，否则不释放。
    //若reset带new参数，则会让pi指向新内存
    //不带参数
    //shared_ptr<int> pi2(new int(100));
    //pi2.reset();
    //if (pi2 == NULL) {
    //    cout << "pi2被置空" << endl;
    //}
    ////带参数
    //shared_ptr<int> pi3(new int(100));
    //auto pi4(pi3);
    //pi3.reset();        //pi3被置空，pi4引用计数变为1

    //shared_ptr<int> pi5(new int(100));
    //pi5.reset();

    //解引用
    //int a = 10;
    //shared_ptr<int> pother(new int(a));
    //char outbuf[1024];
    //sprintf_s(outbuf, sizeof(outbuf), "%d", *pother);
    //OutputDebugString(outbuf);
    
    ////get成员函数
    //shared_ptr<int> myp(new int(100));
    //int* p = myp.get();
    //*p = 45;
    ////swap成员函数
    //shared_ptr<string> ps1(new string("hello World!"));
    //shared_ptr<string> ps2(new string("hello World"));
    //swap(ps1, ps2);
    //ps1.swap(ps2);
    //
    ////指定删除器
    //shared_ptr<int> p1(new int(12345), myDelete);
    //shared_ptr<int> p2(p1);
    //p2.reset();
    //p1.reset();
    //shared_ptr<int> p3(new int(123456), [](int* p3){delete p3;});
    //p3.reset();

    //shared_ptr<int[]> p4(new int[10], [](int* p4){
    //    delete[] p4; 
    // });

    //weak_ptr
    //auto pi = make_shared<int>(100);
    //weak_ptr<int> piw(pi);
    //weak_ptr<int> piw2(piw);
    //auto pi2 = piw.lock();//强引用计数会加1，

    ////成员函数
    //int isc = piw.use_count();//强引用的个数

    //lock成员函数
    auto p1 = make_shared<int>(42);
    weak_ptr<int>pw;
    pw = p1;
    if (!pw.expired()) {
        auto p2 = pw.lock();//获取所监视的shared_ptr,同时p2也会增加引用计数。
        if (p2 != nullptr) {
            cout << "所指对象存在" << endl;
        }
    }
    else {
        cout << "pw已经过期" << endl;
    }

    //尺寸问题
    shared_ptr<int> p3(new int(100));
    weak_ptr<int> p4(p3);
    int lens = sizeof(p3);//8字节
    int lenw = sizeof(p4);//8字节
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
