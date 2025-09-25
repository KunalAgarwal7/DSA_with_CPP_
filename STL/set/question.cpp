#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, element;
    cout << "Enter vector size: ";
    cin >> size;

    vector<int> v;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> element;
        v.push_back(element);
    }

    set<int> s;
    for (auto x : v)
    {
        s.insert(x);
    }

    for (auto x : s)
    {
        cout << x << " ";
    }
}