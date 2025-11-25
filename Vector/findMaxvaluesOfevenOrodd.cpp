#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v = {38, 73, 41, 99, 101, 138, 141};

    int even = 0;
    int odd = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] % 2 == 0)
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
        cout << "Even is more: " << even;
    }
    else
    {
        cout << "Odd is more: " << odd;
    }
}