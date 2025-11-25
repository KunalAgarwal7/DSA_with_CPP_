#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 3};

    vector<int> ans;

    for (auto x : v)
    {
        bool flag = false;
        for (auto y : ans)
        {
            if (x == y)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            ans.push_back(x);
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}