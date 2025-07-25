#include<iostream>
using namespace std;
int Factors(int &n){
    int i = 1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    Factors(n);
}