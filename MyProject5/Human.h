#ifndef __HUMAN__
#define __HUMAN__
#include<iostream>
using namespace std;
class Human {
public:
	Human();
	Human(int);
	int m_age;
	char m_Name[100];
	void funcpub();
	void samenamefunc();
	void samenamefunc(int);
	virtual void eat() {
		cout << "����Ը�����ʳ" << endl;
	}
	void testfunc() {
		cout << "����ָ��ĳ�Ա��������" << endl;
	}
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