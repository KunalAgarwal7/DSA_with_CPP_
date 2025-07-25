#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    //Method-1
    cout<<abs(n);

    //Method-2
    if(n>=0){
        cout<<n;
    }else{
        cout<<abs(n);
    }
}