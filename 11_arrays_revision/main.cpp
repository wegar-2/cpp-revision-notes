#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 1. stack array
    cout << "stack array: " << endl;
    double StackArray[5];
    for (int k = 0; k < 5; ++k) {
        StackArray[k] = (k+2)*k + 32;
        cout << k << ": " << StackArray[k] << endl;
        cout << k << " address: " << &(StackArray[k]) << endl;
    }

    // 2. array of pointers
    cout << "array of pointers: " << endl;
    double* PointersArray[8];
    for (int k = 0; k < 8; ++k) {
        PointersArray[k] = new double(sqrt(1 + static_cast<double>(k)));
        cout << "PointersArray[" << k << "] = " << PointersArray[k] << endl;
        cout << "*PointersArray[" << k << "] = " << *PointersArray[k] << endl;
    }

    // 3. heap array
    cout << "heap array: " << endl;
    double* pHeapArray = new double[10];
    for (int k = 0; k < 10; ++k) {
        pHeapArray[k] = 3*(k+1);
        cout << "pHeapArray[" << k << "] = " << pHeapArray[k] << endl;
        cout << "&pHeapArray[" << k << "] = " << &pHeapArray[k] << endl;
    }

    // 4. releasing the allocated memory
    for (int k = 0; k < 8; ++k) {
        delete PointersArray[k];
    }
    delete[] pHeapArray;

    return 0;
}
