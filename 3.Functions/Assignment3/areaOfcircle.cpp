#include <iostream>
using namespace std;

int Area_of_circle(float &r)
{
    float ans = 3.14 * r * r;
    cout << ans;
}
int main()
{
    float r;
    cout << "Enter radius:";
    cin >> r;

    Area_of_circle(r);
}