#include <bits/stdc++.h>
using namespace std;

int duplicate()
{
    vector<int> v = {1, 8, 6, 7, 2, 3, 9, 40, 6};
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == v[i + 1])
        {
            return v[i];
        }
    }
    return -1;
}

int main()
{
    cout << duplicate();
}