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

//typename标明这是一个类型 
template<typename T>
typename myvector<T>::myiterator myvector<T>::mybegin() {

}
template <typename T>
typename T::size_type get_length(const T& c) {
	if (c.empty())
		return 0;
	return c.size();
}
#endif // !__MYVECTOR__
