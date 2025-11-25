#include <bits/stdc++.h>
using namespace std;
void subSets(vector<char> &v, int i, vector<char> ans)
{

    if (i == v.size())
    {
        if (ans.size() == 0)
        {
            cout << "{}" << endl;
            return;
        }
        for (auto x : ans)
            cout << x << " ";

        cout << endl;
        return;
    }
    ans.push_back(v[i]);
    subSets(v, i + 1, ans);

    ans.pop_back();
    subSets(v, i + 1, ans);
}
int main()
{
    vector<char> c = {'b', 'a', 'c'};
    subSets(c, 0, {});
}