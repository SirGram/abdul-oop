#include <iostream>
using namespace std;


bool isLeapYear(int year){
    if (year % 4 ==0 &&  (year % 100) != 0){
            return true;
        }

        else if (year % 400 == 0){
            return true;
        }
        else  {return false;}
}

int main(){
    int year;
    cout << "Introduce year \n";
    cin >> year;

    if (isLeapYear(year)){
        cout << "Its leap year" << endl;
    }
    else{
        cout << "Its not leap year" << endl;}

    
    

    return 0;
}