#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter a number:";
    cin>>n;

    //Method-1
    if(n>='0' && n<='9'){
        cout<<"Digit.";
    }
    else{
        cout<<"No.";
    }

    //Method-2
    (n>='0' && n<='9')?cout<<"Digit.": cout<<"No.";
    return 0;
}