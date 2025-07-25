#include <iostream>
using namespace std;

int add(int &n1, int &n2)
{
    return n1 + n2;
}
int sub(int &n1, int &n2)
{
    return n1 - n2;
}
int mul(int &n1, int &n2)
{
    return n1 * n2;
}
int divi(int &n1, int &n2)
{
    return n1 / n2;
}

int main()
{

    int n1;
    cout << "Enter 1st number:";
    cin >> n1;

    int n2;
    cout << "Enter 2nd number:";
    cin >> n2;

    string operation;
    cout << "Enter (add, sub, mul, div):";
    cin >> operation;

    if (operation == "add")
    {
        int ans = add(n1, n2);
        cout << ans;
    }
    if (operation == "sub")
    {
        int ans = sub(n1, n2);
        cout << ans;
    }
    if (operation == "mul")
    {
        int ans = mul(n1, n2);
        cout << ans;
    }
    if (operation == "div")
    {
        int ans = divi(n1, n2);
        cout << ans;
    }
}