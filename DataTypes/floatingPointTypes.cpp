#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        float fValue = 123.456789;

        cout << sizeof(float) << endl;
        //fixed value printed, where the fixed value includes in iomainp.h
        cout << setprecision(20) << fixed << fValue << endl;

        double dValue = 123.456789;
        cout << setprecision(20) << fixed << dValue << endl;

        long double lValue = 123.45678987654;
        cout << setprecision(20) << fixed << lValue << endl;

        cout << "Size of long double: " << sizeof(long double) << endl;
        cout << "Size of double: " << sizeof(double) << endl;

        return 0;
}
