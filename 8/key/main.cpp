#include <iostream>
using namespace std;

int main(){
    int A[10] ={1,4,5,5,7,1,5,2,1,5};
    int key;
    cout << "key number ";
    cin >> key;
    for(int i=0; i< sizeof(A); i++){
        if (key == A[i]){
            cout << "element " <<i;
            exit(0);}
    }
    
    cout << "element not found" ;
    return 0;
}