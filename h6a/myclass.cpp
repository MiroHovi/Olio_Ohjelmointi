#include "myclass.h"

// Constructor implementation
MyClass::MyClass(QObject *parent) : QObject(parent) {
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
}

void MyClass::raiseMySignal()
{
    emit mySignal(); // Method to emit the signal
}

void MyClass::mySlot()  // Slot implementation
{
    qDebug() << "mySlot:ia kutsuttiin";  // prints mesage to console
}
