#include "Car.h"
#include <iostream>

Car::Car() : details("") {}

Car::Car(const std::string& details) : details(details) {}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

std::string Car::getDetails() const {
    return details;
}

void Car::setDetails(const std::string& details) {
    this->details = details;
}

void Car::printDetails() const {
    std::cout << "Auto : " << details << "\n";
    std::cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
              << objEngine.getDisplacement() << " L\n";
    std::cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << "\n";
    std::cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << "\n";
    std::cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << "\n";
    std::cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << "\n";
}
