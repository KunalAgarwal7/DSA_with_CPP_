#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int s = 5;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> s;
        v.push_back(s);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}