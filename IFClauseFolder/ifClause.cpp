#include <iostream>

using namespace std;

int main()
{
        string password = "hello";

        cout << "Enter your pasword >" << flush;

        string input;
        cin >> input;

        if(input == password)
        {
                cout << "Password accepted." << endl;
        }

        if(input != password)
        {
                cout << "Access denied." << endl;
        }

        return 0;
}
