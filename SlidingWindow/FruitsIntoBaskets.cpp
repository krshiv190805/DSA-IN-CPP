/*
this is a question in which we have to return the max length of subarray
which consist of only two unique elements
arr[]={ 3 3 3 1 2 1 1 2 3 3 4}
approach: 
we can use set but problem is for the TC
code:
maxlen=0;
for(i=0->n){//TC-O(N*N),SC-O(3) as it is only storing 3 integers finally in it due to uniqueness
set<int>st;
for(j=i->n){
st.add(arr[j]);//addition of something into set takes logN time 
if(st.size()<=2) maxlen=max(maxlen,j-i+1);
else break;
}
}

approach: 
now we will use two pointer approach
arr[]={3 3 3 1 2 1 1 2 3 3 4}
we will use a map ds <num,freq> 
now we will push num and its number of occurance in the particular length which 
we are going to consider suppose it is from l to r 
so occurance only between l and r
code for this:
func(arr){
l=0,r=0,maxlen=0,mpp
while(r<arr.size()){//TC-O(2N) now we have to optimise this ,also SC-O(3)
mpp[arr[r]]++;
if(mpp.size()>k){
while(mpp.size()>k){
mpp[arr[l]]--;
if(mpp[arr[l]]==0) mpp.erase(arr[l]);
l++;
}
}
if(mpp.size()<=k) maxlen=max(maxlen,r-l+1);
right++;
}
return maxlen;
}

optimised code for O(N):
func(arr){
l=0,r=0,maxlen=0,mpp//TC-O(N) and SC-O(1)
while(r<n){
mpp[arr[r]]++
if(mpp.size()>k){
mpp[arr[l]]--;
if(mpp[arr[l]]==0) mpp.erase(mpp[arr[l]]);
l++;
}
if(mpp.size()<=k) maxlen=max(maxlen,r-l+1);
r++;
}
return maxlen;
}
*/