#include <bits/stdc++.h>
using namespace std;
string removeVowels(string s, int i = 0)
{
    if (i == s.size())
        return "";
    string small = removeVowels(s, i + 1);
    string vowels = "aeiouAEIOU";
    if (vowels.find(s[i]) != string::npos)
        return small;
    return s[i] + small;
}

int main()
{
    string s = "Hello Kunal";
    cout << removeVowels(s, 0);
}