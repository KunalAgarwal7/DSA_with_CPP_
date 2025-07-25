#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter 1st angle:";
    cin>>n1;

    int n2;
    cout<<"Enter 2nd angle:";
    cin>>n2;

    int n3;
    cout<<"Enter 3rd angle:";
    cin>>n3;

    //Method-1
    if(n1+n2+n3==180){
        cout<<"Yes.";
    }
    else{
        cout<<"Not.";
    }

    //Method-2
    (n1+n2+n3==180)? cout<<"Yes.":cout<<"Not.";

    return 0;
}