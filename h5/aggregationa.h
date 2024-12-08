#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"

class AggregationA {
private:
    ClassB &refB;
public:
    AggregationA(ClassB &value);
    std::string getBinfo();
    void setBinfo(std::string value);
};

#endif
