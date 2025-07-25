#include <iostream>
using namespace std;

int Factorial(int &n)
{   int ans=1;
    for (int i = 1; i <= n; ++i)
    {
        ans=ans*i;   
    }
    cout << ans;
}
int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;

   Factorial(n);
}