#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    short a = (rand() % (6 - 1 + 1)) + 1;
    short b = (rand() % (6 - 1 + 1)) + 1;
    cout << a << ", " << b;

    return 0;
}