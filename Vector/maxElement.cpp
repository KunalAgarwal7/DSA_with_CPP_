#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v = {3, 9, 13, 11};

    int max = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    cout << max;
}