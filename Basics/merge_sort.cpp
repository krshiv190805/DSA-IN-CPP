#include<bits/stdc++.h>
using namespace std;
//merge sort means divide and merge as a sorted array
/* EXAMPLE array ={3,1,2,4,1,5,2,6,4}
now divide this into two parts from (3->1) and from (5->4)
now sort the two divided array and then merge , this is what merge sort is
 so before coding this 
 the pseudo code looks like :
 mergeSort(arr,low,high){
 if (low>=high) return ; (this is the base case , that should be written otherwise it would keep on returning and all functions will be called one by one )
 mid=(low+high)/2;
 mergeSort(arr,low,mid);
 mergeSort(arr,mid+1,high);
 merge(arr,low,mid,high);
 }
 and the code looks a little bit like
 merge(arr,low,mid,high){
 temp->[]
 left=low;
 right=mid+1;
 while(left<=mid && right<=high)
{
if(arr[left]<=arr[right]){
 temp.add(arr[left])
 left++;
 }
 else {
 temp.add(arr[right]);
 right++;
 }
 while(left<=mid){
 temp.add(arr[left]);
 left++;
 }
 while(right<=high){
 temp.add(arr[right]);
 right++;
 } (this all process will add the elements in sorted manner , and print as well)
now:
for(i=low->high)
{
arr[i]=temp[i-low];(low-low=0;low+1-low=1 and so on)
}
*/
void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temp;
    // low...mid
    // mid+1...high
    int left= low;
    int right= mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<= high;i++){
        arr[i]=temp[i-low];
    }
}
//time complexity is log n base 2 where n is size of array , as it is divided into two half multiple times(for merge sort)
//but for the whole it is N*(log n base 2 ), N is something which is kind of number of elements , not exactly but it is 
// space complexity is O(N) nearly not exactly it is

    