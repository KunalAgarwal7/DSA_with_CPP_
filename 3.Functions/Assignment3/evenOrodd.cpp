#include <iostream>
using namespace std;

string EvenOrodd(int &n)
{
     (n % 2 == 0)?cout << "Even.":cout << "Odd.";
    
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    EvenOrodd(n);
}