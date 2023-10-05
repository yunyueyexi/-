#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

void swap(double&,double&);  //可以省略参数

struct demo
{
    string name;
    string ID;
    int num;
    float price;
};

int main()
{
    // int n,i,s = 0;
    // cout<< "请输入一个整数:";
    // cin >> n;

    // for(i = 1;i <= n;i++)
    //     s += i;

    // cout << n << "的累加和为" << s << endl;

    // string name;

    // cout << "用户名";
    // cin >> name;

    // cout << endl << name << ",您好" << endl;

    int a = 3;

    //& 为引用符
    // int& b = a;  //定义（或声明）变量 a 的引用 b,相当于 a 的一个别名。
    // int& d = b;  //相当于a 有了b ,d两个别名

    // b++;
    // a++;
    // b++;

    // cout << a << endl;
    // cout << b << endl;

    double m = 3.14;
    double n = -5.2;

    swap(m,n);

    cout << m << ' ' << n << endl;    

    return 0;
}

//函数的形参
void swap(double& m,double& n)
{
    double x = 0;
    x = m;
    m = n;
    n = x;
}