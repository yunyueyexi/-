#include <iostream>

using namespace std;


inline int max(int a, int b)
{
    if(a > b) return a;
    
    return b;
}


int main()
{
    std::cout << max(3, 4) << std::endl;

    return 0;
}