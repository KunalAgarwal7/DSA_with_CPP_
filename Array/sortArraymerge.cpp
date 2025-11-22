#include <iostream>
using namespace std;
int main()
{

    int arr1[4] = {1, 3, 4, 5};
    int arr2[4] = {2, 4, 6, 8};

    int arr3[8];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 8)
    {
        if (arr1[j] <= arr2[k])
        {
            arr3[i] = arr1[j];
            j++;
        }
        else
        {
            arr3[i] = arr2[k];
            k++;
        }
        i++;
    }

    for (int o = 0; o < 8; ++o)
    {
        cout << arr3[o] << " ";
    }
}