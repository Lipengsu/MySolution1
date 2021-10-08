// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<thread>

using namespace std;

//void myprint() {
//	cout << "线程开始执行完毕了1" << endl;
//	cout << "线程开始执行完毕了2" << endl;
//	cout << "线程开始执行完毕了3" << endl;
//	cout << "线程开始执行完毕了4" << endl;
//	cout << "线程开始执行完毕了5" << endl;
//	cout << "线程开始执行完毕了6" << endl;
//	cout << "线程开始执行完毕了7" << endl;
//	cout << "线程开始执行完毕了8" << endl;
//	cout << "线程开始执行完毕了9" << endl;
//	cout << "线程开始执行完毕了10" << endl;
//	//cout << "线程执行结束了" << endl;
//	return;
//}

//传递线程参数
class A {
public:
	A(int a) :m_i(a) { cout << "A::A(int a)构造函数执行" << this << endl; }
	A(const A& a) { cout << "A::(const A)拷贝构造函数执行" << this << endl; }
	~A() { cout << "~A::A()析构函数执行" << endl; }
	mutable int m_i;
};
void myprint(int i, const A& pmybuf) {
	//虽然使用了引用string&,但还是发生了对象复制
	//cout << i << endl;
	pmybuf.m_i = 199;
	cout << &pmybuf << endl;
	//const char* ptmp = pmybuf.c_str();
	//cout << pmybuf.c_str() << endl;
	return;
}

int main() {
	//std:thread mytobj(myprint);
	//	//mytobj.join();
	//	mytobj.detach();

		//auto mylamthread = [] {
		//	cout << "线程开始执行" << endl;
		//	//....
		//	cout << "线程结束执行" << endl;
		//};
		//thread mytobj2(mylamthread);
		//mytobj2.join();
		//cout << "main主函数执行结束!" << endl;
		////输出结果关联的是主线程

		//传递线程参数
//	int mvar = 1;
//	int& mvary = mvar;
//	char mubuf[] = "this is test";
//std:thread mytobj3(myprint, mvar, string(mubuf));
//	mytobj3.join();
//	cout << "main主函数执行结束!" << endl;

	int mvar = 1;
	int mysecondpar = 12;
	std::thread mytobj4(myprint, mvar, mysecondpar);

	mytobj4.join();
	cout << "main主函数执行结束!" << endl;
}



//extern int g_a;
//void func();
//template <typename T>
//T funcadd(T a, T b);

//int main()
//{
//
//	//char aaa[1000] = "safsafsf\n\\0dsad";
//	//printf(aaa);
//	//printf("g_a=%d\n",g_a);
//	//std::cout << "Hello World!\n";
//	//func();
//	//func();  
//
//	/*int he = funcadd(3, 1);
//	float fhe = funcadd(0.2, 3.9);
//	cout << he << endl;
//	cout << "fhe=" << fhe;*/
//}

//void func() {
//	static int temvalue = 1;
//	temvalue++;
//	printf("%d", temvalue);
//}
//
//template <typename T>
//T funcadd(T a, T b)
//{
//	T addhe = a + b;
//	return addhe;
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
