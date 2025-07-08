/*
this is a question in which we have to maximise the sum of subarrays
for eg:
arr[]=[10 20 30 40] and k=2 painters
sub array should atleast contain one element
10,(20 30 40) max sum of both is 90
(10,20),(30,40) here it is 70
(10,20,30),40 here it is 60
(10,20,30,40) this can't be as other array is empty
and finally we have to take the minimum which is 60 ans
 and the other question which is split array largest sum
 is same as this one which was ALlocate books in that if you do the same as we did here
 so there is no difference so copying that code here wouldn't make any difference 
 in this 
 code:
int countStudents(vector<int>&arr,int pages){
int students=1;
long long pagesStudent=0;
for(int i=0;i<arr.size();i++){
if(pagesStudent+arr[i]<=pages){
pagesStudent+=arr[i];
}
else{
students+=1;
pagesStudent=arr[i];
}
}
return students;
}
int findPages(vector<int>&arr,int n,int m){
if(m>n) return -1;
int low=*max_element(arr.begin(),arr.end());
int high=accumulate(arr.begin(),arr.end()0);
while(low<=high){
int mid=(low+high)/2;
int students=countStudents(arr,mid);
if(students>m) low=mid+1;
else high=mid-1;
}
return low;
}
int largestSubarraySumMinimized(vector<int>a,int k){
 return findPages(a,a.size(),k);
} // TC and SC would be same as it was in the previous question
*/