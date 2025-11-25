#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int l = -1;
    for (auto x : arr)
    {
        if (l < x)
        {
            l = x;
        }
    }

    cout << l;
}