/*
this is the question of the two sum
you have to return the indices of the numbers whose 
sum is equal to the target
for(i=0;i<n;i++){
for(j=0;j<n;j++){//TC-O(N*N)
if(i==j) continue;
if(arr[i]+arr[j]==target){
write in your own way to return i,j
}
}
}
optimisation of above code: 
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){//TC-O(N*N)
if(arr[i]+arr[j]==target){
write in your own way to return i,j
}
}
}
Next method would be of Hashing to reduce TC
code: 
vector<int>twoSum(vector<int>&nums,int target){
map<int,int>mpp;//TC-O(N*logN) for traversal and map ,SC-O(N) to store the Map
int n=nums.size();
for(int i=0;i<n;i++){
int num=nums[i];
int moreNeeded=target-num;
if(mpp.find(moreNeeded)!=mpp.end()){
return {mpp[moreNeeded],i};
}
mpp[num]=i;
}
return {-1,-1};
}

Optimal Approach: Two pointer Approach
code: 
string read(int n,vector<int>book,int target){
int left=0,right=n-1;//TC-O(N)+O(NlogN) and SC-O(1)
sort(book.begin,book.end());
while(left<right){
int sum=book[left]+book[right];
if(sum==target){
return "YES";
}
else if(sum<target) left++;
else right--;
}
return "NO";//QUestion was different than leetcode but have to solve in the same way
}
*/