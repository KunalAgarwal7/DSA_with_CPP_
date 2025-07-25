#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter 1st number:";
    cin >> num1;

    int num2;
    cout << "Enter 2nd number:";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if (*ptr1 == *ptr2)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }
    return 0;
}
