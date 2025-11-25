#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; ++i)
    {
        int a;
        cout << "Enter " << i << " element: ";
        cin >> a;
        v.push_back(a);
    }

    for (int i = 1; i <= 5; ++i)
    {
        cout << v[i - 1] << " ";
    }
}