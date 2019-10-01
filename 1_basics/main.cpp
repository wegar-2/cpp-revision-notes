#include <iostream>
#include <cstdlib>
#include "Point2D.hpp"

using namespace std;

int main()
{
    // 1. warmup
    cout << "Hello world!" << endl;
    for (int k = 0; k < 10; k++) {
        cout << "current number: " << k << endl;
    }

    // 2. pointers
    int* pX = new int(11);
    cout << "*pX: " << *pX << endl;
    cout << "pX: " << pX << endl;

    return 0;
}
