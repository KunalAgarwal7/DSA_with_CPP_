#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 7, 8, 9, 6, 3, 4};

    int even = 0, odd = 0;
    for (auto x : v)
    {
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
}