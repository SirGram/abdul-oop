#include <iostream>
using namespace std;

int main()
{
    float b;
    float h;
    float r= 0.0f;
    cout << "Calculate area of triangle ";
    cout << "Base length: ";
    cin >> b;
    cout << "Height length: ";
    cin >> h;
    r = b * h / 2;
    cout << "Area is " << r;
    return 0;
}