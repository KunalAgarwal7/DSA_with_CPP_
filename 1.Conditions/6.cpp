#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter score:";
    cin>>n;

    //Method-1
    if(n>=90){
        cout<<"Grade-A";
    }
    else if(n<90 && n>=75){
        cout<<"Grade-B";
    }
    else if(n<75 && n>=50){
        cout<<"Grade-C";
    }
    else if(n<50 && n>=35){
        cout<<"Grade-D";
    }
    else{
        cout<<"Fail";
    }

    //Method-2
    if(n>=90){
        cout<<"Grade-A";
    }
    if(n<90 && n>=75){
        cout<<"Grade-B";
    }
    if(n<75 && n>=50){
        cout<<"Grade-C";
    }
    if(n<50 && n>=35){
        cout<<"Grade-D";
    }
    if(n>=0 && n<35){
        cout<<"Fail";
    }
    return 0;
}