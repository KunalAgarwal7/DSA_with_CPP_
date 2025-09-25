#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {84, 5, 4, 2, 8, 1, 3, 41, 5};

    sort(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    
    reverse(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }
}