#include <bits/stdc++.h>
using namespace std;
int countFrequency(vector<int> &v, int i, int t, int count)
{

    if (i == v.size())
        return count;
    if (v[i] == t)
        count++;

    return countFrequency(v, i + 1, t, count);
}
int main()
{
    vector<int> v1 = {1, 2, 2, 3};
    vector<int> v2 = {5, 5, 5};
    vector<int> v3 = {1, 2, 3};

    cout << countFrequency(v1, 0, 2, 0) << endl;
    cout << countFrequency(v2, 0, 5, 0) << endl;
    cout << countFrequency(v3, 0, 4, 0) << endl;
}