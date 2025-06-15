#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
this is dynamic programming
tabulation and memoization
memoization is tend to store the value 
of sub problems in some map/table
 it basically means in easy language
 that when we will draw the recursive tree , so we will be calling 
 f(2) , f(1) , f(0) or any other
 so many times by memoization we don't have to call it again and again
 rather store it somewhere and then use it later
 for eg F(5) in fibonnaci series
 earlier it was O(2^n) and after memo.. it reduced to only 6 calls rather than 
 15 calls earlier by tree
 now it is O(N)
2)now we will show tabulation
tabulation code:
int fib(int n){
if(n<=1) return n;
F[0]=0;F[1]=1;
for(int i=2;i<=n;i++){
F[i]=f[i-1]+f[i-2];
}
return F[n];
//striver starts from here
int f(int n,vector<int>&dp){ (TC-O(N) + SC-O(N)+O(N-array)) 
if(n<=1) return n;
if(dp[n]!=-1) return dp[n];
return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main(){
int n;
cin>>n;
vector<int>dp(n+1,-1);
cout<<f(n,dp);
return 0;
}
}
//tabulation by striver
dp[n+1] (TC-O(N) , SC-O(N))
dp[0]=0, dp[1]=1
for(int i=2;i<=n;i++){
dp[i]=dp[i-1]+dp[i-2];
//now if we have to optimise the space complexity then 
int n; (TC-O(N) and SC-O(1))
cin>>n;
int prev2=0;
int prev=1;
for(int i=2;i<=n;i++){
int curi=prev+prev2;
prev2=prev;
prev=curi;
}
cout<<prev;
return 0;
}
    */
 return 0;
}