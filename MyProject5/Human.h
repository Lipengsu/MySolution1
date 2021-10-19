#ifndef __HUMAN__
#define __HUMAN__
#include<iostream>
using namespace std;
class Human {
public:
	Human();
	Human(int);
	int m_age;
	int m;
	char m_Name[100];
	void funcpub();
	void samenamefunc();
	void samenamefunc(int);
	virtual void eat() {
		cout << "人类吃各种粮食" << endl;
	}
	void testfunc() const {
		cout << "父类指针的成员函数测试" << endl;
	}
	Human(const Human& tmphuman);
	//析构函数为虚函数保证对象（父指针指向的子对象）内存被正确释放
	virtual ~Human() {
		cout << "human的析构函数执行了" << endl;
	}
protected:
	int m_prol;
	void funcpro();
private:
	int m_privl;
	void funcpri();

};

#endif // !__HUMAN__