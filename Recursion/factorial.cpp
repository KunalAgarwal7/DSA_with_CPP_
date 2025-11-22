#include <bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    long long ans = factorial(5);
    cout << ans;
}
