#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v = {{1, -1, 3}, {6, 4, 0}, {9, 8, -11}};

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (v[i][j] == 0)
                cout << i << "," << j;
        }
    }
}