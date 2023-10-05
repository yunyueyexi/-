#include <iostream>
#include "String.h"
#include "person.h"


int main()
{
    String s1 = "abcdef";

    std::cout << s1 << std::endl;
    std::cout << s1.size() << std::endl;

    person p1;

    p1.setSight(4.8);
    std::cout << p1.getSight() << std::endl;

    return 0;
}