/* we have example of an array= {3,1,-2,-5,2,-4};
now we have to rearrange this in order to get an array like this {3,-2,1,-5,2,-4}
brute force sol:
we will take two array , one positive and one for negative
pos={3,1,2}, neg={-2,-5,-4} both will take N/2 space respectively
like 3 will come at 0 , 1 will at 2, 2 will be at 4 in the final rearranged array
in the same way -2,-5,-4 will be at 1,3,5 index in the final array
code :for(int i=0;i<n/2;i++){
arr[2*i]=pos[i];
arr[2*i+1]=neg[i]; (TC will be O(N)+O(N/2) and space will be O(N))
}
2) optimal 
now we have to do this in O(N) TC
by taking two kind of pointers and moving it by two positions and returning the ans
code :
vector<int>reArrangearray(vector<int>&nums){
int n=nums.size();
vector<int>ans(n,0);
int posIndex=0,int negIndex=1;
for(int i=0;i<n;i++){
if(nums[i]<0){
ans[negIndex]=nums[i];
negIndex +=2;
}
else {
ans[posIndex]=nums[i];
posIndex+=2;
}
}
return ans;
}

NOTE:: new question 
now we don't have equal number of negative and positive numbers in array, and also to arrange extra elements in the same order in the final array
1) pos>neg{-1,2,3,4,-3,1}
now to solve this 
do the same till it becomes pos=neg
then for pos>neg
for(index=neg.size,i<pos.size,i++){
arr[index]=pos[i];
index++;
}
code:
vector<int>alternateNumber(<vector<int>&a){
vector<int>pos,neg;
int n=a.size();
for(int i=0;i<n,i++){
if(a[i]>0){
pos.push_back(a[i]);
}
else 
neg.push_back(a[i]);
}
if(pos.size>neg.size){
for(int i=0;i<neg.size(),i++){
  a[2*i]=pos[i];
  a[2*i+1]=neg[i];
}
int index=neg.size()*2;//we will start after this index for filling of extra elements
for(int i=neg.size(),i<pos.size(),i++){
a[index]=pos[i];
index++;
}
}
else{
for(int i=0;i<pos.size(),i++){
  a[2*i]=pos[i];
  a[2*i+1]=neg[i];
}
int index=pos.size()*2;//we will start after this index for filling of extra elements
for(int i=pos.size(),i<neg.size(),i++){
a[index]=neg[i];
index++;
}
}
return a;//Tc-> O(N){for all positive and negatives}+O(min(pos,neg))+O(leftovers)
}// worst will be when both pos and neg will be but leftovers will be N, so Tc will be O(N)+O(0)+O(N) so O(2N)
and good will be when both are equal to n/2 and O(n/2)
and leftovers are zero and space complexity will be O(N)
*/