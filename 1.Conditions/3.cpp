#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter 1st number:";
    cin>>n1;

    //Method-1
    int n2;
    cout<<"Enter 2nd number:";
    cin>>n2;

    if(n1>n2){
        cout<<"Largest:"<<n1;
    }
    else{
        cout<<"Largest:"<<n2;
    }

    //Method-2
    (n1>n2) ? cout<<"Largest:"<<n1 : cout<<"Largest:"<<n2;
    return 0;
}