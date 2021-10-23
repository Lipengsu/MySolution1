// MyProject7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//模板与泛型

#include <iostream>
#include<map>
#include"myvector.h"
#include"myarray.h"
#include"A.h"
#include"B.h"

//模板实例化声明
extern template A<float>;
using namespace std;

//定义类型别名
typedef map<string, int> map_s_i;
//类型名不固定定义法
template<typename T>
using str_map_t = map<string, T>;
//给函数指针类型模板起别名
template<typename T>
using myfunc_M = int(*)(T, T);
int RealFunc(int i, int j)
{
    return 3;
}

class tc {
public:
    tc() {
        cout << "构造函数执行" << endl;
    }
    tc(const tc& t) {
        cout << "拷贝构造函数" << endl;
    }
    int operator()(int v1, int v2)const {
        return v1 + v2;
    }
};

//函数指针
typedef int(*FunType)(int, int);
int mf(int tmp1, int tmp2) {
    return tmp1 + tmp2;
}

template<typename T, typename F=FunType>
void testfun(const T&i, const T&j, F funcpoint=mf){
    int result = funcpoint(i, j);
    cout << result << endl;
}
//testfun<int,FunType>(3,4,mf);
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

//
template<typename T1,typename T2,typename T3>
T1 sum(T2 i, T3 j) {
    T1 result = i + j;
    return result;
}

int main()
{
    //int he = funcadd(3, 1);
    //cout << he << endl;
    //int result = funcadd2<12, 13>();
    //cout << result << endl;
    //int result1 = funcadd3<int, 11, 12>(13);
    //cout << result1 << endl;
    //int result2 = charcomp("test2", "test1");
    //cout << result2 << endl;
    ////std::cout << "Hello World!\n";
    //cout << "-------------*-------------"<<endl;
    ////类模板，类型模板参数
    //myvector<int> tmpvec;
    //
    ////类模板，非类型模板参数的使用
    //myarray<int, 100> tmparr;
    //myarray<int> tmparr1;
    //tmparr1.myfunc();

    //myarray<int, 50> tmparr2;
    //tmparr2.myfunc();

    ////typename
    //string mytest = "I love China!";
    ////string::size_type为类型
    //string::size_type size2 = get_length(mytest);
    //cout << size2 << endl;

    ////函数指针
    ////testfun(3, 4, mf);
    //tc tobcj;
    //testfun(3, 4);

    ////成员函数模板
    //A<float> a(1, 2);
    //A<float> a2(1.1, 2.2);
    //a.myft(3);

    //map_s_i mymap;
    //mymap.insert({"first",1});

    //str_map_t<int> map1;
    //map1.insert({"first",1});
    //函数指针  myfunc_M<int>为类型名
    //myfunc_M<int> pointFunc;
    //pointFunc = RealFunc;
    //cout << pointFunc(1, 6) << endl;
    ////显示指定模板参数
    //auto  result = sum<double,double,double>(2000000000,2000000000);
    //cout << result << endl;

    //类模板特化
    //TC<char, int> tchar;
    //tchar.functest();

    //TC<int, int> tint;
    //tint.testfunc();
    //对象时泛化版本的模板构造函数，调用的是<double,doubel>的特化版本
    //TC<double, double> tint2;
    //tint2.functest();

    //泛化
    //TCP<double, int, double> tcpdi;
    //tcpdi.functest();
    //偏特化
 //   TCP<int, int, double> tcpdi1;
 //   tcpdi1.functest();

	//TCF<double> td;
	//td.testfunc();
	//TCF<double*>tcfd;
	//tcfd.testfunc();
	//TCF<const int>tcfi;
	//tcfi.testfunc();
	//TCF<int&>tcfyin;
	//tcfyin.testfunc();
	//TCF<int&&>tcfyii;
	//tcfyii.testfunc();

    ////函数模板全特化
    //const char* p = "I Love China!";
    //int i = 12;
    //tfunc(p, i);

    //int k = 12;
    //double db = 15.8f;
    //tfunc(k, db);

    //可变参数模板
    //myfunct1();
    //myfunct1(10, 20);
    //myfunct1(10, 25.8, 80000000000, "abc","fsgfsgdsffgdgsfffffffffffffffffffffffffff");

    myfunct2(10,"abc",1.1,0);
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
