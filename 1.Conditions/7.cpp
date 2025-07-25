#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    //Method-1
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }

    //Method-2
    if(ch=='a'){
        cout<<"Vowel";
        return 0;
    }
    if(ch=='e'){
        cout<<"Vowel";
        return 0;
    }
    if(ch=='i'){
        cout<<"Vowel";
        return 0;
    }
    if(ch=='o'){
        cout<<"Vowel";
        return 0;
    }
    if(ch=='u'){
        cout<<"Vowel";
        return 0;
    } 
    cout<<"Consonent";    
    
    return 0;
}