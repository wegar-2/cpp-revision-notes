#include <iostream>

using namespace std;

int main()
{
    // 1. simple pointer
    int *pX;
    pX = new int(100);
    cout << "pX: " << pX << endl;
    cout << "*pX: " << *pX << endl;

    // 2. more on pointer
    double *pY;
    double y = 123.33;
    cout << "y: " << y << endl;
    pY = &y;
    *pY = 100.001;
    cout << "*pY: " << *pY << endl;

    // 3. pointer to a pointer
    double x = 123.325;
    cout << "x: " << x << endl;
    cout << "&x: " << &x << endl;

    double *myPointer;
    myPointer = &x;
    cout << "*myPointer: " << *myPointer << endl;
    cout << "myPointer: " << myPointer << endl;
    cout << "&myPointer: " << &myPointer << endl;

    double **pointerToPointer;
    pointerToPointer = &myPointer;
    cout << "*pointerToPointer: " << *pointerToPointer << endl;
    cout << "pointerToPointer: " << pointerToPointer << endl;
    cout << "&pointerToPointer: " << &pointerToPointer << endl;
    cout << "**pointerToPointer: " << **pointerToPointer << endl;


    return 0;
}
