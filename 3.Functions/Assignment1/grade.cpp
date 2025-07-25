#include <iostream>
using namespace std;

string Grade(int &n){
    if (n >= 90)
    {
        cout << "Grade-A";
    }
    else if (n < 90 && n >= 75)
    {
        cout << "Grade-B";
    }
    else if (n < 75 && n >= 50)
    {
        cout << "Grade-C";
    }
    else if (n < 50 && n >= 35)
    {
        cout << "Grade-D";
    }
    else
    {
        cout << "Fail";
    }
}

int main()
{
    int n;
    cout << "Enter score:";
    cin >> n;

    Grade(n);    
    return 0;
}