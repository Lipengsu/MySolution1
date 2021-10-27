// MyProject8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include <debugapi.h>
#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A的构造函数执行了" << endl;
    }
    ~A() {
        cout << "~A()的析构函数执行了" << endl;
    }
};
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

shared_ptr<int> create0(int value) {
    return make_shared <int>(value);
}

shared_ptr<int> myfunc(int value) {
    shared_ptr<int> ptmp = create0(10);
    return ptmp;
}

class CT:public enable_shared_from_this<CT> {
public:
    shared_ptr<CT> getself() {
        //return shared_ptr<CT>(this);
        return shared_from_this();
    }
};

auto myfunc2()
{
    return unique_ptr<string>(new string("Hello Wolrd"));
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

    ////lock成员函数
    //auto p1 = make_shared<int>(42);
    //weak_ptr<int>pw;
    //pw = p1;
    //if (!pw.expired()) {
    //    auto p2 = pw.lock();//获取所监视的shared_ptr,同时p2也会增加引用计数。
    //    if (p2 != nullptr) {
    //        cout << "所指对象存在" << endl;
    //    }
    //}
    //else {
    //    cout << "pw已经过期" << endl;
    //}

    ////尺寸问题
    //shared_ptr<int> p3(new int(100));
    //weak_ptr<int> p4(p3);
    //int lens = sizeof(p3);//8字节
    //int lenw = sizeof(p4);//8字节

    //关于shared_ptr的一些使用陷阱
    //auto p=myfunc(10);

    ////慎用裸指针
    //int* pi = new int;
    //shared_ptr<int> p1(pi);
    ////会导致pi所指向的内存被释放两次，报错。
    //shared_ptr<int> p2(pi);

    ////慎用get函数返回的指针
    //shared_ptr<int> myp(new int(100));
    //int* p3 = myp.get();
    ////delete p3;//异常

    //shared_ptr<int> myp2(new int(100));
    //int* p4 = myp2.get();
    //{
    //    //shared_ptr<int> myp3(p4);//异常
    //    shared_ptr<int> myp3(myp2);
    //}

    ////
    //shared_ptr<CT> pt1(new CT);
    ////强引用使用类模板enable_shared_from_this之后强引用变为2
    //shared_ptr<CT> pt2 = pt1->getself();

    ////unique_ptr
    //unique_ptr<int> p1 = std::make_unique<int>(100);
    //auto p2 = std::make_unique<int>(200);

    //shared_ptr<int> p3(new int(100));

    //unique_ptr<string> ps1(new string("hello world"));
    ////unique_ptr<string> ps2(ps1);//异常，该智能指针不支持赋值动作
    ////移动语义
    //unique_ptr<string> ps3(new string("hello world"));
    //unique_ptr<string> ps4 = move(ps3);

    //unique_ptr<string> ps5(new string("hello world"));
    //unique_ptr<string> ps6(ps5.release());
    //if (ps5 == nullptr) {
    //    cout << "kong" << endl;
    //}

    ////释放ps2的正常操作
    //string* temp = ps5.release();
    //delete temp;

    ////reset成员函数
    //unique_ptr<string> ps7(new string("hello world"));
    //ps7.reset();
    //if (ps6 == nullptr) {
    //    cout << "ps6 kong" << endl;
    //}
    //unique_ptr<string> ps8(new string("hello world1"));
    //unique_ptr<string> ps9(new string("hello world2"));
    //ps8.reset(ps9.release());//参数为release()返回指针
    //ps8.reset(new string("helllo world3"));

    ////=nullptr
    //unique_ptr<string> ps10(new string("hello world4"));
    //ps10 = nullptr;//释放对象，并置空

    ////指向一个数组
    //unique_ptr<int[]> ptrarray(new int[10]);
    ////访问的下标范围0~9，因为定义了10个
    //ptrarray[0] = 12;
    //ptrarray[1] = 13;
    //ptrarray[9] = 14;

    //unique_ptr<A[]> ptrarray1(new A[10]);//有析构函数，<>中必须有[]
    //auto mydel = [](A* p) {//写自己的删除器
    //    delete[] p;
    //};
    //unique_ptr<A, decltype(mydel)> ptrarray2(new A[10], mydel);//带自己的删除器
    
    //get成员函数
    unique_ptr<string> ps11(new string("hello world"));
    string* ps = ps11.get();
    const char* p1 = ps->c_str();
    *ps = "hello world2";
    const char* p2 = ps->c_str();

    unique_ptr<int[]> ptrarray(new int[10]);
    //*ptrarray;   //异常，数组是没有解引用运算符的

    //swap成员函数
    //智能指针的名字作为判断条件
    unique_ptr<string> ps12(new string("hello World"));
    if (ps12) {
        cout << "ps12指向了一个对象" << endl;
    }

    //转换成shared_ptr类型
    shared_ptr<string> pss1 = myfunc2();
    //或
    unique_ptr<string> ps13(new string("hello world1"));
    shared_ptr<string> pss2 = move(ps13);//执行后ps为空
 



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
