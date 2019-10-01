#include <iostream>
#include "Adder.hpp"

unsigned int Adder::instancesCounter = 0;



/* ========================================================================== */
/* =============     CLASS CONSTRUCTORS AND DESTRUCTOR     ================== */
/* ========================================================================== */


Adder::Adder() {
    pFirstValue = new double(2.0);
    pSecondValue = new double(4.0);
    ++Adder::instancesCounter;
}

Adder::Adder(double value) {
    pFirstValue = new double(value);
    pSecondValue = new double(value);
    ++Adder::instancesCounter;
}

Adder::Adder(double x, double y) {
    pFirstValue = new double(x);
    pSecondValue = new double(y);
    ++Adder::instancesCounter;
}

Adder::~Adder() {
    delete pFirstValue;
    delete pSecondValue;
    --Adder::instancesCounter;
}

Adder::Adder(const Adder& rhs) {
    pFirstValue = new double(rhs.GetFirstValue());
    pSecondValue = new double(rhs.GetSecondValue());
    ++Adder::instancesCounter;
}



/* ========================================================================== */
/* =============            CLASS OPERATORS             ===================== */
/* ========================================================================== */

Adder& Adder::operator=(const Adder& rhs) {
    std::cout << "Inside class 'Adder' assignment operator..." << std::endl;
    if (this == &rhs) {
        std::cout << "Self-assignment detected..." << std::endl;
        return *this;
    } else {
        *pFirstValue = rhs.GetFirstValue();
        *pSecondValue = rhs.GetSecondValue();
        return *this;
    }
}

const Adder& Adder::operator++() {
    ++(*pFirstValue);
    ++(*pSecondValue);
    return *this;
}

const Adder Adder::operator++(int flag) {
    Adder temp = Adder(*this);
    ++(*pFirstValue);
    ++(*pSecondValue);
    return temp;
}

const Adder& Adder::operator--() {
    --(*pFirstValue);
    --(*pSecondValue);
    return *this;
}

const Adder Adder::operator--(int flag) {
    Adder temp = Adder(*this);
    --(*pFirstValue);
    --(*pSecondValue);
    return temp;
}

Adder Adder::operator+(const Adder& rhs) {
    return Adder(this->GetFirstValue() + rhs.GetFirstValue(),
                 this->GetSecondValue() + rhs.GetSecondValue());
}

Adder Adder::operator-(const Adder& rhs) {
    return Adder(*(this->pFirstValue) - rhs.GetFirstValue(),
                 *(this->pSecondValue) - rhs.GetSecondValue());
}



/* ========================================================================== */
/* =============         VARIOUS CLASS FUNCTIONS        ===================== */
/* ========================================================================== */

double Adder::GetFirstValue() const {
    return *pFirstValue;
}

double Adder::GetSecondValue() const {
    return *pSecondValue;
}

void Adder::SetFirstValue(double value) {
    *pFirstValue = value;
}

void Adder::SetSecondValue(double value) {
    *pSecondValue = value;
}

double Adder::GetSum() const {
    return (*(this->pFirstValue) + *(this->pSecondValue));
}

double Adder::GetAverage() const {
    return 0.5*(this->GetFirstValue() + this->GetSecondValue());
}

void Adder::PrintObject() const {
    std::cout << "first value: " << *pFirstValue << std::endl;
    std::cout << "second value: " << *pSecondValue << std::endl;
}

unsigned int Adder::GetInstancesNumber() const {
    return Adder::instancesCounter;
}
