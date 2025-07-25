#include <iostream>
using namespace std;
int GCD(int &n1, int &n2)
{

    while (n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout << "GCD is:" << n1;
}
int main()
{
    int n1;
    cout << "Enter 1st number:";
    cin >> n1;

    int n2;
    cout << "Enter 2nd number:";
    cin >> n2;

    GCD(n1, n2);
}