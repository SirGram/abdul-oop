#include <iostream>
#include <string>

using namespace std;


int main(){
    string mail = "javierpenas@gmail.com";
    string user = "";

    for (int i = 0; i < mail.length(); i++)
    {
        if (mail[i]== '@'){
            user=mail.substr(0,i);
        }
    }
    cout << user<<endl;
    return 0;

}