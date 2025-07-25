#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int *ptr = &n;

    cout << "Square:" << (*ptr) * (*ptr);
}