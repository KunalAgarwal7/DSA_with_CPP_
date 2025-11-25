#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for (int i = 0; i < v.size(); ++i)
    {
        int f = 0, l = v[i].size() - 1;
        while (f <= l)
        {
            swap(v[i][f], v[i][l]);
            f++;
            l--;
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