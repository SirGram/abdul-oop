#include <iostream>
using namespace std;

int main(){
    int A[10] ={1,4,5,5,7,1,5,2,1,5};
    int *p = A;

    int (&p2)[10] = A;
    cout << p2[10];
    
    cout << p << endl;    
    cout << &p << endl;
    cout << ++p<< endl;
    cout << *p << endl;

    int *q = &A[5];
    cout << q- p;

    return 0;
}