#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter 1st number:";
    cin >> n1;

    int n2;
    cout << "Enter 2nd number:";
    cin >> n2;

    int *ptr1 = &n1;
    int *ptr2 = &n2;

    if (*ptr1 > *ptr2)
    {
        cout << "Max:" << *ptr1 << endl;
        cout << "Min:" << *ptr2 << endl;
    }
    else
    {
        cout << "Max:" << *ptr2 << endl;
        cout << "Min:" << *ptr1 << endl;
    }
}