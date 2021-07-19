#include <iostream>
#include "Person.h"

using namespace std;

int main() {

        Person person;

        person.setName("Georgina");

        cout << person.toString() << endl;

        cout << "The persons name is: " << person.getName() << endl;
        return 0;
}

#include "Person.cpp"
