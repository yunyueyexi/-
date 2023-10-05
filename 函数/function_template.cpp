#include<iostream>
#include<string>

using namespace std;

//定义函数模板
template <typename T>   //T为自定义名字，可以写多个
//template <typename T,typename T1 ,class T3>   //尖括号中为类型参数，推荐使用typename，不推荐class 应为会和后面弄混淆
//类型参数可以代表任何类型，但是同一时间只能代表一种类型，所以才会有多个类型参数的意义。

T max_dj(T a,T b)
{
    if(a > b) return a;
    return b;
}

template <typename T1,typename T2,typename T3>   //T为自定义名字，可以写多个

T1 max_dj(T2 a,T3 b)
{
    if(a > b) return a;
    return b;
}


template <typename T>

void sort_dj(T* data,int len)
{
    int i,j;
    T temp;
    for(i = 1;i < len;i++)
    {
        temp = data[i]
        for(j = i - 1;j >= 0;j--)
        {
            if(data[j] < temp) break;
            data[j + 1] = data[j];
        }
        data[j + 1] = data[j];
    }
}


int main()
{
    cout << max_dj<double>(3.45,6.543) << endl;   //这里要注意将类型的形参定义类型，这样编译器会更准确

    cout << max_dj<int,int,double>(12,max_dj<int,int,double>(3,7.9)) << endl;
    cout << max_dj<float>(12,65.7) << endl;       //形参和实参的类型可以不同


    return 0;
}