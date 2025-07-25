#include <iostream>
using namespace std;
int Pyramid(int &n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = n; j > 0; --j)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 2; j <= n; ++j)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Pyramid(n);
}