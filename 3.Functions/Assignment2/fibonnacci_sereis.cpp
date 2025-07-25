#include <iostream>
using namespace std;

int Fibonacci(int &n)
{   int ans=0;
    int val=1;
    cout<<ans<<" "<<val<<" ";
    int temp;
    for (int i = 1; i <= n-2; ++i)
    {   
        temp=ans+val;
        cout << temp << " ";
        ans=val;
        val=temp;
    }
}
int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;

    Fibonacci(n);
}