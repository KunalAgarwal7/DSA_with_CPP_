#include <iostream>
using namespace std;
int main()
{
    int n1 = 5;
    int n2 = 3;

    int *ptr1 = &n1;
    int *ptr2 = &n2;

    int a = (*ptr1) & (*ptr2);
    int b = (*ptr1) | (*ptr2);
    int c = (*ptr1) ^ (*ptr2);

    cout << "Bitwise AND:" << a << endl;
    cout << "Bitwise OR:" << b << endl;
    cout << "Bitwise XOR:" << c << endl;
}