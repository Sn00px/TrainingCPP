#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
        int value = 56756;
        cout << value << endl;

        cout << "Max int value: " << INT_MAX << endl;
        cout << "Min int value: " << INT_MIN << endl;

        long int lValue = 1973981729371;
        cout << "Long int is: " << lValue << endl;
        cout << "Size of int: " << sizeof(int) << endl;
        cout << "Size of long int: " << sizeof(long int) << endl;
        cout << "Size of short int: " << sizeof(short int) << endl;

        unsigned int uValue = 21231331;
        cout << "Unsigned value is: " << uValue << endl;
        cout << "Size of short int: " << sizeof(unsigned int) << endl;



        return 0;
}
