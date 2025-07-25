// C++ program to find the type of an object

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // Declare an int and a double
    int myInt = 10;
    double myDouble = 20.0;

    // Use typeid to find the type of myInt
    cout << "Type of myInt is : " << typeid(myInt).name() << endl;

    // Use typeid to find the type of myDouble
    cout << "Type of myDouble is : " << typeid(myDouble).name() << endl;

    return 0;
}