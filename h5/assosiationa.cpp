#include "AssosiationA.h"

// Konstruktori
AssosiationA::AssosiationA(ClassB value) : objectB(value) {
}

// Getteri
string AssosiationA::getBinfo() {
    return objectB.getInfo();
}

// Setteri
void AssosiationA::setBinfo(string value) {
    objectB.setInfo(value);
}

