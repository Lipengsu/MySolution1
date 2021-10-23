#pragma once
#include<iostream>
using namespace std;
template<typename T,typename U>
struct TC {
	TC()
	{
		cout << "���͹��캯��" << endl;
	}
	void functest() {
		cout << "TC�����汾" << endl;
	}
};

template<>
struct TC<int, int> {
	TC() {
		cout << "�ػ��汾���캯��" << endl;
	}
	void testfunc() {
		cout << "�ػ��汾" << endl;
	}
}; 
template<>
void TC<double, double>::functest() {
	cout << "��Ա�������ػ��汾" << endl;
}

template<typename T,typename U,typename W>
//ƫ�ػ�
struct TCP {
	TCP() {
		cout << "TCP�����汾���캯��" << endl;
	}
	void functest() {
		cout << "TCP�����汾" << endl;
	}
};


template<typename U>
struct TCP<int, U, double> {
	TCP() {
		cout << "ƫ�ػ����캯��" << endl;
	}
	void functest() {
		cout << "TCPƫ�ػ��汾" << endl;
	}
};
//��Χ�ϵ�ƫ�ػ�
template <typename T>
struct TCF {
	TCF() {
		cout << "TCF���͹��캯��" << endl;
	}
	void testfunc() {
		cout << "TCF�����汾" << endl;
	}
};

template<typename T>
struct TCF<const T> {
	TCF() {
		cout << "TCF const�ػ����캯��" << endl;
	}
	void testfunc() {
		cout << "TCF const�ػ��汾" << endl;
	}
};

template<typename T>
struct TCF<T *> {
	TCF() {
		cout << "TCF*�ػ����캯��" << endl;
	}
	void testfunc() {
		cout << "TCF*�ػ��汾" << endl;
	}
};

template<typename T>
struct TCF<T&> {
	TCF() {
		cout << "TCF&�ػ����캯��" << endl;
	}
	void testfunc() {
		cout << "TCF&�ػ��汾" << endl;
	}
};

template<typename T>
struct TCF<T&&> {
	TCF() {
		cout << "TCF&&�ػ����캯��" << endl;
	}
	void testfunc() {
		cout << "TCF&&�ػ��汾" << endl;
	}
};
//����ģ��ȫ�ػ�
template <typename T,typename U>
void tfunc(T& tmprv, U& tmprv2) {
	cout << "tfunc�����汾" << endl;
	cout << tmprv << endl;
	cout << tmprv2 << endl;
}

template<>
void tfunc(int& tmprv, double& tmprv2) {
	cout << "----------begin----------" << endl;
	cout << "tfunc<int,double>�ػ�ʵ��" << endl;
	cout << tmprv << endl;
	cout << tmprv2 << endl;
	cout << "----------end------------" << endl;
}
//����ģ������ͨ����������
//1.��ͨ��������ʱ���Է����Զ�����ת������ʽת������
//2.����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת����
//3.���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת����
//����ģ�岻��ƫ�ػ���ֻ����ģ�����ƫ�ػ�

//�ɱ亯��ģ��
template<typename...T>
void myfunct1(T... args) {
	//sizeof...��ʾ�յ���ģ������ĸ�����ֻ������һ�����ͻ����β�
	cout << sizeof...(args) << endl;
	//����һ�е�Ч����ͬ
	cout << sizeof...(T) << endl;
}

//�˺����������myfunct2�ɱ����ģ�������λ�á����򵱲���Ϊ0ʱ�޷�����myfunct2
void myfunct2() {
	cout << "������չ����Ϻ��ִ�еĵݹ���ֹ����" << endl;
}
template<typename T,typename... U>
void myfunct2(const T& firstarg, const U&... otherargs) {
	cout << "�յ��Ĳ���ֵΪ��" <<firstarg<< endl;
	myfunct2(otherargs ...);//һ���βΣ� ...����ʡ��
}

