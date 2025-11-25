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

    int p = 0;
    int n = 0;
    for (auto x : arr)
    {
        if (x >= 0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }

    cout << "Positive: " << p << endl;
    cout << "Negative: " << n;
}