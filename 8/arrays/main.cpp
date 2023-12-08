#include <iostream>
using namespace std;

int main(){
    int A[10] ={1,4,5,5,7,1,5,2,1,5};
    int sum = 0;
    for(int i: A){
        sum+= i;
    }
    cout << sum << endl;
    return 0;
}