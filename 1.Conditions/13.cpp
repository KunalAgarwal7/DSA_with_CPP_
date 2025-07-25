#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter input:";
    cin>>ch;
    
    //Method-1
    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Lowercase";
    }
    else{
        cout<<"Not a character.";
    }

    //Method-2
    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase";
        return 0;
    }
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase";
        return 0;
    }
    else{
        cout<<"Not a character.";
    }

    return 0;
}