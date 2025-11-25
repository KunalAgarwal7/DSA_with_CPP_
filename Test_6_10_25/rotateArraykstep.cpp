#include <bits/stdc++.h>
using namespace std;
void rotateArraykStep(vector<int> v, int k)
{
    k = k % v.size();
    vector<int> kk;

    for (int i = v.size() - k; i < v.size(); ++i)
    {
        kk.push_back(v[i]);
    }

    for (int i = 0; i < v.size() - k; ++i)
    {
        kk.push_back(v[i]);
    }

    for (auto x : kk)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    int k1 = 2;
    vector<int> v2 = {10, 20, 30, 40, 50};
    int k2 = 3;
    vector<int> v3 = {5, 7, 9, 11, 13};
    int k3 = 1;
    vector<int> v4 = {1, 2, 3};
    int k4 = 3;

    rotateArraykStep(v1, k1);
    rotateArraykStep(v2, k2);
    rotateArraykStep(v3, k3);
    rotateArraykStep(v4, k4);
}