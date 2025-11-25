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

    int s = arr[0];
    for (auto x : arr)
    {
        if (s > x)
        {
            s = x;
        }
    }

    cout << s;
}