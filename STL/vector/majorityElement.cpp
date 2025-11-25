#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 5, 4};
    sort(v.begin(), v.end());
    int size = v.size();
    cout << v[size / 2];
}