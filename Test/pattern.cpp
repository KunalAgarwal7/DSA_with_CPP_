#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    for (int i = 0; i < 2; ++i)
    {
        for (int k = 1; k < 2 - i; ++k)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; ++j)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    for (int i = 1; i <= 2; ++i)
    {
        for (int k = 1; k <= i - 1; ++k)
        {
            cout << " ";
        }
        for (int j = 5 - 2 * i; j > 0; --j)
        {
            cout << "*";
        }

        cout << endl;
    }
}
