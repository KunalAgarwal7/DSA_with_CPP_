#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    ***ptr3 = 20;
    cout << num;
}