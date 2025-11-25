#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &v)
{
    vector<int> v1;
    for (auto x : v)
    {
        bool b = false;
        for (auto y : v1)
        {
            if (x == y)
            {
                b = true;
            }
        }
        if (b == false)
        {
            v1.push_back(x);
        }
    }
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1 = {4, 5, 9, 4, 9, 2, 2, 7};
    vector<int> v2 = {1, 1, 1, 1};
    vector<int> v3 = {10, 20, 30, 40};
    vector<int> v4 = {5, 3, 5, 2, 2, 3, 7};

    removeDuplicate(v1);
    removeDuplicate(v2);
    removeDuplicate(v3);
    removeDuplicate(v4);
}