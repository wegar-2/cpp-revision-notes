#include <iostream>

using namespace std;

/*
    HEURISTIC: HOW TO DETERMINE WHAT THE CONST KEYWORD RELATES TO

    # =======
    (a) const int *pX;
    (b) int const *pX;
    (c) const int const *pX;
    # =======


    Look to the right of the 'const' keyword:
        (a) if there is the type of the object there, then the value stored in
            the place pointed at by the pointer cannot be changed
        (b) if there is the pointer name there, then the location pointed at by the
            pointer cannot be changed, so that the pointer is pointing at one location only
            but the value in the memory the pointer is pointing at can be changed
        (c) conjunction of the previous two cases

*/

int main()
{

    int x = 123;
    int *pX = &x;

    int y = 323;
    const int *pY = &y;
    pY = &x; // WORKS ok!
//    *pY =122; // will not compile!



    return 0;
}
