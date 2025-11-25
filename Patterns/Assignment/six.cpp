#include <iostream>
using namespace std;
int main()
{
    int a = 1;

    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < 4; ++i)
    {
        for (int j = 0; j < 4 - i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}