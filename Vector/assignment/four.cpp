#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v, r;
    v = {5, 7, 8, 6, 1, 2, 0, 40};
    for (int i = v.size() - 1; i >= 0; --i)
    {
        int k = v[i];
        r.push_back(k);
    }

    for (int i = 0; i < r.size(); ++i)
    {
        cout << r[i] << " ";
    }
}