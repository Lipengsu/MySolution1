// MyProject8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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

shared_ptr<int> makes(int value) {
    //return new int(value);//错误，不可以隐式转换
    return shared_ptr<int>(new int(value));
}

int main()
{
    A* pi = new A[2];
    delete []pi;

    //智能指针,为explicit，不可以进行隐式转换
    //shared_ptr<int> pi2 = new int(100);//错误
    shared_ptr<int> pi1(new int(100));

    //make_shared函数
    shared_ptr<int> p2 = make_shared<int>(100);
    shared_ptr<int> p3 = make_shared<int>(100);
    shared_ptr<string> p4 = make_shared<string>(5, 'a');

    shared_ptr<int> p5 = make_shared<int>();
    p5 = make_shared<int>(400);
    auto p6 = make_shared<string>(5,'a');
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
