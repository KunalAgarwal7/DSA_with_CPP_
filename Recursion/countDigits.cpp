#include <bits/stdc++.h>
using namespace std;
int f(int num)
{
    if (num == 0)
        return 0;

    return 1 + f(num / 10);
}
int main()
{
    cout << f(1234) << endl;
    cout << f(9) << endl;
    cout << f(1000) << endl;
}