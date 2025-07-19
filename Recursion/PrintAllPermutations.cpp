/*
in this question we have to print all the permutations of a particular
array/string 
approach 1: 
we will use the pick or not pick method and try to solve using this 
further drawing a recursive tree(n!= total permutations of a particular array)
and then we will be pushing each element in the data structure if it is picked
and no if it is not, also we will be taking a map and initialise it with 0
and then we will mark it as 1 if an element is picked or not or if it is traversed
code: 
TC-O(n!*n), one if for generating all permutations and one is for traverrsing the loop
SC-O(n)+O(n) , one is that you are storing in the map and other is for the depth of recursion tree(auxillary recursive stack space)

void recurPermute(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[]){
if(ds.size()==nums.size()){
ans.push_back(ds);
return;
}
for(int i=0;i<nums.size();i++){
if(!freq[i]){
ds.push_back(nums[i])'
freq[i]=1;
recurPermute(ds,nums,ans,freq);
freq[i]=0;
ds.pop_back();
}
}
}
vector<vector<int>>permute(vector<int>&nums){
vector<vector<int>>ans;
vector<int>ds;
int freq[nums.size()]={0};
recurPermute(ds,nums,ans,freq);
return ans;
}
// this is of using so much space for storing another data structure or map
so we would be using another approach
approach 2:
we will be using swapping here
suppose we took index 0
so there are three possibilites
swap with 0 or with 1 or 2 index number(for this particular exmaple)
and then again next recursive tree
code:
TC-O(n!*n) same here also,one is for generating all permutations and

code:
void recurPermute(int index,vector<int>&nums,vector<vector<int>>&ans){
if(index==nums.size()){
ans.push_back(nums);
return;
}
for(int i=index;i<nums.size();i++){
swap(nums[index],nums[i]);
recurPermute(index+1,nums,ans);
swap(nums[index],nums[i]);
}
}
vector<vector<int>>permute(vector<int>&nums){
vector<vector<int>>ans;
recurPermute(0,nums,ans);
return ans;
}
*/
