#include <bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int> &v, int i, int t)
{

    if (i == v.size())
        return -1;
    if (v[i] == t)
        return i;

    return firstOccurence(v, i + 1, t);
}
int main()
{
    vector<int> v1 = {2, 3, 4, 3};
    vector<int> v2 = {5, 5};
    vector<int> v3 = {1, 2, 3};

    cout << firstOccurence(v1, 0, 3) << endl;
    cout << firstOccurence(v2, 0, 5) << endl;
    cout << firstOccurence(v3, 0, 9) << endl;
}