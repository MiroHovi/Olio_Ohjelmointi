#include <iostream>
#include <string>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

using namespace std;

int main() {
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    // Pointterin luonti
    int *myPointer = &a;

    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    myPointer = &b;

    // Pointterin tirdot
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    int &refA = a;

    // Referenssin sisältö jne
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    cout << "*******************************" << endl;

    //Assosiaation esim
    cout << "Assosiaatio esimerkki:" << endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;
    cout << endl;

    cout << "*******************************" << endl;

    //Aggregaatio esim
    cout << "Aggregaatio esimerkki:" << endl;
    ClassB &refB = objB; // Viite objB:hen
    AggregationA objAggr(refB);

    objAggr.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;
    cout << endl;

    return 0;
}

