#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {


protected:
	int CardId[16];

private:
	char name[256];
	float score[16];

public:
	char school[256];
	//Student();
	Student(int id, const char* name, const float* score);
	void display()
	{
		cout << "姓名： " << name << endl;
		cout << "学号： " << CardId[0] << endl;
		cout << "分数： " << score[0] << endl;
		cout << "毕业院校： " << school << endl;
			
	}
	//~Student();
};

//Student::Student()
//{
//	strcpy_s(name, "杨恒");
//	score[0] = 99.9f;
//	CardId[0] = 2022;
//	strcpy_s(school, "河北建筑工程学院");
//}

Student::Student(int id, const char* name, const float* score)// 初始化数组成员
{
	CardId[0] = id;
	strcpy_s(this->name, name); // 使用 this-> 来区分成员变量和参数
	if (score) {
		this->score[0] = score[0];
	}
	else {
		this->score[0] = 0.0f;
	}
	strcpy_s(school, "河北建筑工程学院");
}