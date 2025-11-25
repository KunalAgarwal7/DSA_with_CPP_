#include <bits/stdc++.h>
using namespace std;

int f(int a, int b)
{
    if (b == 0)
        return 1;

    return a * f(a, b - 1);
}

int main()
{
    cout << f(2, 5) << endl;
    cout << f(3, 3) << endl;
    cout << f(5, 0) << endl;
}
