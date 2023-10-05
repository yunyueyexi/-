#include <iostream>
#include <string>
#include "md5.h"


int main()
{
    std::string data;
    char result[33];

    std::cin >> data;


    md5_data(data.c_str(), data.size(), result);

    std::cout << result << std::endl;

    return 0;
}