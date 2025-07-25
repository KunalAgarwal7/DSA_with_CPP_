#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int(100); // Allocated memory
    cout << *ptr << endl;

    *ptr = 200; // Modified value
    cout << *ptr << endl;

    *ptr = 300; // Modofied value
    cout << *ptr;
}