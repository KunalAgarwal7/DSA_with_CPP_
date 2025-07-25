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

    char operation;
    cout << "Enter(+ or -):";
    cin >> operation;

    if (operation == '+')
    {
        int ans = *ptr1 + *ptr2;
        cout << ans;
    }
    else if (operation == '-')
    {
        int ans = *ptr1 - *ptr2;
        cout << ans;
    }
    else
    {
        cout << "Please enter valid operation.";
    }
    return 0;
}