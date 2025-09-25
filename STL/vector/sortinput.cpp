#include <bits/stdc++.h>
using namespace std;

void reverseVector(vector<int> &v)
{
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}

void sortVector(vector<int> &v)
{
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<int> v = {5, 8, 7, 4, 2, 3, 1, 5, 8, 7, 4, 1};

    int n;
    cout << "Enter a value: ";
    cin >> n;

    if (n >= 0)
    {
        reverseVector(v);
    }
    else
    {
        sortVector(v);
    }
}