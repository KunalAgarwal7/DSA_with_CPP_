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

    swap(*ptr1, *ptr2);

    cout << "First number after swapping:" << *ptr1 << endl;
    cout << "Second number after swapping:" << *ptr2 << endl;
}