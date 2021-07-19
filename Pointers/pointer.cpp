#include <iostream>

using namespace std;
int main()
{

        int age = 19;
        int *pAge = &age;

        cout << &age << '\n';
        cout << pAge << '\n';
        cout << *pAge << '\n';
        cout << *&age << '\n';
        cout << &pAge << '\n';
}
