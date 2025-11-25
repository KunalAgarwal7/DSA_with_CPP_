#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            if (i == 1 || j == 2)
            {
                cout << j;
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}

