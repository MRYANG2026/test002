#include <iostream>
using namespace std;

class A {
public:
    int value;

    A() {
        cout << "A无参构造函数被调用了" << endl;
        value = 42; // 初始化成员变量
    }
    A(int a) {
        cout << "A有参构造函数被调用了" << endl;
        value = a; // 初始化成员变量
    }
    ~A() {
        cout << "A析构函数被调用了" << endl;
    }
    void display() const{
        value = 50;
        cout << "value: " << value << endl;
    }

};
class B{
public:
    int value;

    B() {
        cout << "B无参构造函数被调用了" << endl;
        value = 42; // 初始化成员变量
    }
    B(int a) {
        cout << "B有参构造函数被调用了" << endl;
        value = a; // 初始化成员变量
    }
    B(const B & ps) {
        cout << "B拷贝构造函数被调用了" << endl;
        value = ps.value;
    }
    void display() {
        cout << "value: " << value << endl;
    }
    ~B() {
        cout << "B析构函数被调用了" << endl;
    }
private:
    A a;
};

int main() {
    //A a[3]; // 声明对象a，构造函数被调用
    //A b[3] = { A(1), A(1) , A(1) };
    //a.display(); // 调用成员函数，不会再次调用构造函数


    B b[3];
    b[2].value = 5;
    B c(b[2]);
    //c = b[2];
    b->display();
    return 0;
}