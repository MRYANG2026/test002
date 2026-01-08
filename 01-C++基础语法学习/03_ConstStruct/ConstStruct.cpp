#include "ConstStruct.h"
/*
*地址传递能有效地节省开销
*const 在地址传递时防止误操作 修改数据
*/
void printTeacher(const Teacher *s) {
	//s->age = 100;
	cout << "老师的姓名：" << s->name << "\n"
		<< "老师的年龄:" << s->age << "\n"
		<< "学生1姓名：" << s->s[0].name << "\n"
		<< "学生号：" << s->s[0].cardid << "\n"
		<< "学生分数" << s->s[0].score << "\n" << endl;
}
