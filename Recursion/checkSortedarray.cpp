#include<bits/stdc++.h>
using namespace std;
bool sortCheck(vector<int> &v, int i){

    if(i == v.size() - 1) return true;
    if(v[i] > v[i+1]) return false;

    return sortCheck(v, i+1);
}
int main(){
vector<int> v1 = {1,2,3,4};
vector<int> v2 = {1,1,3};
vector<int> v3 = {3,2,1};

cout<<sortCheck(v1,0)<<endl;
cout<<sortCheck(v2,0)<<endl;
cout<<sortCheck(v3,0)<<endl;
}