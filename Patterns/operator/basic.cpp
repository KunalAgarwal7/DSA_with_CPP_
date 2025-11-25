#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;

    cout<<"Enter 2nd number: ";
    cin>>b;

    if(a==b){
        cout<<a+b;
    }
    else if(a>b){
        cout<<a-b;
    }
    else if(a<b){
        cout<<a*b;
    }
    else{
        cout<<"Not possible.";
    }
}