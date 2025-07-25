#include <iostream>
using namespace std;
int main()
{
    // compile time=stack,static  run time=heap,dynamic
    int *p = new int(10);

    cout << "Memory : " << p << endl;
    cout << "Value : " << *p << endl;

    // delete value and garbage value assign
    delete p;

    cout << "Memory : " << p << endl;
    cout << "Value : " << *p << endl;

    // free memory address
    p = nullptr;

    cout << "Memory : " << p << endl;
    cout << "Value : " << *p << endl;

    return 0;
}