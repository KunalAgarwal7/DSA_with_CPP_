#include <bits/stdc++.h>
using namespace std;
void reverseString(string &s, int l, int r)
{
    if (l >= r)
        return;
    swap(s[l], s[r]);

    return reverseString(s, l + 1, r - 1);
}
int main()
{
    string s = "Kunal Agarwal";
    reverseString(s, 0, s.size() - 1);

    cout << s;
}
