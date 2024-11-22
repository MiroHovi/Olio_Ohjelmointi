#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog(); // Constructor
    ~Dog() override; // Overridden destructor
    void callOut() const override; // Overridden method
};

#endif // DOG_H
