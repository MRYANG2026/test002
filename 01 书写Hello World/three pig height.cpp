#include <iostream>
#include "SAMD.h"
using namespace std;
#define name "Demon Child"
namespace A {
	int a = 100;
	void Handel(){
		int a = 10;
		cout << a << endl;
	}
}
namespace B {
	int a = 200;
	void Handel() {
		int a = 20;
		cout << a << endl;
	}
}


using namespace A;
using namespace B;

void Handel() {
	int a = 30;
	cout << a << endl;
}
void SUB(int a, int b);
void ADD(int a, int b);
void DIV(int a, int b);
void MUL(int a, int b);
int main() {
	/*
	* 题目一：三只小猪哪知最重
	* 熟悉CPlusPlus的基本语法
	* 解题思路：三目运算符，逻辑运算
	*/
/*
	float Max = 0.0;
	float pig0, pig1, pig2;
	cout << "请输入第一只小猪的体重：";
	cin >> pig0;
	cout << "请输入第二只小猪的体重：";
	cin >> pig1;
	cout << "请输入第三只小猪的体重：";
	cin >> pig2;
	if (pig0 > pig1) {
		pig0 > pig2 ? Max = pig0 : Max = pig2;
	}
	else {
		pig1 > pig2 ? Max = pig1 : Max = pig2;
	}
	cout << "最重的小猪体重为：" << Max << "kg" << endl;
*/

	/*
	* 题目二：switch语法
	* 解题思路：switch基本语法
	*/
//	int score = 0;
//	cout << "Please rate the movie the Demon Child 0~100：";
//	cin >> score;
//	int range = -1; // 默认值，表示无效输入
//
//	// 将范围映射到整数值
//	if (score > 80) {
//		range = 0;
//	}
//	else if (score >= 60 && score <= 80) {
//		range = 1;
//	}
//	else if (score >= 0 && score < 60) {
//		range = 2;
//	}
//
//	// 使用 switch 语句处理范围
//	switch (range) {
//	case 0:
//		cout << "The "<<name <<" movie is very perfect" << endl;
//		break;
//	case 1:
//		cout << "The " << name << " movie is not bad" << endl;
//		break;
//	case 2:
//		cout << "The " << name << " movie is rubbish" << endl;
//		break;
//	default:
//		cout << "Invalid score. Please enter a number between 0 and 100." << endl;
//		break;
//	}
	
	/*引用
	注意：
	1.引用不能修改 指针可以
	2.引用必须初始化，指针不用
	3.引用类型和变量类型必须一致*/
	//int a = 10,c=42;
	//int& b = a;
	//b = 20;
	//cout << "a:" << a;


	/*
	命名空间：namespace
	namespace A;
	namespace B;
	Handel();
	*/
	int a = 50,b=30;
	A::Handel();
	cout << a << endl;
	ADD(a, b);
	SUB(a, b);
	MUL(a, b);
	DIV(a, b);
	
}