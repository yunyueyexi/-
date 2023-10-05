#include<iostream>

using namespace std;

class person
{
private:
    int id;
    char name[20];

public:
    person();
    person(int id, const char *name);
    ~person();
};

person::person(/* args */)
{
}

person::person(int id,const char* name):id(id),name(name)
{

}
person::~person()
{
}
