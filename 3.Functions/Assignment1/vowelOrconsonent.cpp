#include<iostream>
using namespace std;

string Vowelorconsonent(char &ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }
}

int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    Vowelorconsonent(ch);
        return 0;
}