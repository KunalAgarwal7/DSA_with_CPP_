#include <bits/stdc++.h>
using namespace std;

void ans(vector<int> &v)
{
    sort(v.begin(), v.end());

    int i = 0, j = v.size() - 1;

    while (i < j)
    {
        cout << v[j] << " ";
        j--;
        cout << v[i] << " ";
        i++;
    }

    if (v.size() % 2 != 0)
        cout << v[j];
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v3 = {5, 5, 5};
    vector<int> v4 = {9, 1};

    ans(v1);
    ans(v2);
    ans(v3);
    ans(v4);
}