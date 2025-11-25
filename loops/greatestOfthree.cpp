#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter 1st number: ";
    cin >> n;

    int n2;
    cout << "Enter 2nd number: ";
    cin >> n2;

    int n3;
    cout << "Enter 3rd number: ";
    cin >> n3;

    if (n > n2 && n >n3)
    {
        cout << n;
    }
    else if (n2 > n && n2 > n3)
    {
        cout << n2;
    }
    else{
        cout<<n3;
    }
}