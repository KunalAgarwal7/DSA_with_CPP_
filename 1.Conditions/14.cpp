#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter units:";
   cin>>n;

   //Method-1
   int i = 1;
   int ans = 0;
   while(i<=n){
    if(i>=1 && i<=100){
        ans+=5;
    }
     else if(i>100 && i<=200){
        ans+=6;
     }
     else{
        ans+=8;
     }
     i++;
   }
   cout<<"Your total electricity bill is:"<<ans;
   
   //Method-2
   int ans=0;
   for(int i = 1;i<=n;++i){
      if(i>=1 && i<=100){
        ans+=5;
    }
     else if(i>100 && i<=200){
        ans+=6;
     }
     else{
        ans+=8;
     }
   }
   
    cout<<"Your total electricity bill is:"<<ans;
    
   return 0;
}