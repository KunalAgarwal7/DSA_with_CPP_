#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 3; j >= 1; --j)
        {
            if (i % 2 == 0)
            {
                cout << j;
            }
            else
            {
                cout << "-*-";
                break;
            }
        }
        cout << endl;
    }
}