/*
this is a good problem to understand tabulation and memoization
question is we have to return the min total energy used by the frog to reach from 1st to Nth stair

energy lost in the jump = abs(height[i-1]-abs[j-1])
i can either jump 1 or 2 steps at once

approach 1: 
in this at first we can see by using greedy approach but it will fail 
as we can see by the below example that this will not give us the min total energy
30 10 60 10 60 50
by greedy we will first go to 10 from 30 then to next 10 then to 50 last 
total is 60
but when we try to minimize it 
first from 30 to 60 then to next 60 then to 50
total is 40
We will use the same shortcut we discussed in the 1st Video

f(ind) {
if(ind==0) return 0;
left = f(ind-1) + abs(a[ind]-a[ind-1]);
if(ind>1); //then only the below one
right = f(ind-2) + abs(a[ind]-a[ind-2]); //this is recursion , now we will turn this to dp using memoization
return (left,right);
}

approach 2: 
f(ind) {
if(ind==0) return 0;
if(dp[ind] != -1) return dp[ind];
left = f(ind-1) + abs(a[ind]-a[ind-1]);
if(ind>1);
right = f(ind-2) + abs(a[ind]-a[ind-2]);
return dp[ind]=min(left,right);
}//TC-O(N) because there are N steps and SC-O(N)+O(N) recursive stack space + array space

code : 
int f(int ind,vector<int> & heights) {
if(ind==0) return 0;
if(dp[ind]!=-1) return dp[ind];
int left=f(ind-1,heights,dp) + abs(heights[ind]-heights[ind-1]);
int right=INT_MAX;
if(ind>1) right=f(ind-2,height,dp)+abs(heights[ind]-heights[ind-2]);
return dp[ind]=min(left,right);
}
int frogJump(int n,vector<int>&heights) {
vector<int>dp(n+1,-1);
return f(n-1,heights,dp);
}

approach 3: now we will be doing this using tabulation
code  : 
int frogJump(int n,vector<int>&heights) {
vector<int>dp(n,0);
dp[0]=0;
for(int i=1;i<n;i++) {
int fs=dp[i-1]+abs(heights[i]-heights[i-1]);
int ss=INT_MAX;
if(i>1) ss=dp[i-2]+abs(heights[i]-heights[i-2]);
dp[i]=min(fs,ss);
}
return dp[n-1]; //TC-O(N) and SC-O(N) 
}

approach 4: to reduce the N space 
NOTE: there always be a space optimization when there is index i-1 nd i-2
code : 
int frogJump(int n,vector<int>&heights) {
int prev=0;
int prev2=0;
for(int i=1;i<n;i++) {
int fs=prev+abs(heights[i]-heights[i-1]);
int ss=INT_MAX;
if(i>1) ss=prev2+abs(heights[i]-heights[i-2]);
int curi=min(fs,ss);
prev2=prev;
prev=curi;
}
return dp[n-1];
}
*/