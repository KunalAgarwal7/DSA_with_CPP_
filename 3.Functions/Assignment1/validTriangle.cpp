#include<iostream>
using namespace std;

bool Validtriangle(int &s1,int &s2,int &s3){
    if ((s1 + s2) < s3 || (s2 + s3) < s1 || (s3 + s1) < s2 ){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int s1;
    cout<<"Enter 1st side:";
    cin>>s1;

    int s2;
    cout << "Enter 2nd side:";
    cin >> s2;

    int s3;
    cout << "Enter 3rd side:";
    cin >> s3;

   if(Validtriangle(s1,s2,s3)){
    cout<<"Valid triangle.";
   }
   else{
    cout<<"Not a valid triangle.";
   }
    
}