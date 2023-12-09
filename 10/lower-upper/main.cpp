#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "WElCoME";
    // uppercase -> lowercase  -> +22
    string::iterator it;

    for(int i=0; s[i]!=0;i++){
        if( s[i]>96 && s[i] <123){

            s[i] -= 32;
        }
    }
    cout << s<< endl;

    return 0;

}