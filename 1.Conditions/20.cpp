#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    //Method-1
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase.";
    }
     else if(ch>='1' && ch<='9'){
        cout<<"Digit.";
    }
    else{
        cout<<"Special character.";
    }

    //Method-2
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase.";
        return 0;
    }
    if(ch>='1' && ch<='9'){
        cout<<"Digit.";
        return 0;
    }
    else{
        cout<<"Special character.";
    }

    return 0;
}