#ifndef SIMPLECLASS_HPP
#define SIMPLECLASS_HPP

#include "Adder.hpp"
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

class SimpleClass {
public:
    /* constructors and destructor */
    SimpleClass();
    SimpleClass(const SimpleClass& rhs);
    ~SimpleClass();

    /* various functions */
    double GetValue() const;
    void SetValue(double value);
    void PrintValue() const;

    /* operators */
    SimpleClass& operator=(const SimpleClass& rhs);

    static unsigned int instancesCounter;

private:
    /* basic members */
    double* pValue;
    unsigned int* objectOrdinalNumber;
    Adder* memberObject;


};

#endif // SIMPLECLASS_HPP
