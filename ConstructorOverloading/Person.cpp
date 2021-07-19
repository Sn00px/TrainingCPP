#include <iostream>
#include <sstream>

Person::Person() {
        name = "undefined";
        age = 0;
}

string Person::toString() {
        stringstream ss;

        ss << "Name: ";
        ss << name;
        ss << ": Age: ";
        ss << age;
        return ss.str();
}
