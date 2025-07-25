#include <iostream>
using namespace std;

int Area_of_rect(int &num1, int &num2)
{
    int ans = num1 * num2;
    cout << ans;
}
int main()
{
    int num1;
    cout << "Enter 1st number:";
    cin >> num1;

    int num2;
    cout << "Enter 2nd number:";
    cin >> num2;

    Area_of_rect(num1, num2);
}