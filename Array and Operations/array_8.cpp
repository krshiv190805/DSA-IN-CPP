#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    this is the question in which we have to count the maximum consecutive ones
    means you have to return the length of max cons one set
    code:
    int findMAxconsone(vector<int>&nums){//TC-O(N)
    int maxi=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
    if(nums[i]==1){
    cnt++;
    maxi=max(maxi,cnt);
    }
    else {
    cnt=0;
    }
    }
    return maxi;
    }
    2)find the number that appears once and the other numbers appears twice
    arr[]={ 1 1 2 3 3 4 4}
    brute:
    for(i=0->n){//TC-O(n*n),SC-O(1)
    num=arr[i];
    cnt=0;
    for(j=0->n){
    if(arr[j]==num) cnt++;
    }
    if(cnt==1 ) return num;
    }
    2)now comes the better approach
    we will use a map to solve this
    map<long long ,int>mpp;
    size of the map will be N/2+1
    for(i=0->n){
    mpp[arr[i]]++;
    }
    for(auto it:mpp){//O(N/2+1)
    if(it.second==1) return it.first; //ordered map will take O(NlogM ) where N=length of array and M=size of the map
    } TC-O(N/2+1) +O(NlogM)
     SC-O(N/2+1) for storage of map

     3)optimal approach
     code:
     int getSINGleelement(vector<int>&arr){
     int xorr=0;
     for(int i=0;i<arr.size();i++){
     xorr=xorr^arr[i];
     }
     return xorr;
     }
    */
 return 0;
}
