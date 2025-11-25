#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}