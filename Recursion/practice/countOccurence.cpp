#include <bits/stdc++.h>
using namespace std;
int countOccurenrce(string s, int i, char ch)
{
    if (i == s.size())
        return 0;
    return (s[i] == ch) + countOccurenrce(s, i + 1, ch);
}
int main()
{
    string s = "Hello Kunal";
    char ch = 'l';
    cout << countOccurenrce(s, 0, ch);
}