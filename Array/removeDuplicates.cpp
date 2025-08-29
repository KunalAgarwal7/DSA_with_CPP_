#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int ans[size];

    int j = 0;
    int i = 0;
    while (i < size)
    {
        if (arr[i] != arr[i + 1])
        {
            ans[j] = arr[i];
            j++;
        }
        i++;
    }

    for (int i = 0; i < j; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl
         << "Size: " << j + 1;
}