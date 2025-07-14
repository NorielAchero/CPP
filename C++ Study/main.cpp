#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;

    c = a;
    a = b;
    b = c;

    cout << "The value of a is " << a;
    cout << "The value of b is " << b;
    return 0;
}