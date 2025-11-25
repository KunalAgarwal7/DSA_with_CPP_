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

    int l = 0;
    for (auto x : arr)
    {
        l += x;
    }

    cout << l;
}