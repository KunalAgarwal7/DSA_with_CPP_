#include <bits/stdc++.h>
using namespace std;

string ans(string s)
{
    int start = 0, end = 0, len = INT_MIN;

    while (end < s.size())
    {
        while (s[end] != ' ')
        {
            end++;
        }
        len = max(len, end - start);
        start = end + 1;
        end++;
    }
}
int main()
{
}