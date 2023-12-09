#include <iostream>
#include <string>

using namespace std;

int countArray(char letters[], string str){
    int count =0;
    for (int i= 0;str[i]!=0;i++){    
        for (int j=0; letters[j] != 0; j++){
            if(str[i] == letters[j]){
                count++;
            }
            
        }
       
    }
    cout << count<<endl;
    return count;
}

int main(){
    string str = "Welc 0o me";

    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};  
    char consonants[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
  

    countArray(vowels, str);    
    countArray(consonants, str);
    countArray(" ",str);
    return 0;
    


}