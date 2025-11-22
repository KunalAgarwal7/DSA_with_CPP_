#include <bits/stdc++.h>
using namespace std;
int sumOfarray(vector<int> &v, int i)
{
    if (i == v.size())
        return 0;

    return v[i] + sumOfarray(v, i + 1);
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    int ans = sumOfarray(v, 0);
    cout << ans;
}