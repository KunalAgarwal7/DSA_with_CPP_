#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int largest1 = INT_MIN;
    int largest2 = INT_MIN;

    for (auto x : v)
    {
        if (x > largest1)
        {
            largest1 = x;
        }
    }
    
    for (auto x : v)
    {
        if (x > largest2)
        {
            if (x != largest1)
            {
                largest2 = x;
            }
        }
    }
    cout << largest1 * largest2;
}