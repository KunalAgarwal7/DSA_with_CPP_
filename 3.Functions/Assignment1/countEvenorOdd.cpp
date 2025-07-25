#include <iostream>
using namespace std;
string Count_Even_or_Odd(int &n)
{
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    if(count%2==0){
        cout<<count<<" is even.";
    }
    else{
        cout<<count<<" is odd.";
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Count_Even_or_Odd(n);
}