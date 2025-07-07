#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*
   this is the code i am writing with tc O(N)
   int first, last=-1;
   for(int i=0;i<n;i++){
   
   if(arr[i]==n){
   if(first==-1) first=i;
   last=i;
   }
   }
   now optimised code goes: TC(2*O(logn base 2) and Sc(1))
   code for lower bound
   then 
   code for upper bound
   now 
   pair<int,int>firstAndLastPosition(vector<int>&arr,int n,int k){
   int lb=lowerBound(arr,n,k);
   if(lb==n||arr[lb]!=k) return {-1,-1};
   return {lb,upperBound(arr,n,k)-1};
   }
   1)first occurance and last occurance of element in sorted array
   int firstocc(vector<int>&arr,int n,int k){
   int low=0,high=n-1;
   int first=-1;
   while(low<=high){
   int mid=(low+high)/2;
   if(arr[mid]==k){
   first=mid;
   high=mid-1;
   }
   else if(arr[mid]<k) low=mid+1;
   else high=mid-1;
   }
   return first;
   }
   int Lastocc(vector<int>&arr,int n,int k){
   int low=0,high=n-1;
   int first=-1;
   while(low<=high){
   int mid=(low+high)/2;
   if(arr[mid]==k){
   last=mid;
   low=mid-1;
   }
   else if(arr[mid]<k) low=mid+1;
   else high=mid-1;
   }
   return last;
   }
   pair<int,int>firstAndlastpos(vector<int>&arr,int n,int k){
   int first=firstOccurence(arr,n,k);
   if(first==-1) return {-1,-1};
   int last=lastOcc(arr,n,k);
   return {first,last};
   }
   IMPORTANT=to count number of occurance of an element , do last occurance -first occurance +1
   

   */
 return 0;
}