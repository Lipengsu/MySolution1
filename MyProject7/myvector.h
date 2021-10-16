#pragma once
#ifndef __MYVECTOR__
#define __MYVECTOR__
template<typename T>
class myvector {
public:
	typedef T* myiterator; 
	myvector();
	myvector& operator=(const myvector&);
	myiterator mybegin();
	myiterator myend();
	void myfunc();
};

template <typename T>
void myvector<T>::myfunc() {

}
template <typename T>
myvector<T>::myvector() {

}
template<typename T>
myvector<T>& myvector<T>::operator=(const myvector<T>&) {

}
#endif // !__MYVECTOR__
