#include<iostream>
using namespace std;
int main(){

    int a;

    cout<<"Enter 1st number: ";
    cin>>a;

    int b;

    cout << "Enter 2nd number: ";
    cin >> b;

    char c;

    cout << "Enter operator: ";
    cin >> c;

    switch(c){
        case '+': cout<<a+b; break;
        case '-': cout<<a-b; break;
        case '*': cout<<a*b; break;
        case '/': cout<<a/b; break;
        case '%': cout<<a%b; break;
        default: cout<<"Invalid operator";
    }
}