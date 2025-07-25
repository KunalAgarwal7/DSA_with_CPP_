#include <iostream>
using namespace std;
string Is_Palindrome(int &n)
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
    if (ans == n)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Is_Palindrome(n);
}