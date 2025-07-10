/*
this is a question in which we have to find the peak element 
in an array , also the array can have multiple peaks but you have to return anyone of them
arr[]={ 1 2 3 4 5 6 7 8 5 1} peak = 8(7<8 and 8>5)
arr[]={1 2 1 3 5 6 4} it has 2 and 4 as peaks
arr[]={1 2 3 4 5} in this case you have to return 5 as peak , as it is 
greater than 4 and hypothetical -infintiy
and if it is 5 4 3 2 1 then peak is 5 with the same above reason
approach: 
we can think of all the cases one is that 
mid-left of peak
mid-right of peak
mid=peak
after all we are on a conclusion that we would be starting
low fron 1 index and right =n-2 as we have written manual code for
both these indexes
IMP: 
for this case 1 5 1 2 1 we have two peaks
so the last else condition is specially for this 
code:
int findPeakElement(vector<int>&arr){
int n=arr.size();
if(n==1) return 0;
if(arr[0]>arr[1]) return 0;
if(arr[n-1]>arr[n-2]) return n-1;
int low=1,high=n-2;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
else if(arr[mid]>arr[mid-1]) low=mid+1;
else high=mid-1;
}
return -1;//TC-O(log n base 2) and SC-O(1)
}
*/