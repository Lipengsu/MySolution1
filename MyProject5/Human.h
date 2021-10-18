#ifndef __HUMAN__
#define __HUMAN__
class Human {
public:
	Human();
	Human(int);
	int m_age;
	char m_Name[100];
	void funcpub();
	void samenamefunc();
	void samenamefunc(int);
protected:
	int m_prol;
	void funcpro();
private:
	int m_privl;
	void funcpri();

};

#endif // !__HUMAN__