#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v = {3, 9, 13, 11};

    int l = -1;
    int sl = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (l < v[i])
        {
            sl = l;
            l = v[i];
        }
        else if (v[i] < l && sl < v[i])
        {
            sl = v[i];
        }
    }
    cout << sl;
}