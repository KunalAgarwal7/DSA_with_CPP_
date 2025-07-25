#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter 1st side:";
    cin>>n1;

    int n2;
    cout<<"Enter 2nd side:";
    cin>>n2;

    int n3;
    cout<<"Enter 3rd side:";
    cin>>n3;

    //Method-1
    if(n1==n2&& n2==n3){
        cout<<"Equilateral.";
    }
    else if(n1==n2 || n2==n3 || n3==n1){
        cout<<"Isosceles.";
    }
    else{
        cout<<"Scalenes.";
    }

    //Method-2
    if(n1==n2&& n2==n3){
        cout<<"Equilateral.";
        return 0;
    }
    if(n1==n2 || n2==n3 || n3==n1){
        cout<<"Isosceles.";
        return 0;
    }
    else{
        cout<<"Scalenes.";
    }

    return 0;
}