#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price:";
    cin>>cp;

    int sp;
    cout<<"Enter selling price:";
    cin>>sp;

    //Method-1
    if(sp>cp){
        cout<<"Profit:"<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss:"<<cp-sp;
    }
    else{
        cout<<"No Loss No Profit";
    }

    //Method-2
     if(sp>cp){
        cout<<"Profit:"<<sp-cp;
        return 0;
    }
    if(cp>sp){
        cout<<"Loss:"<<cp-sp;
        return 0;
    }
    else{
        cout<<"No Loss No Profit";
    }
    return 0;
}