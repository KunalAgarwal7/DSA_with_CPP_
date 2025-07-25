#include<iostream>
using namespace std;
int main(){
    int a1;
    cout<<"Enter 1st angle:";
    cin>>a1;
    int a2;
    cout<<"Enter 2nd angle:";
    cin>>a2;
    int a3;
    cout<<"Enter 3rd angle:";
    cin>>a3;
    bool ans;

    if(a1+a2+a3==180){
    if(a1==90 || a2==90 || a3==90){
         ans=true;
    }else{
        ans=false;
    }
    switch(ans){
        case true:
        cout<<"Right angle triangle.";
        break;
        case false:
        cout<<"Not a right angle triangle";
        break;
    }
}else{
    cout<<"Not a triangle";
}
}