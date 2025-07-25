#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year:";
    cin>>n;

    //Method-1
    if(n%4==0 && n%100!=0){
        cout<<"Yes";
    }
    else if (n%100==0 && n%400==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    //Method-2
    if(n%4==0 && n%100!=0){
        cout<<"Yes";
        return 0;
    }
    if(n%100==0 && n%400==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}