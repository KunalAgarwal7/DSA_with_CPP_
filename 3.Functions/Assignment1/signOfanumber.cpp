#include<iostream>
using namespace std;

string Signofnumber(int &n){
    if(n>0){
        cout<<"Positive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    Signofnumber(n);
    return 0;
}