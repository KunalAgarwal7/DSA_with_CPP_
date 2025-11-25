#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abba";

    int i = 0, j = s.size() - 1;
    bool b = true;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            b = false;
            break;
        }
    }

    if (b == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No.";
    }
}