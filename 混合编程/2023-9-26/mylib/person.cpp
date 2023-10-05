#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;


// person 类的实现（即定义类中的所有方法）


person::person()
{
    cout << "person()" << endl;

    id = 0;
    strcpy(name, "");
    sight = 0;
}


person::person(int id)
{
    cout << "person(int)" << endl;

    this->id = id;
}


person::person(int id, const char* name, float sight)
{
    cout << "person(int, const char*, float)" << endl;

    this->id = id;
    strcpy(this->name, name);
    this->sight = sight;
}


person::~person()
{
    cout << id << "要死了！\n" << endl;
}


int person::getID(void)
{
    return id;
}


void person::setSight(float sight)
{
    this->sight = sight;
}


float person::getSight(void)
{
    return sight;
}    


void person::speak(void)
{
    cout << "I can speak!" << endl;
}


void person::speak(const char* text)
{
    cout << text << endl;
}


void person::study(void)
{
    cout << "I can study!" << endl;
}
