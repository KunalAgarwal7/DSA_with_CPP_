#include <bits/stdc++.h>
using namespace std;
void printValue(int n)
{
    if (n > 5)
        return;
    cout << n << endl;
    printValue(n + 1);
}
int main()
{
    printValue(1);
}
