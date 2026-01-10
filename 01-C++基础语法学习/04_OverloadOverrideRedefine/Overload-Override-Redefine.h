#pragma once
#include <iostream>
using namespace std;
/*
* ①②为函数重载：在统一作用域下，函数名相同， 函数的形参的类型、个数、顺序不同可以重载，返回值类型不能作为重载条件
* ①③为函数重定义：有继承，子类重新定义父类的同名函数（非虚函数），只要函数名相同即可。（屏蔽父类的所有同名函数，解决办法加作用域）
* ①为函数重写(只有虚函数才能叫重写)：有继承，子类重写父类的虚函数，返回值类型、函数名、形参 必须完全和父类的虚函数一致。（如果子类重写父类的虚函数 子类也是虚函数）
*/
class MyClass
{
public:
	virtual void show() {//①   带virtual：Ⅰ
		cout << "Base::show()" << endl;
	}
	void show(int i) {
		cout << "Base::show(int i)" << endl;//②
	}
};
class YourClass :public MyClass {
public:
	void show() {
		cout << "Son::show()" << endl;//③
	}
};

