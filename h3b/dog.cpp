#include "Dog.h"

Dog::Dog() {
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

void Dog::callOut() const {
    std::cout << "Koira haukkuu!" << std::endl;
}
