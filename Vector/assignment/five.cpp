#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v, r;
    v = {5, 7, 8, 6, 1, 2, 0, 40};

    int ans = 1;
    for (int i = 0; i < v.size(); ++i)
    {
        if (ans == v[i])
        {
            cout << i;
            return 0;
        }
    }

    cout << "Not found.";
}