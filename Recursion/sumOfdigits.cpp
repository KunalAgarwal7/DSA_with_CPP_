#include <bits/stdc++.h>
using namespace std;
int f(int num, int sum)
{
    if (num == 0)
        return sum;
    sum += num % 10;
    return f(num / 10, sum);
}
int main()
{
    cout << f(123, 0) << endl;
    cout << f(907, 0) << endl;
    cout << f(999, 0) << endl;
}