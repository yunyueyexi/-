#include <iostream>
#include "md5.h"
#include <string>

int main()
{
    std::string data;
    char reasult[33];

    std::cin >> data;

    md5_data(data.c_str(), data.size(), reasult);

    std::cout << reasult << std::endl;
}