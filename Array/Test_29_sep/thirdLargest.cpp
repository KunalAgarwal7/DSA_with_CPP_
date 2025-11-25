#include <bits/stdc++.h>
using namespace std;
int thirdLargest(vector<int> &v)
{
    sort(v.begin(), v.end());
    int size = v.size();
    if (size >= 3)
    {
        if (v[0] == v[2])
        {
            return -1;
        }
        return v[2];
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> v1 = {12, 5, 20, 8, 15};
    vector<int> v2 = {7, 7, 7, 7};
    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> v4 = {10, 9};

    int ans;

    ans = thirdLargest(v1);
    if (ans == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << ans << endl;
    }

    ans = thirdLargest(v2);
    if (ans == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << ans << endl;
    }

    ans = thirdLargest(v3);
    if (ans == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << ans << endl;
    }

    ans = thirdLargest(v4);
    if (ans == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
