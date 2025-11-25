#include <bits/stdc++.h>
using namespace std;
int maxDifference(vector<int> v)
{
    int i = 0, j = 1, ans = 0;
    while (j < v.size())
    {
        int small = v[i], large = v[j];
        ans = max(ans, (large - small));
        j++;
    }
    return ans;
}
int main()
{
    vector<int> v1 = {2, 3, 10, 6, 4, 8, 1};
    vector<int> v2 = {7, 9, 5, 6, 3, 2};
    vector<int> v3 = {1, 2, 90, 10, 110};
    vector<int> v4 = {10, 8, 7, 5, 2};

    cout << maxDifference(v1) << endl;
    cout << maxDifference(v2) << endl;
    cout << maxDifference(v3) << endl;
    cout << maxDifference(v4) << endl;
}