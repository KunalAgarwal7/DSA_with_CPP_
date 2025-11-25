#include <bits/stdc++.h>
using namespace std;

int f(int num, int rnum)
{
    if (num == 0)
        return rnum;

    rnum = rnum * 10 + (num % 10);
    return f(num / 10, rnum);
}

int main()
{
    cout << f(123, 0) << endl;
    cout << f(450, 0) << endl;
    cout << f(8901, 0) << endl;
}
