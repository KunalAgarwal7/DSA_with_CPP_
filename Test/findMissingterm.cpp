#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v = {0, 1, 3, 4};

    int sum = 0;
    int arrs = 0;

    for (int i = 1; i <= v.size(); ++i)
    {
        sum += i;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        arrs += v[i];
    }

    cout << sum - arrs;
}