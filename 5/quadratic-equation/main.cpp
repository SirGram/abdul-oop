#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, c;
    float r1, r2;
    cout << "Enter a, b, c \n";
    cin >> a >> b >> c;
    r1 = (-b + sqrt(b*b - 4 * a *c)) / (2*a);    
    r2 = (-b - sqrt(b*b - 4 * a*c) )/ (2*a);
    cout << "Roots " << r1 << " " << r2;
    return 0;
}
