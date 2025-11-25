#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {3, 6, 4, 1, 9};
    vector<int> v2 = {4, 5, 5, 3, 6, 4, 1, 9};
    vector<int> v3;
    for (auto x : v1)
    {
        v3.push_back(x);
    }
    for (auto x : v2)
    {
        v3.push_back(x);
    }
    for (auto x : v3)
    {
        cout << x << " ";
    }
}