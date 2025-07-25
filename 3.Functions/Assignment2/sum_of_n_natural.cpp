#include <iostream>
using namespace std;
int Sum_of_N_natural_num(int &n)
{
    int ans=0;
    for(int i = 1;i<=n;++i){
        ans+=i;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int a=Sum_of_N_natural_num(n);
    cout<<a;
}