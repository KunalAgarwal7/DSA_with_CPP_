#include <bits/stdc++.h>
using namespace std;
int moves(int n)
{
    if (n == 0)
        return 1;
    return 2 * moves(n - 1);
}

int main()
{
    cout << moves(5) - 1;
    return 0;
}
