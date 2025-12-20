#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &nums, int k)
{
    int ps = 0, ans = 0, i = 0;

    while (i < k)
    {
        ps += nums[i];
        i++;
    }
    int j = 0;
    while (i <= nums.size())
    {
        ans = max(ps, ans);

        ps -= nums[j];
        j++;
        ps += nums[i];
        i++;
    }

    return ans;
}
int main()
{
    vector<int> v1 = {300, 100, 400, 200, 500, 100};
    int k1 = 2;
    cout << sum(v1, k1) << endl;

    vector<int> v2 = {150, 250, 100};
    int k2 = 3;
    cout << sum(v2, k2);
}