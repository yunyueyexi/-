#include<iostream>

int divide(int a,int b);
int calc(void);

class my_exception
{
private:
    int err_code;
    std::string err_msg;
public:
    my_exception(int err_code,std::string err_msg);
    int get_err_code();
    int get_err_code() const;
    std::string get_err_msg() const;
};


my_exception::my_exception(int err_code,std::string err_msg)
{

}

int my_exception::get_err_code()
{

}

 int my_exception::get_err_code() const
 {

 }

 std::string my_exception::get_err_msg() const
 {

 }
int main()
{
    int m,n,r;

    r = calc();
    std::cout << r << "test3" << std::endl;

    return 0;
}

int calc(void)
{
    int r = 0;
    int m,n;
    std:: cout << "请输入";
    std::cin >>m >> n; 
    try
    {
        r = divide(m,n);
    }
    catch(const my_exception& e)
    {
        if(e.get_err_code() == 1)
        {
            //根据错误码进行统一处理
        }
       std::cout << e.get_err_msg() << std::endl;
    }
    catch(...)
    {
        std::cout << "其他情况" << std::endl;
    }
    
}

int divide(int a,int b)
{
    try
    {
        if(b == 0)   throw my_exception;    //异常处理关键字，抛出
        std::cout << "test1" << std::endl;
    }

    catch(double)
    {

    }

    catch(char)
    {
        std::cout << "输入不能为0" << std::endl;
        return 1;
    }
    return (a + 3) / b;
}