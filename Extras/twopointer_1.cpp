#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
sliding window and two pointer
1)constant window
if there is a constant window then everything is fixed 
for eg:
arr[]={-1 2 3 3 4 5 -1}
u can get the max sum from running the loop from
l->r

k=4;
l=0,r=k-1;
while(r<n-1){
sum=sum-arr[l];
l++;
r++;
sum+=arr[r];
maxSum=max(maxSUm,sum);
}
2)longest subarray/substring
with sum<=k
:
maxlen=0;
for(i=0->n-1)
{
sum=0;
for(j=i->n-1){
sum=sum+arr[j];
if(sum<=k)
maxlen=max(maxlen,j-i+1);
else if(sum>K) break;
}
}
print max len;//TC-O(N^2) and SC-O(1)
*/
 return 0;
}