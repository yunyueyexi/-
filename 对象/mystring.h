#ifndef __MYSTRING_H__
#define __MYSTRING_H__

class mystring
{
private:
    char* str;
    int sten;
public:
     mystring();
    ~mystring();

    int mystrcpy(char* dest,const char* src);
    int mystrlen(const char* src);
    char* mystrcat(const char* src,const char* src1);
};


#endif