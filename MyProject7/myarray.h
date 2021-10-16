#pragma once
#ifndef  __MYARRAY__
#define __MYarray

using namespace std;

template<typename T,int size=10>
class myarray {
public:
	void myfunc();
private:
	T arr[size];
};

template<typename T,int size>
void myarray<T, size>::myfunc() {
	cout << size << endl;
}

#endif // ! __MYARRAY__
