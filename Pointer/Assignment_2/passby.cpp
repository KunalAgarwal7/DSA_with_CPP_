#include <iostream>
using namespace std;
void passbyvalue(int a, int b)
{
    cout << a << endl
         << b << endl;
}
void passbyreference(int &a, int &b)
{
    a = 15;
    cout << a << endl
         << b << endl;
}
void passbyaddress(int *a, int *b)
{
    *a = 25;
    cout << *a << endl
         << *b;
}
int main()
{
    int a = 5;
    int b = 10;

    passbyvalue(a, b);
    passbyreference(a, b);
    passbyaddress(&a, &b);
}