#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *add = &num;
    cout << "Address is: " << add;
}