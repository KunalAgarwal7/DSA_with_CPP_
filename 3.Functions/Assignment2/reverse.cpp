#include <iostream>
using namespace std;
int Reverse_number(int &n)
{
    int a = n;
    int ans = 0, val;
    while (a != 0)
    {
        val = a % 10;
        ans *= 10;
        ans += val;
        a = a / 10;
    }
    cout << ans;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Reverse_number(n);
}