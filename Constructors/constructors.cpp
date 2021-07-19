#include <iostream>
#include "constructors.h"

using namespace std;


int main() {
        cout << "Starting program ..." << endl;

        {
                Cat bob;
                bob.speak();
        }

        cout << "Ending program ..." << endl;
        return 0;
}

void Cat::speak() {
        if(happy) {
                cout << "Meouw!" << endl;
        } else {
                std::cout << "SSSS" << '\n';
        }
}

//Contructor defined
Cat::Cat() {
        cout << "Cat created" << endl;

        happy = true;
}

//Destructor defined
Cat::~Cat() {
        cout << "Cat destroyed" << endl;
}
