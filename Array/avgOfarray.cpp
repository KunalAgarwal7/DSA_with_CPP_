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

    float avg = 0;
    for (int i = 1; i <= s; ++i)
    {
        avg += arr[i - 1];
    }

    cout << avg / s;
}