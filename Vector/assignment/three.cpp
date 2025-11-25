#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1, v2, ans;
    v1 = {5, 4, 8, 7, 50, 4};
    v2 = {7, 4, 4, 47, 0, 2};

    for (int i = 0; i < v1.size(); ++i)
    {
        int k = v1[i];
        ans.push_back(k);
    }
    for (int i = 0; i < v2.size(); ++i)
    {
        int k = v2[i];
        ans.push_back(k);
    }

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
}