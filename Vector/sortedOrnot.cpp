#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v = {3, 9, 13, 11};

    int j = 1;
    int i = 0;

    while (j < v.size())
    {
        if (v[i] > v[j])
        {
            cout << "Not sorted.";
            return 0;
        }
        i++;
        j++;
    }

    cout << "Sorted.";
}