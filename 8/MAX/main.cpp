#include <iostream>
using namespace std;

int main(){
    int A[10] ={1,4,5,5,7,1,5,2,1,5};
    int min = INT_MAX;
    cout << min << endl;
    for(int i: A){
        if (i < min)
            min = i;
    }
    cout << min << endl;
    return 0;
}