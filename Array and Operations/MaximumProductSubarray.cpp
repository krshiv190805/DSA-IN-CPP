/*
in this question we have to return the maximum product of subarray 
eg:
arr[]=[2 3 -2 4], ans=6
brute approach: 
we would be generating all subarrays and then checking for max product
code:
maxi=INT_MIN;
for(i=0;i<n;i++){
for(j=i;j<n;j++){
prod=1;
for(k=i->j) prod=prod*arr[k];
maxi=max(maxi,prod);
}
}
problem is this will lead to TC-O(N^3)

better approach:
code:
 maxi=INT_MIN;
 for(int i=0;i<n;i++){
 for(j=i;j<n;j++){
 prod=prod*arr[j];
 maxi=max(maxi,prod);
 }
 }
 TC-O(N^2) and SC-O(1)

 now we are going for the optimal approach:
 4 cases are there:
 1)if all are positive
 2) even negative,rest are positive
 3) odd negative
 4) if there is one or many zeroes
 we would be calculating the product from 0 index till last and keep updating the max prod
 same for suffix product(from back->n-1)
 code:
 int subarrayWithMaxProduct(vector<int>&arr){
 int pre=1,suff=1;
 int ans=INT_MIN;
 int n=arr.size();
 for(int i=0;i<n;i++){
 if(pre==0) pre=1;
 if(suff=0) suff=1;
 pre=pre*arr[i];
 suff=suff*arr[n-1-i];
 ans=max(ans,max(pre,suff));
 }
 return ans;
 }//TC-O(N) and SC-O(1)
 
*/