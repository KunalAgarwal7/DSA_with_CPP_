#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 3; ++i)
    {
        int n = 1;
        for (int j = 1; j <= 3; ++j)
        {
            if (j % 2 != 0)
            {
                n = n + 1;
            }
            else
            {
                n = n - 2;
            }
            cout << n;
        }
        cout << endl;
    }
}