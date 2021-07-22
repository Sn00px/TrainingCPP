#include <iostream>
using namespace std;

class Machine {
private:
  int id;
public:
  Machine(): id(0) { cout << "Creating no-arguments constructor called. " << endl; }
  Machine(int id): id(id) { cout << "Creating parameterized constructor called. " << endl; }
  void info() { cout << "ID: " << id << endl; }
};

class Vehicle : public Machine {
public:
  Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called." << endl; }
  Vehicle() { cout << "Vehicle no-arguments constructor called." << endl; }
};

class Car : public Vehicle {
public:
  Car(): Vehicle(999) { cout << "Car no-arguments constructor called." << endl; }
};

int main() {
  Vehicle vehicle(123);
  vehicle.info();

  Car car;
  car.info();
  return 0;
}
