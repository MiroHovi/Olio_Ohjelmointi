#include "Animal.h"
#include "Dog.h"

int main() {
    {
        // Create an Animal object
        Animal animal;
        animal.callOut();
    } // Animal object's destructor is called here

    {
        Dog dog;
        dog.callOut(); // Calls the overridden method in the derived class
    }

    return 0;
}
