#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year:";
    cin>>n;

    bool ans;
    if(n%4==0 && n%100!=0){
        ans=true;
    }
    else if (n%100==0 && n%400==0){
        ans=true;
    }
    else{
        ans=false;
    }

    switch(ans){
        case true:
        cout<<"Leap Year";
        break;
        case false:
        cout<<"Not a Leap Year";
        break;
    }
    return 0;
}