#pragma once

#include <iostream>

using namespace std;

class String
{
private:
    char *buff;
    long len;

public:
    String(void);
    String(const char *s);
    String(const String &s);
    explicit String(int n);
    ~String();

    long size(void);
    const char *c_str(void);

    int toInt(void);
    double toDouble(void);

    char &operator[](int i); // 重载下标运算符

    // 重载类型转换运算符
    operator int();
    operator double();

    // 重载加法运算符
    String operator+(const String &s);

    // 重载各种比较运算符
    // bool operator==(const String& s);
    // bool operator!=(const String& s);
    bool
    operator>(const String &s);
    // bool operator<(const String& s);
    // bool operator<=(const String& s);

    // 重载赋值运算符，实现深拷贝效果
    String operator=(const String &s);

    friend ostream &operator<<(ostream &out, const String &s);
    friend istream &operator>>(istream &in, String &s);
};
