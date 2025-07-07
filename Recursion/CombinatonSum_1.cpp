/*
this is a question in which we have to find the combinatio sum 
means you have to return all the arrays which sum upto the target
and in this we will use the pick or non pick approach
eg: 
TC-
arr[]={2 3 6 7} and target sum=7
code:
void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
if(ind==arr.size()){
if(target==0) ans.push_back(ds);
return ;
}
//pick up the element
if(arr[ind]<=target){
ds.push_back(arr[ind]);
findCombination(ind,target-arr[ind],arr,ans,ds);
ds.pop_back();
}
findCombination(ind+1,target,arr,ans,ds);
}
vector<vector<int>>combinationSum(vector<int>&candidates,int target){
vector<vector<int>>ans;
vector<int>ds;
findCombination(0,target,candidates,ans,ds);
return ans;
}
*/
