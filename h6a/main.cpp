#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass myObject;
    myObject.raiseMySignal();   // Call the method to emit the signal

    return a.exec();
}
