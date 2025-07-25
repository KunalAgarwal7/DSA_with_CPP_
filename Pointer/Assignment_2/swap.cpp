#include <iostream>
using namespace std;
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << *a << endl
         << *b;
}
int main()
{
    int a = 20;
    int b = 40;

    swap1(&a, &b);
}