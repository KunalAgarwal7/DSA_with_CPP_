#include <iostream>
using namespace std;

int Primenumber(int &n)
{
    int i;
    int a = 2;
    while (a < n)
    {
        i = 2;
        bool b = false;
        while (i * i <= a)
        {
            if (a % i == 0)
            {
                b = true;
                break;
            }
            i++;
        }
        if (b == false)
        {
            cout << a << " ";
        }
        a++;
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Primenumber(n);
    return 0;
}