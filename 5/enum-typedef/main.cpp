#include <iostream>
using namespace std;

enum day {monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday};

typedef int marks;

int main(){
    marks m1,m2;
    m1= 10;
    day d;
    d= wednesday;
    cout << d <<" "<< m1<< endl;
}