#include <bits/stdc++.h>
using namespace std;
void printName(int n)
{
    string s = "Kunal Agarwal";
    if (n == 0)
        return;
    cout << s << endl;
    printName(n - 1);
}
int main()
{
    printName(101);
}
