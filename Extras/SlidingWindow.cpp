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
 Imp: Second method:
this is basically a two pointer methdo
l=0,r=0,sum=0,maxlen=0;
while(r<n){ //you can also do if instead of this then TC-O(N) instead of 2N
sum+=arr[r];
while(sum>k){
sum-=arr[l];
l=l+1;
}
if(sum<=k) maxlen=max(maxlen,r-l+1);
r=r+1;
}//SC-O(1)
print(maxlen);//TC-O(N+N)[shrinking of the array and taking all the elements while traversing]

3)number of subarrays where (using pattern 2)

number of subarray with sum=k , to calculate this we will solve two sub problems and subtract
their result to 
(number of subarrays where sum<=k)==x
(number of subarrays where sum<=(k-1))==y
final answer would be (x-y)

4)shortest or minimum window
*/ 

 return 0;