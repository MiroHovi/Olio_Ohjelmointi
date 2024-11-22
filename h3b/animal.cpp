#include "Animal.h"

Animal::Animal() {
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::callOut() const {
    std::cout << "Elain aantelee." << std::endl;
}
