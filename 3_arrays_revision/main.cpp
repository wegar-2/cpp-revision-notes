#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

using namespace std;

int main()
{
    // 1. ordinary stack arrays
    double array1[10];
    cout << "creating a stack array..." << endl;
    for (int k = 0; k < 10; ++k) {
        array1[k] = k*2;
    }
    cout << "Printing the stack array: " << endl;
    for (int k = 0; k < 10; ++k) {
        cout << array1[k] << endl;
    }
    cout << "array1:" << array1 << endl;
    cout << "*array1:" << *array1 << endl;
    cout << "&array1:" << &array1 << endl << endl << endl;

    // 2. heap object - allocating the memory
    double *pMyDouble;
    pMyDouble = new double(123.22);
    cout << "pMyDouble: " << pMyDouble << endl;
    cout << "*pMyDouble: " << *pMyDouble << endl << endl << endl;


    // 3. array on heap
    // 3.1. allocate the memory on the heap
    double *myDoublesArray = new double[1000];
    // 3.2. prepare the random numbers generator
    boost::random::mt19937 mt_rng = boost::random::mt19937();
    boost::random::normal_distribution<> nd = boost::random::normal_distribution<>(12.2, 11.33);
    boost::random::variate_generator<boost::random::mt19937, boost::random::normal_distribution<>>
        my_rng = boost::random::variate_generator<boost::random::mt19937, boost::random::normal_distribution<>>(mt_rng, nd);
    // 3.3. fill in with random numbers
    cout << "generating the random numbers ..." << endl;
    for (int k = 0; k < 1000; ++k) {
        myDoublesArray[k] = my_rng();
    }
    cout << "displaying the random numbers ..." << endl;
    for (int k = 0; k < 1000; ++k) {
        cout << myDoublesArray[k] << endl;
    }


    // 4. array of pointers
    double *pointersArray[10];
    for (int k = 0; k < 10; ++k) {
        pointersArray[k] = new double(my_rng());
    }


    // 5. return the memory to the heap
    delete[] myDoublesArray;
    for (int k = 0; k < 10; ++k) {
        delete pointersArray[k];
    }

    return 0;
}
