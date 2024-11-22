#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal(); // Constructor
    virtual ~Animal(); // Virtual destructor
    virtual void callOut() const;
};

#endif

