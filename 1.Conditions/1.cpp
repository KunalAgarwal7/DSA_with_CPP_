#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    //Method-1
    if(n%2==0){
        cout<<"Even.";
    }
    else{
        cout<<"Odd.";
    }

    //Method-2
    (n%2==0 ? cout<<"Even":cout<<"Odd");
    return 0;
}