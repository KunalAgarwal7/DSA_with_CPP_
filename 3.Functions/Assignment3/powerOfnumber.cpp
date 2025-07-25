#include <iostream>
using namespace std;

void powerOfnumber(int &b, int &p)
{
    int ans = 1;
    for (int i = 1; i <= p; ++i)
    {
        ans *= b;
    }
    cout << ans;
}

int main()
{
    int b;
    cout << "Enter a base:";
    cin >> b;

    int p;
    cout << "Enter power:";
    cin >> p;

    powerOfnumber(b, p);
}