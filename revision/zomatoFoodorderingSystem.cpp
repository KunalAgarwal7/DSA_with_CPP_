#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"1. Pizza - 200rs"<<endl;
    cout<<"2. Burger - 100rs"<<endl;
    cout<<"3. Momos - 80rs"<<endl;
    cout<<"4. Coffee - 120rs"<<endl;

    int n;
    cout<<"Enter total number of items: ";
    cin>>n;

    int pizza = 0 , burger = 0, momos = 0, coffee = 0;

    for(int i = 0; i < n; ++i){

        int num, quan;
        cout<<i+1<<" Enter number and quantity: ";
        cin>>num>>quan;

        if(num == 1) pizza += quan * 200;
        if(num == 2) burger += quan * 100;
        if(num == 3) momos += quan * 80;
        if(num == 4) coffee += quan * 120;

    }

    int total = pizza + burger + momos + coffee;

    if(pizza == 0 && burger == 0 && momos == 0) total = total * 0.8;
    if(total < 500) total += 50;
    
    cout<<endl<<total;
 }