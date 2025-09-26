/*
in this we have to return the count of subarrays with sum=k 
we have done this type to question which was count total subarrays with sum=k
eg:
arr[]=[1 0 1 0 1], goal=2
approach: 
we have done hashing as the optimal approach in earlier question but here 
we would be using two pointer or sliding window
1) approach: 
first we used two pointer keeping l=0 r=1;
then increasing r till it doesn't add up to goal
then at some point for the above case l=1 and r=6
then the sum is still equal to goal then we don't have idea which to move further or backwards (l or r)
here is the problem we are facing 
2)approach:
first we would be finding no of subarrays with sum<=goal
and then <=goal-1
then subtracting them will give us the answer
and keeping a count of all the subarrays from l to r
like for <=goal 
here it is initially 0 and then 1+2+3+4 but here are some intervals that are taken twice or more than that
so to remove that we are doing goal-1
code:
func(list<int>nums,goal){
if(goal<0) return 0;
 l=0,r=0,sum=0,cnt=0;
 while(r<=nums.size()){//O(N)
 sum+=nums[r];
 while(sum>goal){//O(N) for the worst case , so in total TC-2*O(2N)-since we are calling for goal and goal-1 and SC-O(1)
 sum=sum-nums[l];
 l++;
 }
 cnt=cnt+(r-l+1);
 r++;
 }
 }
*/