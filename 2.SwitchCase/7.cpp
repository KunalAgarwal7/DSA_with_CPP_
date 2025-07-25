#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    switch(n){
        case 1:
        cout<<"31 Days";
        break;
        case 2:
        cout<<"28 or 29 Days";
        break;
        case 3:
        cout<<"31 Days";
        break;
        case 4:
        cout<<"30 Days";
        break;
        case 5:
        cout<<"31 Days";
        break;
        case 6:
        cout<<"30 Days";
        break;
        case 7:
        cout<<"31 Days";
        break;
        case 8:
        cout<<"31 Days";
        break;
        case 9:
        cout<<"30 Days";
        break;
        case 10:
        cout<<"31 Days";
        break;
        case 11:
        cout<<"30 Days";
        break;
        case 12:
        cout<<"31 Days";
        break;
        default:
        cout<<"Please enter between 1 to 12.";
        break;

    }
    return 0;
}