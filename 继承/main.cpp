#include<iostream>
#include"my_sqlite3.h"

int main()
{
    my_sqlite3 m("my_data");

    m.show_table();
}