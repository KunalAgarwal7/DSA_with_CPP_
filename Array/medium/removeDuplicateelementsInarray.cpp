#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 3};
    vector<int> v1;

    int i = 0, k = 0, j = 1;
    while (i < v.size())
    {
        if (v[k] != v[j])
        {
            v1.push_back(v[k]);
        }
        k++;
        j++;
        i++;
    }

    for (int l = 0; l < v1.size(); ++l)
    {
        cout << v1[l] << " ";
    }
}