#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "ama";
    string rev = "";
    int len = str.length();
    rev.resize(len);

    for(int i=0, j=len-1; i<len;i++,j--){
        rev[j]=str[i];
    }
    rev[len]= '\0';
    cout << "rev: "<< rev << endl;

    if (str.compare(rev)== 0) {
        cout<< "Palindrome";
    }else{cout<< "Not a palindrome";}

}