#include <bits/stdc++.h>
using namespace std;
int climb(int n)
{
    if (n <= 1)
        return 1;

    return climb(n - 1) + climb(n - 2);
}

int main()
{
    cout << climb(3) << endl;
    cout << climb(4) << endl;
    cout << climb(2) << endl;
    cout << climb(5) << endl;
}