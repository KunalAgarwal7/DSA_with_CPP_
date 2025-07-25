#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter bill amount:";
    cin>>n;

    //Method-1
    if(n>=500){
        n=n-(n*0.10);
        cout<<"Your bill amount:"<<n;
    }
    else{
        cout<<"No Discount.";
    }

    //Method-2
    
    if(n>=500){
        n=n-(n*0.10);
        cout<<"Your bill amount:"<<n;
        return 0;
    }
    else{
        cout<<"No Discount.";
    }

    return 0;
}