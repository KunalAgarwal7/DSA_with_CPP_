#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v = {3, 9, 13, 10};

    int s = INT_MAX;
    int ss = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        if (s > v[i] && ss > v[i])
        {
            ss = s;
            s = v[i];
        }
        else if (v[i] < ss && v[i] > s)
        {
            ss = v[i];
        }
    }
    if (s == INT_MAX)
        cout << "Not found in array.";
    else
        cout << ss;
}