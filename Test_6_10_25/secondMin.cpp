#include <bits/stdc++.h>
using namespace std;
void secondMinimum(vector<int> v)
{
    int i = 0;
    int temp, smin = INT_MAX, min = INT_MAX;

    while (i < v.size())
    {
        if (min > v[i])
        {
            temp = v[i];
            smin = min;
            min = temp;
        }
        else if (v[i] > min && v[i] < smin)
        {
            smin = v[i];
        }
        i++;
    }
    if (smin == INT_MAX)
    {
        cout << "Not found" << endl;
        return;
    }
    cout << smin << endl;
}
int main()
{
    vector<int> v1 = {5, 3, 1, 3, 2, 1};
    vector<int> v2 = {7, 7, 7, 7};
    vector<int> v3 = {4, 5, 6, 2, 8};
    vector<int> v4 = {1, 2};
    secondMinimum(v1);
    secondMinimum(v2);
    secondMinimum(v3);
    secondMinimum(v4);
}