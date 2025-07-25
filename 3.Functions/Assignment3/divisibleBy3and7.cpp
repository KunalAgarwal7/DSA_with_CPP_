#include <iostream>
using namespace std;

string Divisibleby3and7(int &n)
{
    (n % 7 == 0 && n % 3 == 0) ? cout << "Yes" : cout << "No";
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Divisibleby3and7(n);

    return 0;
}