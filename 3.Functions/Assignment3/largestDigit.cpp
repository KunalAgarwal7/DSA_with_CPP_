#include <iostream>
using namespace std;
void largestDigit(int &n)
{
    int ans = n % 10;
    int val ;

    while (n > 0)
    {
        val = n % 10;
        if (val > ans)
        {
            ans = val;
        }
        n /= 10;
    }
    cout << ans;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    largestDigit(n);

    return 0;
}