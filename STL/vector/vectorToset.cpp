#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(10);
    int s;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> v[i];
    }

    set<int> se;
    for (int i = v.size() / 2; i < v.size(); ++i)
    {
        se.insert(v[i]);
    }

    cout << endl;
    for (auto x : se)
    {
        cout << x << " ";
    }
}