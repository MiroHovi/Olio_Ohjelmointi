#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    std::string details; // Combined "model brand", e.g., "Corolla Toyota"

public:
    Car();
    Car(const std::string& details);

    void setEngine();
    void setWheels();

    std::string getDetails() const;
    void setDetails(const std::string& details);

    void printDetails() const;
};

#endif

