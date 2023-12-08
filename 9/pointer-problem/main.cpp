#include <iostream>
using namespace std;

// Unitialized Ptr, Memory Leak, Dangling Pointer

int main(){

    // Initialized Ptr
    int x = 1;

    int *p = &x;
    int *q = (int *) 0x5638;
    int *r = new int (5);
    int *s = new int (5);

    // Memory no Leak. 

    delete r;
    r = nullptr;
    cout <<r;
    delete[] s;
    s = NULL;
    cout <<s;
}