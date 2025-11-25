#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 3; ++i)
    {
        char ch = 'A' + i;
        for (int j = 0; j < 3; ++j)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}