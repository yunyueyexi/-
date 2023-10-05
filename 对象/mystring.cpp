#include<iostream>
#include"mystring.h"


using namespace std;


mystring::mystring()
{
    this->str = new char[100];
    str[100] = 0;
}

int mystring::mystrcpy(char* dest,const char* src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        if(dest[i] == '\0') return 0;
        i++;
    }

    return 1;
}

char* mystring::mystrcat(const char* src,const char* src1)
{
    int i = 0;
    int num = mystrlen(src);
    while(src[i] != '\0')
    {
        str[i] = src[i];
        i++;
    }
    i = 0;
    while(src1[i] != '\0')
    {
        str[i+num] = src1[i];
        i++;
    }
    return str;
}
int mystring::mystrlen(const char* src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    return i;
}



mystring::~mystring()
{
    delete[] str;
}
