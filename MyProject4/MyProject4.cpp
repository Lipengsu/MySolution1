// MyProject4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <vector>
#include "Ex_Iterator.cpp"
using namespace std;

////隐患
//int* myfunc() {
//	int tmpvalue = 9;
//	return &tmpvalue;
//}

int main()
{
	/*
	const int var = 17;
	int& var2 = (int&)var;
	var2 = 5;
	cout << var << endl;
	cout << var2 << endl;
	//var实际输出与调式过程中的值并不一样。调式5。输出17。
	//cout << "Hello World!\n";
	cout << "--------------------*------------------" << endl;
	int v[] = { 12,13,14,15,16,18 };
	for (auto& x : v) {
		cout << x << endl;
	}
	cout << "--------------------*------------------" << endl;
	char* point = NULL;
	point = (char*)malloc(100 * sizeof(char));
	if (point != NULL) {
		//中间参数为目标缓存区长度大小为字节最小是13,最大为100
		strcpy_s(point, 13, "hello world!");
		cout << point << endl;
		free(point);
	}
	cout << "--------------------*------------------" << endl;
	//new一般的格式
	int* myint = new int;
	//int* myint = new int(18);
	//int* myint = new int[100];
	if (myint != nullptr) {
		*myint = 8;
		cout << *myint << endl;
		delete myint;
	}
	cout << "--------------------*------------------" << endl;
	int* p = myfunc();
	*p = 6;
	const int& b = 156;//正确
	//b = 156;
	cout << *p << endl;
	cout << "--------------------*------------------" << endl;
	string s1 = "love China";
	const char* p1 = s1.c_str();
	for (auto& c : s1) {
		c = toupper(c);
	}
	cout << s1 << endl;
	cout << "--------------------*------------------" << endl;
	string s9 = "abc";
	string s10 = "abC";
	const char* p2 = s10.c_str();
	char str[100];
	strcpy_s(str, sizeof(str), p2);
	cout << str << endl;
	cout << "--------------------*------------------" << endl;
	string s11 = "abc";
	string s12 = "def";
	string s13 = s11 + s12;
	//string s14 = "abc" + "def";//两个字符串不能挨着相加
	*
	//cout << "--------------------*------------------" << endl;
	//vector<int>ivec;
	//ivec.push_back(1);
	//ivec.push_back(2);
	//for (int i = 3; i <= 100; i++) {
	//	ivec.push_back(i);
	//}
	//vector<int>ivec2;
	//ivec2 = ivec;
	//ivec2 = { 12,13,14,15 };
	//cout << ivec2.size() << endl;
	//cout << "断点观察处" << endl;
	////vector<int&>vjihe1;
	//cout << "--------------------*------------------" << endl;
	//vector<int> vecvalue{ 1,2,3,4,5,6 };
	//for (auto& vecitem : vecvalue) {
	//	vecitem = vecitem * 2;
	//}
	//for (auto& vecitem : vecvalue) {
	//	//vecvalue.push_back(888);//for范围内，不能有增加vector容器的代码
	//	cout << vecitem << " " ;
	//}
	//cout << endl;
	//cout << "--------------------*------------------" << endl;
	//vector <int> vecvalue1{ 1,2,3,4,5 };
	//auto beg = vecvalue1.begin();
	//auto end = vecvalue1.end();
	//int count = 0;
	///*while (beg != vecvalue1.end()) {
	//	beg = vecvalue1.insert(beg,count+80);
	//	count++;
	//	if (count > 10)
	//		break;
	//	++beg;
	//}
	//for (auto beg = vecvalue1.begin(); beg != vecvalue1.end(); beg++) {
	//	beg = vecvalue1.insert(beg, count + 80);
	//	count++;
	//	if (count > 10)
	//		break;
	//}
	//while与for循环等价
	//*/
	//for (auto beg = vecvalue1.begin(); beg != vecvalue1.end(); beg++)
	//	cout << *beg << endl;
	//vector<int> iv = { 100,200,300 };
	////vector<int>::iterator iter = vecvalue1.begin();
	//
	////直接有效的通过迭代来删除元素
	//while (!iv.empty()) {
	//	auto iter = iv.begin();
	//	iter=iv.erase(iter);
	//}
	//
	//////代码崩溃
	////for (auto iter = iv.cbegin(); iter != iv.cend(); iter++) {
	////	iv.erase(iter);
	////}

	//const int ai = 90;
	//const int* pai = &ai;
	//int* pai2 = const_cast<int*>(pai);
	//*pai2 = 120;
	//cout << ai << endl;
	//cout << *pai2 << endl;
	cout << "--------------------*------------------" << endl;
	int iv1 = 101;
	long long lv1 = 8898899400;
	//强制类型转化为101的指针与101的16进制值一样？？？？？？？
	int* piv1 = (int*)iv1;
	cout <<piv1<< endl;
	int* piv2 = reinterpret_cast<int*>(iv1);
	//cout << *piv2 << endl;
	piv2 = reinterpret_cast<int*>(lv1);
	long long ne = reinterpret_cast<long long>(piv2);
	cout <<ne << endl;
	return 0;
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
