#include <iostream>
using namespace std;
int main()
{

    char ch = 'a';

    char *pch = &ch;

    // Character address
    cout << (void *)pch << endl;
    cout << *pch << endl;

    return 0;
}