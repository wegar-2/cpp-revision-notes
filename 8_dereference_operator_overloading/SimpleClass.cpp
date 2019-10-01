#include "SimpleClass.hpp"
#include <iostream>



unsigned int SimpleClass::instancesCounter = 0;

SimpleClass::SimpleClass() {
    pValue = new double(100.0);
    memberObject = new Adder;
    ++SimpleClass::instancesCounter;
    objectOrdinalNumber = new unsigned int(SimpleClass::instancesCounter);
}

SimpleClass::SimpleClass(const SimpleClass& rhs) {
    pValue = new double(rhs.GetValue());
    ++SimpleClass::instancesCounter;
    objectOrdinalNumber = new unsigned int(SimpleClass::instancesCounter);
}

SimpleClass::~SimpleClass() {
    delete pValue;
    delete objectOrdinalNumber;
    --SimpleClass::instancesCounter;
}


double SimpleClass::GetValue() const {
    return *pValue;
}

void SimpleClass::SetValue(double value) {
    *pValue = value;
}

void SimpleClass::PrintValue() const {
    std::cout << "Stored value: " << *pValue << std::endl;
}

