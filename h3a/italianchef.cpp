#include "ItalianChef.h"

ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}

std::string ItalianChef::getName() {
    return name;
}
