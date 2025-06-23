/*
this is a question of sliding window in which you have to 
find the max points you can obtain from cards
arr[]={6 2 3 4 7 2 1 7 1} and k=4
you can take the numbers from front as well as back but not from the middle
but you have to take consecutive numbers
func(nums,k){
lsum=0,rsum=0,maxSum=0;
for(i=0->k-1) lsum=lsum+nums[i];//TC-O(K)
maxSum=lsum;
rindex=n-1;
for(i=k-1;i>=0;i--){//TC-O(K)
lsum=lsum-nums[i];
rsum=rsum+nums[rindex];
rindex--;
maxSum=max(maxSum,lsum+rsum);
}
return maxSum; //SC-O(1)
}
*/