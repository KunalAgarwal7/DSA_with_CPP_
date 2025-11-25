#include <iostream>
using namespace std;

int main()
{
    int n = 9;

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= n; col++)
        {

            if (row == col || row + col == 6 || row + col == 10 || (row == 2 and col == 6))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
