#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s;

    cout << "Enter array size:";
    cin >> s;

    int arr[s];

    for (int i = 1; i <= s; ++i)
    {
        cout << "Enter 1st array " << i << " element:";
        cin >> arr[i - 1];
    }
    cout << endl;

    sort(arr, arr + s);

    if (s == 1)
    {
        cout << arr[0] << " " << arr[0];
    }
    else
    {
        cout << arr[0] << " " << arr[s - 1];
    }
}