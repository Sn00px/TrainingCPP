#include <iostream>
using namespace std;

class Frog {
private:
string name;

public:
int age;
Frog(string name) : name(name) {
};

string getName() {
        return name;
};

};

int main() {
        Frog frog("Freddy");

        cout << "The name of the frog is: " << frog.getName() << endl;
        frog.age = 15;

        cout << "Age of the frog is: " << frog.age << endl;
        return 0;
}
