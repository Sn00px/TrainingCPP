#include <iostream>
using namespace std;

class Person {
private:
string name;

public:

Person() {
        cout << "Person created!" << endl;
}

Person(const Person& other) : name(other.name) {
        cout << "Person created!" << endl;
}

~Person() {
        cout << "Person destroyed!" << endl;
}

void setName(string name) {
        this->name = name;
}

void speak() {
        cout << "My name is: " << name << endl;
};
};

string* getMemory(int nElem) {
        string* tableOfAlp = new string[nElem];
        cout << "Allocating memory" << endl;
        return tableOfAlp;
};

void freeMemory(string* pMem) {
        cout << "Deleting memory" << endl;
        delete [] pMem;
};

int main() {

        int nElem = 26;
        string* table = getMemory(nElem);
        for (int i=0; i<26; i++) {
                char charInit ='a';
                charInit += i;
                string first(1, charInit);
                table[i] = first;

                cout << *(table+i) << endl;
        }

        freeMemory(table);

        return 0;
}
