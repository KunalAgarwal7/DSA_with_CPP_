#include <iostream>
using namespace std;
int Sum_of_digit(int &n)
{
    int count = 0;
    int val;
    while (n > 0)
    {   val= n % 10;
        n /= 10;
        count+=val;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int ans=Sum_of_digit(n);
    cout<<ans;
}