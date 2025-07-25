#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 30;
    int *ptra = &a;
    b = *ptra + b;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}