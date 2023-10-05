#include<cstdio>   //<stdio.h>等效
#include<ctime>    //<time.h>等效
#include<iostream> 
#include<cstring>  

using namespace std;

struct demo
{
    string name;
    string ID;
    int num;
    float price;
};



struct my_time
{
    int hour,minute,second;   //c++支持结构体同行定义

};


void struct_init(demo& f);  //可以省略参数
void get_cur_time(struct my_time* mt);

int main()
{
    //struct demo f;
    // demo f;             //声明结构体类型后定义时，可以不用写前缀
    // struct my_time mt;
    // struct_init(f);

    // cout << "\n" << "商品名：" <<f.name << '\n' << "ID" << f.ID << '\n' << "价格" <<f.price << '\n' << "数量" <<f.num << endl; 

    // get_cur_time(&mt);

    double* d1 = new double;
    if(d1 == NULL)
    {
        cerr << "new error" << endl;
    }
    *d1 = 3.14;
    cout << *d1 << endl;

    delete d1;

    double& b2 = *(new double);
    b2 = 3.1415;
    cout << b2 << endl;
    delete  &b2;


    long* d3 = new long[100];
    d3[1] = 4.55;
    *(d3 + 3)= 9.77;

    delete[] d3;    // 多个数据记得写中括号，表示释放一组数据

    string s1 = "hello";

    s1 = s1 + ",world..";

    cout << s1 << endl;
    return 0;


}

void struct_init(demo & f)  //可以省略参数
{
    cout << "请输入商品名";
    cin >> f.name;

    cout << "请输入ID";
    cin >> f.ID;

    cout << "请输入价格";
    cin >> f.price;

    cout << "请输入数量";
    cin >> f.num;

}

void get_cur_time(struct my_time* mt)
{
    time_t t;
    time(&t);

    mt->hour = (t/(60 * 60) + 8) % 24;
    mt ->minute = t / 60 %60;
    mt ->second = t % 60; 
}


int& sum(int n)
{
    //staric int s;  //
    //int* s = new int; //int* s = (int*)malloc(sizeof(int));等效
    int& b = *(new int); //引用指向一个堆区空间

    return b;
}