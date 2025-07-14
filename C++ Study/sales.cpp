#include <iostream>

using namespace std;

int main()
{
    double sales = 95000.00;
    double stateTax = 0.04;
    double countyTax = 0.02;

    cout << "Total Sales is $" << sales << endl;
    cout << "State Tax from Sales of $" << sales << " is $" << stateTax * sales << endl;
    cout << "County Tax from Sales of $" << sales << " is $" << countyTax * sales << endl;
    cout << endl;
    cout << "Sales minus the taxes is " << sales - ((stateTax * sales) + (countyTax * sales));
    return 0;
}