#include <iostream>
#include"ConstStruct.h"
using namespace std;
void printTeacher(const Teacher *s);
int main() {
	struct Teacher wang;
	wang.name = "汪峰";
	wang.age = 38;
	wang.s->cardid = 2026;
	wang.s->name = "王宝强";
	wang.s->score = 99.6f;
	printTeacher(&wang);
	cout << "wang的age修改为：" << wang.age << endl;
	system("pause");
	return 0;
}