#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 7, 8, 9, 6, 3, 4};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}