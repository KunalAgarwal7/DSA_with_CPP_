#include <bits/stdc++.h>
using namespace std;
void evenOroddOrequal(vector<int> &v)
{
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

    if (even > odd)
    {
        cout << "Even" << endl;
    }
    else if (odd > even)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
}
int main()
{
    vector<int> v1 = {2, 4, 6, 7, 8};
    vector<int> v2 = {1, 3, 5, 8};
    vector<int> v3 = {2, 3, 4, 5};
    vector<int> v4 = {11, 13, 15, 17};

    evenOroddOrequal(v1);
    evenOroddOrequal(v2);
    evenOroddOrequal(v3);
    evenOroddOrequal(v4);
}
