#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v){
    int left = 0, right = v.size() - 1, target = 5;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (v[mid] > target)
        {
            right = mid - 1;
        }
        else if (v[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
   cout<<binarySearch(v);
}