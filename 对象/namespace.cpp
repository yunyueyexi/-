#include<iostream>

using namespace std;  //将 std设置为默认命名空间

//using namespace chen; //将 chen设置为默认命名空间

//定义命名空间

namespace chen
{
    int g = 5;
    void f()
    {
        cout << "chen空间" << endl;
    }

    class A
    {
    public:
        void num()
        {
            cout <<"chen 的数据" << endl;
        }

    };
}


namespace si
{
    int g = 5;
    void f()
    {
        cout << "si的空间" << endl;
    }

    class A
    {
    public:
        static void num()
        {
            cout <<"si 的数据" << endl;
        }

    };
}

int g = 1;

int main()
{
    chen:: g++;
    si::g = 100;

    chen::A a;
    chen::f();
    a.num();

    si::f();
    si::A::num();

    //访问全局命名空间的g和f,最明确的写法
    ::g++;


}
