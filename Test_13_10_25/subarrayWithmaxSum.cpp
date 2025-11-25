#include <bits/stdc++.h>
using namespace std;

void ans(vector<int> &v, int target)
{
    int sum = 0, left = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        sum += v[i];

        while (sum >= target)
        {
            if (sum == target)
            {
                for (int j = left; j <= i; ++j)
                {
                    cout << v[j] << " ";
                }
                cout << endl;
                return;
            }
            sum -= v[left];
            left++;
        }
    }

    cout << "Not found.";
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 4, 20, 3, 10, 5};
    int t1 = 33;
    vector<int> v2 = {1, 2, 3, 7, 5};
    int t2 = 12;
    vector<int> v3 = {1, 2, 3, 4, 5};
    int t3 = 9;
    vector<int> v4 = {1, 2, 3};
    int t4 = 7;

    ans(v1, t1);
    ans(v2, t2);
    ans(v3, t3);
    ans(v4, t4);
}