#include <iostream>
using namespace std;
int main()
{
    int x = 30;
    int y = 10;
    int *ptr1 = &x;
    int *ptr2 = &y;

    int ptrans = *ptr1 - *ptr2;
    cout << ptrans << endl;
}