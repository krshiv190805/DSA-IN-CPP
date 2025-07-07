/*
this is the question in which we have to find
number of pairs in which
i<j && a[i]>2*a[j] in an arr[]={40 25 19 12 9 6 2}
brute: code:
int cnt=0;
for(i=0->n-1){
for(j=i+1->n-1){
if(a[i]>2*a[j]) cnt++;  TC-O(N^2) and SC-O(1)
}
}

now the better code : 
we will be using merge sort in this to optimise TC
code: 
void merge(vector<int>&arr,int low,int mid,int high){
vector<int>temp;
int left=low;
int right=mid+1;
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
for(int i=low;i<=high;i++){
arr[i]=temp[i-low];
}
}
int countPairs(vector<int>&arr,int low,int mid,int high){
int right=mid+1;
int cnt=0;
for(int i=low;i<=mid;i++){
while(right<=high && arr[i]>2*arr[right]) right++;
cnt+=(right-(mid+1));
}
return cnt;
}
int mergeSort(vector<int>&arr,int low,int high){
int cnt=0;
int (low<=high) return;
int mid=(low+high)/2;
cnt+=mergeSort(arr,low,mid);
mergeSort(arr,mid+1,high);
cnt+=countPairs(arr,low,mid,high);
merge(arr,low,mid,high);
return cnt;
}
int team(vector<int>&skill,int n){
mergeSort(skill,0,n-1);
return cnt; TC-logn*(n+n) , [log n is for division and then first n is for merge operation and second n for you visit each element once like the merge sort algo]
}//SC-O(N)[for the merge, if the interviewer is not happy with the distortion of the array take another array and solve it]
*/