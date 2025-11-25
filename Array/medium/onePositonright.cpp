#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 6, 4, 1, 9};
    int temp = v[v.size() - 1];

    for (int i = v.size() - 2; i >= 0; --i)
    {
        v[i + 1] = v[i];
    }
    v[0] = temp;

    for (auto x : v)
    {
        cout << x << " ";
    }
}