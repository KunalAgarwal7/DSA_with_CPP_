#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 8, 7, 5};

    v.push_back(19);

    for (auto x : v)
    {
        cout << x << " ";
    }
}