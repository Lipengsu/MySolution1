#pragma once
#include<iostream>
using namespace std;

class CTempvalue {
public:
	int val1;
	int val2;
	CTempvalue(int v1 = 0, int v2 = 0);
	CTempvalue(const CTempvalue& t) :val1(t.val1), val2(t.val2) {
		cout << "&t" << &t << endl;
		cout << "调用了拷贝构造函数" << endl;
	}
	virtual ~CTempvalue() {
		cout << "调用了析构函数" << endl;
	}
	int Add(CTempvalue &tobj);
	CTempvalue& operator=(const CTempvalue& tmpv) {
		val1 = tmpv.val1;
		val2 = tmpv.val2;
		cout << "调用了拷贝赋值运算符" << endl;
		return *this;
	}
};
CTempvalue::CTempvalue(int v1, int v2) :val1(v1), val2(v2) {
	cout << "调用了构造函数" << endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
}
int CTempvalue::Add(CTempvalue &tobj) {
	cout << "&tobj" << &tobj << endl;
	int tmp = tobj.val1 + tobj.val2;
	tobj.val1 = 1000;
	return tmp;
}
CTempvalue Double1(CTempvalue& ts) {
	CTempvalue tmpm;//消耗一次构造函数和一次析构函数的调用
	tmpm.val1 = ts.val1 * 2;
	tmpm.val2 = ts.val2 * 2;
	return tmpm;//返回临时对象，最终又占用了一次拷贝构造函数和一次析构函数的调用
}

//改造double1函数
CTempvalue Double2(CTempvalue& ts) {
	return CTempvalue(ts.val1 * 2, ts.val2 * 2);
}