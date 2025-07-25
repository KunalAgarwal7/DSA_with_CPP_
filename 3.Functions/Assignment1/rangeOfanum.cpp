#include <iostream>
using namespace std;
string Range_of_number(int &n)
{
    if (n > 0 && n < 10)
    {
        cout << "Range= 1 - 10";
    }
    if (n > 10 && n < 100)
    {
        cout << "Range= 10 - 100";
    }
    if (n > 100 && n < 1000)
    {
        cout << "Range= 100 - 1000";
    }
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Range_of_number(n);
}