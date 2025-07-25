#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 30;
    int c = 20;

    int *ptr = &a;
    cout << "Address of a:" << ptr << endl;
    cout << "Value : " << *ptr << endl;

    ptr = &b;
    cout << "Address of b:" << ptr << endl;
    cout << "Value : " << *ptr << endl;

    ptr = &c;
    cout << "Address of c:" << ptr << endl;
    cout << "Value : " << *ptr << endl;
}