#include <iostream>
#include "Cat.h"

using namespace std;


int main() {

        Cat cat1;

        cat1.speak();

        return 0;
}

void Cat::speak()
{
        cout << "Meouwww!!" << '\n';
}

void Cat::jump()
{
        cout << "Jumping to top of bookcase" << endl;
}
