#include<iostream>
using namespace std;
int main(){
    /*
    the array would always be sorted , so start with this thing and followed by 
    finding a target using low and high starting is low and end is high
    mid = low+high/2
    check left and right of mid and eliminate one search space every time
    and keep on doing low+high/2
    only check till low<=high
    now here the pseudo code goes in
     int search(vector<int>&nums,int target){
     int n=nums.size();
     int low=0;int high=n-1;
     while(low<=high){
     int mid=low+high/2;
     if(nums[mid]==target) return mid;
     else if(target>nums[mid]) low=mid+1;
     else high=mid-1;
     }
     return -1;
     }
     //now a recursive code(time complexity is log n base 2)
      int bs(vector<int>&nums,int low,int high,int target){
      if(low>high)return -1;
      int mid=(low+high)/2;
      if(nums[mid]==target) return mid;
      else if(target>nums[mid]) return bs(nums,mid+1,high,target);
      return bs(nums,low,high-1,target);
      }
      int search(vector<int>&nums,int target){
      return bs(nums,0,nums.size()-1,target);
      }
    important  case : overflow case
    take mid=low+ (high-low)/2
    since int_max will cause integer overflow so either you can tale
    long long int or do the way it is shown above
    
    
    */
}