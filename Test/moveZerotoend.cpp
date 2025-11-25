#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {3, 0, 1, 9};

    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (v[i] == 0)
        {
            int temp = v[i + 1];
            v[i + 1] = v[i];
            v[i] = temp;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}
