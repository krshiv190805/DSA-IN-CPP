/*
in this question we have to solve the follow up of the last question which was frog jump of only 1 or 2 jumps
but here it can be at most k jumps like it can be 1 or 2 or 3 or ... k

approach : 
the same method like we will break them into indices 
and will write a code for all the combined steps

code : 
f(ind) {
if(ind == 0) return 0;
minSteps=INT_MAX;
for(j=1 ; j <= k ; j++) {
jump = f(ind-j) + abs(a[ind]-a[ind-j]);
minSteps=min(minSteps,jump);
}
return minSteps;
} //TC- O(N*K) and SC-O(N)+O(N) for memoization + recursive stack space

now it's time to optimise

approach 2: tabulation
int dp[n];
dp[0]=0;
for(i=1 ; i < n ; i++) {
minSteps=INT_MAX;
for(j=1;j<=k;j++) {
if(i-j>=0) {
jump= dp[i-j] + abs(a[ind]-a[ind-j]);
minSteps=min(minSteps,jump);
}
dp[i]=minSteps;
}
print(dp[n-1]); //TC-O(N*k) and SC-O(N) the recursive stack space is removed now
}
again we will try to optimise the space 

approach 3: we will use the same prev and prev2 , curi method 
again use a for loop and do it on your own 
the curi will be update for every i as well as prev and prev2
TC-O(N) and SC-O(1)
*/