#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &v, int l, int r, int t)
{
    if (l > r)
        return -1;

    int m = l + (r - l) / 2;

    if (v[m] == t)
        return m;

    else if (v[m] > t)
        return f(v, l, m - 1, t);

    else
        return f(v, m + 1, r, t);
}

int main()
{
    vector<int> v = {1, 3, 5, 7, 9};

    cout << f(v, 0, v.size() - 1, 7) << endl; 
    cout << f(v, 0, v.size() - 1, 4) << endl; 
}
