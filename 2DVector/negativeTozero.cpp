#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v = {{-1, 3, 2}, {6, 5, -3}, {2, 8, -7}, {6, -4, 9}};

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (v[i][j] < 0)
                v[i][j] = 0;
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}