#include <iostream>
#include "dogs.h"

using namespace std;

int main() {
        Dogs jim;

        jim.speak();
        return 0;
}

void Dogs::speak() {
        if(status == true) {
                cout << "Dog is alive" << endl;
        } else {
                cout << "Dog is dead" << endl;
        }
}

Dogs::Dogs() {
        cout << "Dog created!" << endl;
        status = true;
}

Dogs::~Dogs() {
        cout << "Dog destroyed" << endl;
}
