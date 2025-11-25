#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}
int main()
{
    string s1a = "listen", s1b = "silent";
    string s2a = "hello", s2b = "world";
    string s3a = "Dormitory", s3b = "Dirtyroom";
    string s4a = "keep", s4b = "peek";

    cout << anagram(s1a, s1b) << endl;
    cout << anagram(s2a, s2b) << endl;
    cout << anagram(s3a, s3b) << endl;
    cout << anagram(s4a, s4b) << endl;
}