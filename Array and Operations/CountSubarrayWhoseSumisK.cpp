/*
this is the same kind of question in which you have to tell the number 
of subarrays with sum = k/target(basically count)
brute approach:
three loops we are going to run and after second 
we will initialise sum =0 and third loop will run from k=i->j
and sum+=arr[k];
but this is of O(N^3) complexity so to reduce this
we will use better approach

 better : 
 we will only use two loops and after the first we will put sum=0
 and then sum+=arr[j] and check if it is equal to the target then 
 cnt++, but this is also of O(N^2) complexity
 now we will use the optimal approach 

 optimal approach:
 we will use the prefix Sum approach which is already discussed as a previous
 question in video
 basically 
 if we want the target sum to find in the array(suppose K)
 and we know some part of it sum to x 
 then we should find array of sum k-x
 it makes it easy as we are starting from 0 index, we will use 
 hash map in this
 now code: 
 //TC-O(NlogN) as we are using ordered map , but if you use unordered map it will use O(1) but end up taking O(N) in its worst case
//SC-O(N) as it might that all prefix sums are stored in the map so O(N)
 int findAllSubarraysWithGivenSum(vector<int>&arr,int k){
map<int,int>mpp;
mpp[0]=1;
int preSum=0,cnt=0;
for(int i=0;i<arr.size();i++){
preSum+=arr[i];
int remove=preSum-k;
cnt+=mpp[remove];
mpp[preSum]+=1;
}
return cnt;
}
*/