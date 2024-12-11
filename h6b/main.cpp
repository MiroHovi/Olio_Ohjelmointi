#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv); // Create Qt application


    ExampleClass example;


    example.startToWait();  // Call the startToWait method

    return a.exec();
}
