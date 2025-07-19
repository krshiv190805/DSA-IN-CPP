#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
1)we have to perform a search in rotated array(ofc we have to use binary search in this )
int searh(vector<int>&arr,int n,int k){(TC- logn base 2)
int low=0;
int high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==k) return mid;
if(arr[low]<=arr[mid]){//left sorted
if(arr[low]<=k && arr[mid]>=k){
high=mid-1;}
else {
low=mid+1;
}
}
else{
if(arr[mid]<=k && k<=arr[high]){
low=mid+1;
}
else{
high=mid-1;
}
}
}
return -1;
}
}
*/
 return 0;
}