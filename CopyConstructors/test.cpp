#include <iostream>
using namespace std;

class Man {
private:
  string name;
  int age;
public:
  Man(): name("Unknown") , age(0) { cout << "Human created" << endl; };
  Man(const Man& other) : name(other.name) , age(other.age)   { cout << "Human created" << '\n';};
  void makeName(string name) { this->name = name; };
  void getName() {cout << "Name of human is: " << name << endl; };
  void getAge(int age) {this->age = age; cout << "Age of human is: " << age << endl; };
  void speak() const { cout << "I am human! My name is: " << name << " and age: " << age << endl; };
};

int main() {
  Man man1;

  man1.getName();
  man1.getAge(32);
  man1.speak();
  man1.makeName("Dino");
  man1.getName();

  Man man2 = man1;
  man2.getName();
  return 0;
}
