#include<iostream>

using namespace std;

class person
{
private:
    int id;
    char name[21];
    float sight;
public:
    //定义方法（函数成员，成员函数）

    void setID(int n)
    {
        id = n;
        //this -> id = n;   //c++内部干的是这个事儿，我们操作的时候c++帮我们优化了
    }
    void  speak(void)
    {
        cout << "I can speak!" << endl;
    }
};

//全局函数
int sum(int a,int b)
{
    return (a+b);
}

int main()
{
    person p1;

    cout << sizeof p1 <<endl;

    //p1.id = 1001;  //错误，id属性是私有成员在类外不可访问；

    sum(1,2);       //全局函数
    p1.speak();     //成员函数
    p1.setID(1001);   //函数负责访问数据，而不是数据访问他，访问数据的时候要带上相应的该数据的地址，C++中用this指针来代表当前对象的指针，C++内部自动帮我们做了

    return 0;
}
