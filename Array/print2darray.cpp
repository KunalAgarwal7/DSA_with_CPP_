#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s1;
    int s2;

    cout << "Enter array rows number:";
    cin >> s1;

    cout << "Enter array columns number:";
    cin >> s2;

    int arr1[s1][s2];

    for (int i = 1; i <= s1; ++i)
    {
        for (int j = 1; j <= s2; ++j)
        {
            cout << "Enter array " << i << " row " << j << " element: ";
            cin >> arr1[i - 1][j - 1];
        }
    }
    cout << endl;
    for (int i = 1; i <= s1; ++i)
    {
        for (int j = 1; j <= s2; ++j)
        {
            cout << arr1[i - 1][j - 1] << " ";
        }
        cout << endl;
    }
}