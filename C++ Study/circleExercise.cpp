#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    const double pi = 3.14;
    double raduis = 0;

    cout << "Enter the value of radius: ";
    cin >> raduis;

    double area = pi * pow(raduis, 2);

    cout << "The area of the circle with a radius of " << raduis << " is " << area;

    return 0;
}