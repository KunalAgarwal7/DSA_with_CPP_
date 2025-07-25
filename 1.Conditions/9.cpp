#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter input:";
    cin>>ch;
    
    //Method-1
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"Alphabet";
    }
    else{
        cout<<"Not";
    }

    //Method-2
    if(ch>='a' && ch<='z'){
        cout<<"Alphabet";
        return 0;
    }
    if(ch>='A' && ch<='Z'){
        cout<<"Alphabet";
        return 0;
    }
    else{
        cout<<"Not";
    }
    return 0;
}