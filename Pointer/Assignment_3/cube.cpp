#include <iostream>
using namespace std;
int cube(int num)
{
    int ans = num * num * num;
    cout << ans;
}
int main()
{
    int (*fptr)(int);
    fptr = cube;
    fptr(5);
}