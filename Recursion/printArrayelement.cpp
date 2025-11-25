#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &v, int i)
{
    if (i == v.size())
    {
        cout << endl;
        return;
    }
    cout << v[i] << " ";

    return f(v, i + 1);
}

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {5};
    vector<int> v3 = {7, 0, 8, 9};
    f(v1, 0);
    f(v2, 0);
    f(v3, 0);
}
