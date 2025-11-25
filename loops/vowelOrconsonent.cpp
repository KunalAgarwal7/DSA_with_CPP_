#include <iostream>
using namespace std;
int main()
{
    char n;
    cout << "Enter a charater: ";
    cin >> n;

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' )
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonent";
    }
}