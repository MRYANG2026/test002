#include<iostream>
using namespace std;

void pointer() {
	//定义一个指针
	int a = 10;
	int* p = &a;
	cout << "a = " << *p << endl;
	cout << "p指向的地址为： " << p<<" a的地址为："<<&a << endl;
}

void SizePointer() {
	int* p ;
	cout << "p占内存大小为：" << sizeof(p) << endl;
}

/*
* 空指针：指针变量指向内存中编号为0的空间
* 用途：初始化指针变量
* 注意：空指针指向的内存是不可以访问的
*/
void emptyPointer() {
	int* p = NULL;
	cout << "空指针的地址为：" << p << endl;
}


/*
* 野指针：指针变量指向非法的内存空间
*/
void WildPointer() {
	//int a[3] = { 0,0,0 };
	int* p = (int *)0x1100;
	cout << "野指针的数据为：" << *p << endl;
}