#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter age:";
    cin>>n;

    //Method-1
    if(n>=18){
        cout<<"Eligible.";
    }
    else{
        cout<<"Not Eligible";
    }

    //Method-2
    (n>=18)?cout<<"Eligible.":cout<<"Not Eligible";
    return 0;
}