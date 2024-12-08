#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB {
private:
    string info; // Yksityinen muuttuja "info"

public:
    string getInfo();
    void setInfo(string value);
};

#endif

