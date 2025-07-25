#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    //Method-1
    if(n>0){
        cout<<"Positive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }

    //Method-2
    (n!=0) ? (n>0 ? cout<<"Positive" : cout<<"Negative") : cout<<"Zero";
    return 0;
}