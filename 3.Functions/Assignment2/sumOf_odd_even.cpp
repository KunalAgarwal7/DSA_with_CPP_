#include <iostream>
using namespace std;
int Sum_of_N_Odd_Even(int &n)
{
    int evensum = 0;
    int oddsum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if(i%2==0){
            evensum+=i;
        }
        else{
            oddsum+=i;
        }
    }
    cout<<"Even sum = "<<evensum<<endl;
    cout<<"Odd sum = "<<oddsum<<endl;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    Sum_of_N_Odd_Even(n);
}