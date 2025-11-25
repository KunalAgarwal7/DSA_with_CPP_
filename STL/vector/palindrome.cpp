#include <bits/stdc++.h>
using namespace std;

string palindrome()
{
    string s = "malayalam";

    int size = s.size() / 2;

    int i, l = 0;
    int j = s.size() - 1;

    while (l < size)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return "No";
        }

        l++;
    }

    return "Yes";
}

int main()
{
    cout << palindrome();
}