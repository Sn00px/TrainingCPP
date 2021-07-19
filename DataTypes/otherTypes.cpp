#include <iostream>

using namespace std;

int main()
{
        // Boolean type can set true or false
        bool bValue = true;
        cout << bValue << endl;

        char cValue = 0;
        cout << cValue << endl;
        cout << (int)cValue << endl;

        cout << "Size of char: " << sizeof(char) << endl;

        wchar_t wValue = 'i';
        cout << wValue << endl;

        cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
        return 0;
}
