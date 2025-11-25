#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &v, int i, int sum)
{
    if (i == v.size())
        return sum;

    return f(v, i + 1, sum += v[i]);
}

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {5};
    vector<int> v3 = {7, 3};
    cout << f(v1, 0, 0) << endl;
    cout << f(v2, 0, 0) << endl;
    cout << f(v3, 0, 0) << endl;
}
