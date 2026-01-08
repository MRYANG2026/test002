#include<iostream>
using namespace std;
void pointer();
void SizePointer();
void emptyPointer();
void WildPointer();
void ConstPointer();
void PointerConst();
int main() {
	//1.指针基本操作
	pointer();
	//2.指针大小
	SizePointer();
	//3.空指针
	emptyPointer();
	//4.野指针
	//WildPointer();

	//5.常量指针
	ConstPointer();
	//6.指针常量
	PointerConst();


	system("pause");
}