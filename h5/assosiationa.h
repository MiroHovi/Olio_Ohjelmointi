#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H

#include <string>
#include "ClassB.h"
using namespace std;

class AssosiationA {
private:
    ClassB objectB; // ClassB yksityisenä

public:
    AssosiationA(ClassB value);
    string getBinfo();
    void setBinfo(string value);
};

#endif
