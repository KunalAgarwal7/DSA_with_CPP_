#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &arr, int i)
{
    if (i == arr.size() - 1)
        return true;
    if (arr[i] >= arr[i + 1])
        return false;
    return check(arr, i + 1);
}
int main()
{
    vector<int> v = {1, 2, 6, 4, 5, 6};
    cout << check(v, 0);
}