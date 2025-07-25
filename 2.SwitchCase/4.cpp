#include<iostream>
using namespace std;
int main(){

    int n1;
    cout<<"Enter 1st number:";
    cin>>n1;

    int n2;
    cout<<"Enter 2nd number:";
    cin>>n2;

    char ch;
    cout<<"Enter operation sign:";
    cin>>ch;

    switch(ch){
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        default:
        cout<<"Please enter a valid operation.";
        break;

    }
    return 0;
}