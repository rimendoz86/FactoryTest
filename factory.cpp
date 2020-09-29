#include "Car.h"
#include <iostream>

using namespace std;

Car factoryMethodSemiTruck(){
    Car car;
    car.seets = 2;
    car.wheels = 16;
    cout << "The car is actually a Semi-Truck";
    return car;
}

int main() {
    Car semi = factoryMethodSemiTruck();
    cout << "Hello World";
}