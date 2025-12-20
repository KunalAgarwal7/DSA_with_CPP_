#include <bits/stdc++.h>
using namespace std;
int candidate(vector<int> &nums)
{
    int element = -1;
    int cnt = 0;

    for (auto x : nums)
    {
        if (cnt == 0)
        {
            element = x;
            cnt = 1;
        }
        else if (x == element)
            cnt++;
        else
            cnt--;
    }

    cnt = 0;

    for (auto x : nums)
    {
        if (x == element)
            cnt++;
    }
    if (cnt > nums.size() / 2)
        return element;
    else
        return -1;
}
int main()
{
    vector<int> v1 = {9, 9, 9, 1, 2};
    cout << candidate(v1) << endl;

    