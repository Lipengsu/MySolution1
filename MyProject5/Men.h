#pragma once
#ifndef __MEN__
#define __MEN__
#include "Human.h"
class Men :public Human {
public:
	Men();
	void func1();
	void samenamefunc();
	using Human::samenamefunc;
};

#endif // !__MEN__
