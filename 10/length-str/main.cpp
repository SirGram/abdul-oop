#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "Welc0o  me";
    int counter = 0;

    for (int i=0; s[i] != 0; i++){
        counter++;
    }
    cout << counter<< endl;

    return 0;

}