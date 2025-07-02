/*
in this we have to count the number of inversions in an
array in which conditions should be
1) i<j
2) a[i]>a[j]
brute force approach : 
we will stand at a particular element and go accross the right elements
to firstly satisfy the 1st condtion and then check for lesser than this element
and solve
code:
cnt=0;
for(i=0->n-1){ //TC-O(N^2) and SC-O(1)
for(j=i+1;j<n;j++){
if(a[i]>a[j]) cnt++;
}
}

Optimal approach: 
we will use merge sort in it and then solve to reduce the complexity
int  merge(vector<int>&arr,int low,int mid,int high){
vector<int>temp;//TC-O(NlogN) and SC-O(N),mention that you are distorting the array and if they dont want you can copy the array into some other array and then
int left=low;
int right =mid-1;
//storing elements in the temporary array in a sorted manner
int cnt=0;
while(left<=mid && right<=high){
if(arr[left]<=arr[right]){
temp.push_back(arr[left]);
left++;
}
//right is smaller
else{
temp.push_back(arr[right]);
cnt+=(mid-left+1);
right++;
}
}
// if the elements om the left half are still left
while(left<=mid){
temp.push_back(arr[left]);
left++;
}
//if elements on the right half are still left
while(right<=high){
temp.push_back(arr[right]);
right++;
}
for(int i=low;i<=high;i++){
arr[i]=temp[i-low];
}
return cnt;
}
void mergeSort(vector<int>&arr, int low,int high){
int cnt=0;
if(low>=high) return ;
int mid=(low+high)/2;
cnt+=mergeSort(arr,low,mid);//left half
cnt+=mergeSort(arr,mid+1,high);//right half
cnt+=merge(arr,low,mid,high);//merging sorted halves
return cnt;
}
int numOfInversions(vector<int>&a,int n){
return mergeSort(a,0,n-1); 
}
*/