#include<iostream>
#include"mystring.h"

using namespace std;

int main()
{
    mystring* s = new mystring;
    //mystring s;

    char dest[100];
    const char* src = "chensiyu";
    const char* src1 = "hello!";

    s->mystrcpy(dest,src);
    cout << dest <<endl;
    cout << s->mystrlen(src) << endl;

    
    cout << s->mystrcat(src,src1) << endl;

    //delete s;
}