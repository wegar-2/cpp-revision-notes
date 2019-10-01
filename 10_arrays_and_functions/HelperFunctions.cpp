#include "HelperFunctions.hpp"
#include <iostream>

using namespace std;

void PrintDoubleArray(double* ArrayIn, unsigned int ArrayLen) {
    cout << "Printing array of doubles: " << endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        cout << "\t\t" << "array[" << k << "] = " << ArrayIn[k] << endl;
        cout << "\t\t" << "*array[" << k << "] = " << *(ArrayIn+k) << endl;
    }
    cout << "Finished printing an array of doubles. " << endl;
}



void PrintArrayOfPointersToDouble(double** ArrayIn, unsigned int ArrayLen) {
    cout << "Printing array of pointers to double: " << endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        cout << "\t\t" << k << "-th element: " << endl;
        cout << "\t\t\tvalue: " << *ArrayIn[k] << endl;
        cout << "\t\t\taddress: " << ArrayIn[k] << endl;
    }
    cout << "Done printing array of pointers to double. " << endl;
}



void PrintHeapArray(double* pHeapArray, unsigned int ArrayLen) {
    cout << "Printing heap array: " << endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        cout << pHeapArray[k] << endl;
    }
    cout << "Done printing heap array. " << endl;
}
