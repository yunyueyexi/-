#pragma once

#include<iostream>
#include<sqlite3.h>
class my_sqlite3
{
private:
    std::string name;
    sqlite3 *db;
    char* err_msg;

public:
    my_sqlite3(void);
    my_sqlite3(std::string name);
    ~my_sqlite3();

    void show_table(void);    

};


