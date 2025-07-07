/*
in this we have to find the contiguous array which has maximum sum and
should contain atleast one element 
arr[]={-2 -3 4 -1 -2 1 5 -3}
brute code: 
maxi=INT_MIN;//TC-O(N^3) and SC-O(1)
for(int i=0;i<n;i++){
for(j=1;j<n;j++){
sum=0;
for(k=i->j) {
sum+=arr[k];
maxi=max(sum,maxi);
}
}
}

better code: we don't have to run the third loop instead we can
write like this 

maxi=INT_MIN;
for(i=0;i<n;i++){//TC-O(N^2) and SC-O(1)
sum=0;
for(j=i;j<n;j++){
sum+=arr[j];
maxi=max(sum,maxi);
}
}

now the optimal code : 
just one thing to be taken care of that if array consist of 
all the negative elements then return the smallest element as summation of all 
neg numbers would be much less than the largest neg number

long long maxSubarraySum(int arr[],int n){
long long sum=0,maxi=LONG_MIN;
for(int i=0;i<n;i++){//TC-O(N) and SC-O(1)
sum+=arr[i];
if(sum>maxi){
maxi=sum;
}
if(sum<0) sum=0;
}
return maxi;
}
*/