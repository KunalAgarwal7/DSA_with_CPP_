#include<iostream>
using namespace std;

int Print_natural_number(int &n){
    for(int i = 1;i<=n;++i){
        cout<<i<<endl;
    }
}
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    Print_natural_number(n);
}