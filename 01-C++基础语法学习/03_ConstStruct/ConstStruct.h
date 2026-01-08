#include <iostream>
#include <string>
using namespace std;

struct Students
{
	string  name;
	int cardid;
	float score;
};
struct Teacher
{
	string name;
	int age;
	struct Students s[10];

};