// MyProject7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//模板与泛型

#include <iostream>
#include"myvector.h"
#include"myarray.h"

using namespace std;

//int funcadd(int i1, int i2) {
//    int sumadd = i1 + i2;
//    return sumadd;
//}
//函数模板
template <typename T>
T funcadd(T a, T b) {
    T sumadd = a + b;
    return sumadd;
}

template<int a,int b>
int funcadd2() {
    int sumadd = a + b;
    return sumadd;
}

template<typename T,int a,int b>
int funcadd3(T c) {
    int sumadd = int(c) + a + b;
    return sumadd;
}

template<unsigned L1, unsigned L2>
//str[6]  (&p1)[L1]
inline int charcomp(char const(&p1)[L1], char const(&p2)[L2]) {
    return strcmp(p1, p2);
}


int main()
{
    int he = funcadd(3, 1);
    cout << he << endl;
    int result = funcadd2<12, 13>();
    cout << result << endl;
    int result1 = funcadd3<int, 11, 12>(13);
    cout << result1 << endl;
    int result2 = charcomp("test2", "test1");
    cout << result2 << endl;
    //std::cout << "Hello World!\n";
    cout << "-------------*-------------"<<endl;
    //类模板，类型模板参数
    myvector<int> tmpvec;
    
    //类模板，非类型模板参数的使用
    myarray<int, 100> tmparr;
    myarray<int> tmparr1;
    tmparr1.myfunc();

    myarray<int, 50> tmparr2;
    tmparr2.myfunc();

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
