#include<iostream>
using namespace std;

string Divisibleby5and3(int &n){
    (n%5==0 && n%3==0) ? cout<<"Yes" : cout<<"No";

}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    Divisibleby5and3(n);
    
    return 0;
}