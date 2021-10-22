#pragma once
#include<iostream>
using namespace std;


class Testint {
public:
	//����ת�����캯��
	Testint(int x = 0) :m_i(x)
	{
		if (m_i < 0) m_i = 0;
		if (m_i > 100)m_i = 100;
	}

	//����ת�������
	explicit operator int()const {
		return m_i;
	}
	int m_i;

	//�����ת��Ϊ����ָ��
	//typedef void(* tfpoint)(int);
	using tfpoint = void(*)(int);
	static void mysfunc(int v1) {
		cout << v1 << endl;
	}
	//����ת�������
	operator tfpoint() {
		return mysfunc;
	}
};
