#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter marks: ";
    cin >> n;

    if (n > 35)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}