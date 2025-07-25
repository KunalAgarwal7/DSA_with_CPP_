#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    //Method-1
    if(n%5==0 && n%11==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    //Method-2
    (n%5==0 && n%11==0) ? cout<<"Yes" : cout<<"No";
    return 0;
}