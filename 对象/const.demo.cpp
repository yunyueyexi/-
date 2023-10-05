#include<iostream>

using namespace std;


class A
{
public:
    int i;
    const int j;
    A():j(5)
    {
        i = 3;
    }
    void f()
    {

    }

    void show() const;  //定义常方法

};

void A :: show() const   //定义常方法
{
    cout << i <<endl;
}

int main()
{
    const A a;
    const A& b = a;
    const A* c = &a;
    const char m = 'a'; 
    cout << a.i + 3 << endl;

    // a.f();                           //常对象不能定义非常方法
    // b.i = 3;                         //常对象不能定义非常方法
    // c ->i = 3                        //常对象不能定义非常方法 

    a.show();  //调用常方法
    b.show();  //调用常方法
    c->show(); //调用常方法  

    *((char*)&m) = 'c';

    cout << m << endl;      
    return 0;

}