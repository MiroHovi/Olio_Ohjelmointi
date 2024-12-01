#include <iostream>
#include "Car.h"

int main() {
    // Create a car with combined model and brand details
    Car myCar("Corolla Toyota");

    // Set engine and wheels
    myCar.setEngine();
    myCar.setWheels();

    // Print car details
    myCar.printDetails();

    return 0;
}
