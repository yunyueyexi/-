#include"my_sqlite3.h"
#include<iostream>
#include<sqlite3.h>
#include<string>
#include<stdlib.h>

#define FLAG 0


my_sqlite3::my_sqlite3(void):name("sqlite3.db")
{
    int rc = sqlite3_open("mydata.db", &db);
    if(rc)
    {
        std::cerr << "sqlite3 open error:" << sqlite3_errmsg(db);
    }
#if(FLAG)
    std:: cout << "creat1" << std::endl;
#endif

}


my_sqlite3::my_sqlite3(std::string name):name(name)
{
    std::string str = name + ".db";
    int rc = sqlite3_open(str.c_str(), &db);    //string 类中的一个函数 用于将string转化为const char
    if(rc)
    {
        std::cerr << "sqlite3 open error:" << sqlite3_errmsg(db);
    }
#if(FLAG)
    std:: cout << "creat2" << std::endl;
#endif


}

void my_sqlite3:: show_table(void) 
{
    int row,col;
    char** result;
    std::string command = "SELECT name FROM sqlite_master WHERE type='table'";

    if(sqlite3_get_table(db,command.c_str(),&result,&row,&col,&err_msg))
    {
        std::cerr << "get error" << err_msg << std::endl;
    }
    else 
    {
        if(row == 0)
        {
            std::cout << "未查询到表" << std::endl;
        }
        else
        {
            std::cout << "共查询到" << row << "张表："<< std::endl;
            for(int i = 1;i <= row ;i++)
            {
                for(int j = 0;j < col; j++)
                {
                    std::cout << result[i*col + j] << std::endl;
                }
            }
        }
    }



}



my_sqlite3::~my_sqlite3()
{
    sqlite3_close(db);
#if(FLAG)
    std:: cout << "delete" << std::endl;
#endif
}
