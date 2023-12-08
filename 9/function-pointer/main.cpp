#include <iostream>
using namespace std;

int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}
int min(int n1, int n2)
{
    return n1 > n2 ? n2 : n1;
}
int main()
{
    int (*fp)(int, int);

    fp = max;
    cout << max(5, 10) << endl;
    fp = min;
    cout << min(5, 10) << endl;
}