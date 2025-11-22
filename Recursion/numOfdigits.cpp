#include <bits/stdc++.h>
using namespace std;
int digit(int num)
{
    if (num == 0) return 0;

    return 1 + digit(num / 10);
}
int main()
{
    int ans = digit(1234555);
    cout << ans;
}
