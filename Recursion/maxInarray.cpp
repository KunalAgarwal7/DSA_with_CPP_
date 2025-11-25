#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &v, int i, int maxi)
{
    if (i == v.size())
        return maxi;

    return f(v, i + 1, maxi = max(maxi, v[i]));
}

int main()
{
    vector<int> v1 = {1, 4, 2};
    vector<int> v2 = {9, 5};
    vector<int> v3 = {3, 3, 3};
    cout << f(v1, 0, INT_MIN) << endl;
    cout << f(v2, 0, INT_MIN) << endl;
    cout << f(v3, 0, INT_MIN) << endl;
}
