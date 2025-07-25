#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    *ptr++;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << x << endl;
}

// ptr output -> address of x
//*ptr output -> 6422284
// x -> value