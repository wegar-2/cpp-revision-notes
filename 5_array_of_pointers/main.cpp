#include <iostream>

using namespace std;

int main()
{
    int x = 132;
    int *pY = new int(23);
    int z = 3322;

    int *arrayOfPointers[3];
    arrayOfPointers[0] = &x;
    arrayOfPointers[1] = pY;
    arrayOfPointers[2] = &z;

    cout << "arrayOfPointers[0]: " << arrayOfPointers[0] << endl;
    cout << "*arrayOfPointers[0]: " << *arrayOfPointers[0] << endl;

    cout << "arrayOfPointers[1]: " << arrayOfPointers[1] << endl;
    cout << "*arrayOfPointers[1]: " << *arrayOfPointers[1] << endl;

    cout << "arrayOfPointers[2]: " << arrayOfPointers[2] << endl;
    cout << "*arrayOfPointers[2]: " << *arrayOfPointers[2] << endl;


    return 0;
}
