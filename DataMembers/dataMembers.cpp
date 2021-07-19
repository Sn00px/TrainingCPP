#include <iostream>
#include "dataMembers.h"

using namespace std;


int main() {
        Cat jim;
        jim.makeHappy();
        jim.speak();

        Cat bob;
        bob.makeSad();
        bob.speak();

        return 0;
}
void Cat::makeHappy() {
        happy = true;
}

void Cat::makeSad() {
        happy = false;
}

void Cat::speak() {
        if(happy) {
                cout << "Meouw!" << endl;
        } else {
                std::cout << "SSSS" << '\n';
        }
}
