#include "Car.h"
#include <iostream>

using namespace std;

Car factoryMethodSemiTruck(){
    Car car;
    car.seets = 2;
    car.wheels = 16;
    cout << "The car now a Semi-Truck" << endl;  
    return car;
}

int main() {
    Car semi = factoryMethodSemiTruck();
}