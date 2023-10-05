#include<iostream>

using namespace std;
long pow(long x,long y = 2);

int main()
{

    cout << pow(3) << endl;
    cout << pow(4,2) << endl;
    cout << pow(2,3) << endl;
    return 0;
}

long pow(long x,long y)
{
    long z = 0;
    z = x + y;

    return z;

}
