#include<iostream>
using namespace std;

string Alphabetornot(char &ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"Alphabet";
    }
    else{
        cout<<"Not";
    }
}
int main(){
    char ch;
    cout<<"Enter input:";
    cin>>ch;
    
    Alphabetornot(ch);
    return 0;
}