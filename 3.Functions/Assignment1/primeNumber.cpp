#include<iostream>
using namespace std;

string Primenumber(int &n){
    int i = 2;
    bool a = false;
    while(i*i<n){
        if(n%i==0){
            cout<<"Not a prime number";
            a = true;
            break;
        }
        i++;
    }
    if(a==false){
        cout<<"Prime number.";
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    Primenumber(n);
    return 0;
}