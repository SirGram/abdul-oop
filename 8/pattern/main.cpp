#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << 1;
            }
            else
            {

                cout << 0;
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j >= i)
            {
                cout << 1;
            }
            else
            {

                cout << 0;
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j +i >=3)
            {
                cout << 1;
            }
            else
            {

                cout << 0;
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j +i <=3)
            {
                cout << 1;
            }
            else
            {

                cout << 0;
            }
        }
        cout << endl;
    }
}