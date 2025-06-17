#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    lower bound is something that the smallest index such that arr[index]>=n;
    and upper bound is smallest index such that arr[index]>target element, and if there is no such element in that array 
    then return the size of the array (n),also it should be sorted as we are talking binary search
    the code goes like:
    int lowerBound(vector<int>arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){ //time complexity would be log n base 2
    int mid=(low+high)/2;
    if(arr[mid]>=x){(for upper bound just use greater than symbol instead of greater than equal to and your code will be optimised for it)
    ans=mid;
    high=mid-1;
    }
    else{
    low=mid+1;
    }
    }
    return ans;
    }
    

    1)floor and ceil in sorted array
    floor means largest number in array less than or equal to x and ceil is smallest number in array greater than or equal to x
    int findFloor(vector<long long>arr,long long n,long long x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]<=x){
    ans=arr[mid];
    low=mid+1;
    }
    e;se{
    high=mid-1;
    }
    }
    return ans;
    }
    */
 return 0;
}