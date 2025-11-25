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

    cout << endl;
    int l;
    cout << "Enter element: ";
    cin >> l;

    bool b = false;
    for (auto x : arr)
    {
        if (x == l)
        {
            b = true;
            break;
        }
    }

    if (b == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}