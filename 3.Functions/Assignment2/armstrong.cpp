#include <iostream>
using namespace std;
int Armstrong(int &n)
{
    int a = n;
    int ans = 0, val, cube;
    while (a != 0)
    {
        val = a % 10;
        cube = 1;
        for (int i = 1; i <= 3; ++i)
        {
            cube *= val;
        }

        ans += cube;
        a = a / 10;
    }
    if (ans == n)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not a armstrong";
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Armstrong(n);
}