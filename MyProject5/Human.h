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
		cout << "����Ը�����ʳ" << endl;
	}
	void testfunc() const {
		cout << "����ָ��ĳ�Ա��������" << endl;
	}
	Human(const Human& tmphuman);
	//��������Ϊ�麯����֤���󣨸�ָ��ָ����Ӷ����ڴ汻��ȷ�ͷ�
	virtual ~Human() {
		cout << "human����������ִ����" << endl;
	}
protected:
	int m_prol;
	void funcpro();
private:
	int m_privl;
	void funcpri();

};

#endif // !__HUMAN__