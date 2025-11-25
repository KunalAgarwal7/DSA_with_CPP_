#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v = {3, 3, -13, -11};

    int l = INT_MIN;
    int sl = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if (l < v[i])
        {
            sl = l;
            l = v[i];
        }
        else if (v[i] < l && sl < v[i])
        {
            sl = v[i];
        }
    }
    if (sl == INT_MIN)
        cout << "Not found in array.";
    else
        cout << sl;
}