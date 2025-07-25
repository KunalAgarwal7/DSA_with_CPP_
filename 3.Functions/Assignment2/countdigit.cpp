#include <iostream>
using namespace std;
string Count_digit(int &n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout<<count;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Count_digit(n);
}