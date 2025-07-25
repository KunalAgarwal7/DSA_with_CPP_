#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *add = &num;
    cout << "Value is: " << *add << endl;
    *add = 20;
    cout << "Value after change is:" << *add;
}