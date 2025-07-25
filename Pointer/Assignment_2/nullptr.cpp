#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int(10);

    cout << *ptr << endl;
    // Memory leak occur because we not use delete operator by deleting the pointer we free the memory

    delete ptr;
    cout << *ptr;

    // Here we delete the pointer but a garbage value present to delete the memory of pointer we use nullptr so we prevent the memory leak

    ptr = nullptr;
    cout << ptr;

    // by using NULL we dont need to delete the pointer we directly remove the memory of pointer

    ptr = NULL;
}
