#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v = {{1, 0, -1}, {3, 6, 0}, {8, 9, 4}};
    int count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (v[i][j] == 0)
                count++;
        }
    }
    cout << count;
}