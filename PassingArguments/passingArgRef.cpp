#include <iostream>

using namespace std;

void addOne(int& ref)
{
        ref = ref + 1;
}

int main()
{
        int value{ 5 };
        int& b = value;

        cout << "value = " << value << '\n';
        cout << "memory address = " << &value << '\n';
        cout << "memory address = " << &b << '\n';
        addOne(value);
        cout << "value = " << value << '\n';
        return 0;
}
