#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int(10);
    cout << *ptr;

    delete ptr;

    cout << *ptr;
}

// new operator is use for initialize value to pointer but data type should be same of pointer and new variable.

// delete operator is use for delete the pointer value