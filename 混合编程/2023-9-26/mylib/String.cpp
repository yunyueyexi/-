#include <cstring>
#include <cstdio>
#include <cstdlib>
#include "String.h"


String::String()
{
    buff = new char[2];
    *buff = '\0';
    len = 0;
}


String::String(const String& s)
{
    // 浅拷贝
    // buff = s.buff;
    // len = s.len;

    len = s.len;

    // 深拷贝
    buff = new char[len + 1];
    strcpy(buff, s.buff);

    cout << "copy constructor" << endl;
}


String::String(const char* s)
{
    len = strlen(s);
    buff = new char[len + 1];
    strcpy(buff, s);
}


String::String(int n)
{
    char tmp[20];
    sprintf(tmp, "%d", n);

    len = strlen(tmp);
    buff = new char[len + 1];
    strcpy(buff, tmp);

    cout << "String(int)" << endl;
}


String::~String()
{
    if(buff != nullptr)
        delete[] buff;

    cout << "~String()" << endl;
}


long String::size(void)
{
    return len;
}


const char* String::c_str(void)
{
    return buff;
}


char& String::operator[](int i)
{
    return buff[i];
}


int String::toInt(void)
{
    return atoi(buff);
}


double String::toDouble(void)
{
    return atof(buff);
}


String::operator int()
{
    return toInt();
}


String::operator double()
{
    return toDouble();
}


String String::operator+(const String& s)
{
    char* tmp = new char[len + s.len + 1];
    strcpy(tmp, buff);
    strcat(tmp, s.buff);

    return String(tmp);  // 返回一个临时无名对象
}


bool String::operator>(const String& s)
{
    return strcmp(buff, s.buff) > 0;
}


String String::operator=(const String& s)
{
    delete[] buff;
    len = s.len;

    // 深拷贝
    buff = new char[len + 1];
    strcpy(buff, s.buff);

    return *this;
}


ostream& operator<<(ostream& out, const String& s)
{
    out << s.buff;
    return out;
}


istream& operator>>(istream& in, String& s)
{
    char tmp[1025];
    in >> tmp;

    delete[] s.buff;
    s.len = strlen(tmp);
    s.buff = new char[s.len + 1];
    strcpy(s.buff, tmp);

    return in;
}