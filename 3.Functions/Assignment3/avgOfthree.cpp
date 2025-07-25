#include <iostream>
using namespace std;

void avgOfthree(float &n1, float &n2, float &n3)
{
    float ans;
    ans = (n1 + n2 + n3) / 3;
    cout << ans;
}
int main()
{
    float num1;
    cout << "Enter 1st number:";
    cin >> num1;

    float num2;
    cout << "Enter 2nd number:";
    cin >> num2;

    float num3;
    cout << "Enter 3rd number:";
    cin >> num3;

    avgOfthree(num1,num2,num3);
}