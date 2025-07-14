#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a value of fahrenheit: ";
    double farhenheit;
    cin >> farhenheit;
    double celsius = (farhenheit - 32) * 5 / 9;
    cout << celsius;
    return 0;
}