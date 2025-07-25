#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    // By using * we give power to a variable to store address of another variable
    int *add = &a;
    cout << "Address of a using pointer: " << add << endl;
    cout << "Value of a using pointer: " << *add << endl;
    cout << "Address of add pointer: " << &add << endl
         << endl;

    // By using ** we give power to a variable to store address of another pointer
    int **padd = &add;
    cout << "Address of add using pointer: " << padd << endl;
    cout << "Value of add using pointer: " << *padd << endl;
    cout << "Value of a using pointer: " << **padd << endl;
    cout << "Address of padd pointer: " << &padd << endl;
}