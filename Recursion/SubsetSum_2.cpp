/*
this is the same question as _1.cpp was in which we have to return the subsets
also the solution set must not contain duplicate subsets, return the sol in any order
eg:
arr[]={1 2 2}
output: {[],[1],[2],[1,2],[1,2,2],[2,2]}
approach: 
we will use the pick and not picking approach
pick an element and move to the next index and again use the same approach
the i will be from index to n-1
code:
//TC-O(2^n * n) for total subsets generation and then 
//SC-O(2^n)*O(k)
code:
void findSubsets(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>ans){
ans.push_back(ds);
for(int i=ind;i<nums.size();i++){
if(i!=ind && nums[i]==nums[i-1]) continue;
ds.push_back(nums[i]);
findSubsets(i+1,nums,ds,ans);
ds.pop_back();
}
}
vector<vector<int>>subsetsWithDup(vector<int>&nums){
vector<vector<int>>ans;
vector<int>ds;
sort(nums.begin(),nums.end());
findSubsets(0,nums,ds,ans);
return ans;
}
*/