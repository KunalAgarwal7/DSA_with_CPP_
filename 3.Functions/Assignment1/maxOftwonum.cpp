#include<iostream>
using namespace std;

string Max_of_two_num(int &n1,int &n2){
    (n1>n2) ? cout<<"Largest:"<<n1 : cout<<"Largest:"<<n2;
}
int main(){
    int n1;
    cout<<"Enter 1st number:";
    cin>>n1;

    int n2;
    cout<<"Enter 2nd number:";
    cin>>n2;

    Max_of_two_num(n1,n2);
    return 0;
}