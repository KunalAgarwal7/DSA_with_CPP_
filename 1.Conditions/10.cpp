
#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter 1st number:";
    cin>>n1;

    int n2;
    cout<<"Enter 2nd number:";
    cin>>n2;

    int n3;
    cout<<"Enter 3rd number:";
    cin>>n3;

    //Method-1
    if(n1>n2 && n1>n3){
        cout<<n1<<" is greatest.";
    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<" is greatest.";
    }
    else{
        cout<<n3<<" is greatest.";
    }

    //Method-2
    if(n1>n2 && n1>n3){
        cout<<n1<<" is greatest.";
        return 0;
    }
    if(n2>n1 && n2>n3){
        cout<<n2<<" is greatest.";
        return 0;
    }
    else{
        cout<<n3<<" is greatest.";
    }

    return 0;
}