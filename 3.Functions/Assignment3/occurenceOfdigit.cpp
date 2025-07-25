#include<iostream>
using namespace std;

int occurenceOfdigit(int &num,int &occ){
    int val;
    int count=0;
    while(num>0){
        val=num%10;
        if(val==occ){
            count++;
        }
        num/=10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    int occ;
    cout<<"Enter occurence digit:";
    cin>>occ;

    int ans=occurenceOfdigit(num,occ);
    cout<<occ<<" is "<<ans<<" times.";
}