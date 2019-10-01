#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include "HelperFunctions.hpp"

using namespace std;

int main()
{
    // 0. create an RNG
    boost::random::mt19937 mtRngEngine = boost::random::mt19937(123);
    boost::random::normal_distribution<> ndRngDistribution =
        boost::random::normal_distribution<>(0.0, 1.0);
    boost::random::variate_generator<
        boost::random::mt19937,
        boost::random::normal_distribution<>> gaussianRng =
            boost::random::variate_generator<
                boost::random::mt19937,
                boost::random::normal_distribution<>>(mtRngEngine,
                                                      ndRngDistribution);
    // 1. stack arrays
    cout << "==========     STACK ARRAY     ==========";
    double StackArray[10];
    for (int k = 0; k < 10; ++k) {
        StackArray[k] = gaussianRng();
    }
    PrintDoubleArray(StackArray, 10);

    // 2. heap array
    cout << "==========     HEAP ARRAY     ==========";
    double* ArrayOfPointers[10];
    for (int k = 0; k < 10; ++k) {
        ArrayOfPointers[k] = new double(gaussianRng());
    }
    PrintArrayOfPointersToDouble(ArrayOfPointers, 10);

    // 3. arrays of pointers
    cout << "==========     ARRAY OF POINTERS    ==========";


    return 0;
}
