#include "AggregationA.h"

AggregationA::AggregationA(ClassB &value) : refB(value) {}

std::string AggregationA::getBinfo() {
    return refB.getInfo();
}

void AggregationA::setBinfo(std::string value) {
    refB.setInfo(value);
}
