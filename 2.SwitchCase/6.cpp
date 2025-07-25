#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter signal color:";
    cin>>ch;

    switch(ch){
        case 'Y':
        cout<<"Ready to go";
        break;
        case 'G':
        cout<<"Go";
        break;
        case 'R':
        cout<<"Stop";
        break;
        default:
        cout<<"Please enter R,G or Y.";
        break;

    }
    return 0;
}