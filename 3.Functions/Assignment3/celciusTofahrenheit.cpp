#include <iostream>
using namespace std;

int celciusTofahrenheit(int &temp)
{
    int ans = (temp * 9 / 5) + 32;
    cout << ans;
}
int main()
{
    int temp;
    cout << "Enter temprature in celcius:";
    cin >> temp;

    celciusTofahrenheit(temp);
}