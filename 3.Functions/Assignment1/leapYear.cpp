#include<iostream>
using namespace std;

string Leapyear(int &n){
    
    if(n%4==0 && n%100!=0){
        cout<<"Yes";
    }
    else if (n%100==0 && n%400==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n;
    cout<<"Enter a year:";
    cin>>n;

    Leapyear(n);    
    return 0;
}