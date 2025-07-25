#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';

    char *ptr = &ch;
    ptr++;

    cout << "Address: " << ptr << endl;
    cout << "Character: " << *ptr << endl;
}