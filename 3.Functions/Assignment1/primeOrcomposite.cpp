#include <iostream>
using namespace std;

string Prime_or_Composite(int &n)
{
    int i = 2;
    int count = 0;
    while (i< n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 0)
    {
        cout << "Prime number.";
    }
    else if(count==1){
        cout<<"Composite number.";
    }
    else{
        cout<<"Neither prime nor composite.";
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Prime_or_Composite(n);
    return 0;
}