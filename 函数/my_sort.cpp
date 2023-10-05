#include<iostream>
#include<string>
#include<string.h>

using namespace std;

template<typename T>
bool cmp(T& a,T& b)
{
    if(a > b) return true;
    return false;
}

template<typename T>
void my_sort(T* n,int len,bool(*cmp)(const T& a,const T& b));

int main()
{
    float n[] ={5.3,9.32,42.6,-16.33,82.64,2.3,62.44};
    my_sort<float>(n,sizeof(n)/sizeof(int),cmp); 

    for(int i = 0;i < sizeof(n)/sizeof(int);i++)
    {
        cout << n[i] << " " << endl;
    }

    char data[] = "asdfghjkl";
    my_sort<char>(data,sizeof(data)/sizeof(char) - 1,cmp); 

    for(int i = 0;i < sizeof(data)/sizeof(char) - 1;i++)
    {
        cout << data[i] << " " << endl;
    }
    
}


template<typename T>
void my_sort(T* n,int len,bool(*cmp)(const T& a,const T& b))
{
    int i = 0;
    int j = len - 1;
    T temp = n[i];
    if(j < 2) return;
    while(i < j)
    {
        if(i < j && cmp(n[j],temp)) j--;
        n[i] = n[j];
        if(i < j && cmp(temp,n[i])) i++;
        n[j] = n[i];
    } 
    n[i] = temp;

    my_sort(n,i,cmp);
    my_sort(n+1+i,len - i - 1,cmp);

}

