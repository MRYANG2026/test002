#include<iostream>
using namespace std;

/*
*                 常量指针
* 特点：指针的指向可以修改，但是指针的值不可以修改
*
*/
void ConstPointer() {
	int a = 0, b = 5;
	const int* p = &a;
	p = &b;
	cout << "p指向的值为：" << *p << endl;
	//错误示范
	//*p = 6;
	//cout << "p指向的值为：" << *p << endl;
}

/*
*                  指针常量
* 特点：指针的值可以修改，但是指针的指向不可以修改
*
*/
void PointerConst() {
	int a = 0, b = 5;
	 int* const p = &a;
	 *p = 6;
	 cout << "p指向的值为：" << *p << endl;
	//错误示范
	//p = &b; 
	//cout << "p指向的值为：" << *p << endl;
}