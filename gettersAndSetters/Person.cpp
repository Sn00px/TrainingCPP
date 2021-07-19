//constructor
Person::Person() {
        name = "George";
}

string Person::toString() {
        return "Persons name is: " + name;
}

void Person::setName(string newName) {
        name = newName;
}

string Person::getName() {
        return name;
}
