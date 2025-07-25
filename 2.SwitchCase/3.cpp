#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter a char:";
    cin>>ch;

    switch(ch){
        case 'A':
        cout<<"Excellent";
        break;
        case 'B':
        cout<<"Good";
        break;
        case 'C':
        cout<<"Average";
        break;
        case 'D':
        cout<<"Below Average";
        break;
        case 'E':
        cout<<"Fail";
        break;
        default:
        cout<<"Please enter between A to E.";
        break;

    }
    return 0;
}