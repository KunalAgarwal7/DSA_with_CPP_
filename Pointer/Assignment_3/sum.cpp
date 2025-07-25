#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int *ptr = &n;
    int ans = 0;
    while (n > 0)
    {
        int value = *ptr % 10;
        ans += value;
        *ptr /= 10;
    }

    cout << "Sum:" << ans;
}