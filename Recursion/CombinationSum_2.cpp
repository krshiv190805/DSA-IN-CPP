/*
this is a question in which we have to find the array
which sum up to target , also the main array contains duplicate
and the final answer should not contain an element more than once if it is 
not present in adequate amount in the main array
the last question which was CombinationSum_1.cpp
we can also do by this as to convert a list into a hash set
but TC would be multiplied by logN so interviewer will not be happy
so another approach:
to pick and not pick and reduce the target and find for this and 
make recursive calls

eg: 
arr[]={1 1 1 2 2} and target=4
code:
void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
if(target==0){
ans.push_back(ds);
return;
}
for(int i=ind;i<arr.size();i++){
if(i>ind && arr[i]==arr[i-1]) continue;
if(arr[i]>target) break;
ds.push_back(arr[i]);
findCombination(i+1,target-arr[i],arr,ans,ds);
ds.pop_back();
}
}
vector<vector<int>>combinatinSum2(vector<int>&candidates,int target){
sort(candidates.begin(),candidates.end());
vector<vector<int>>ans;
vector<int>ds;
findCombination(0,target,candidates,ans,ds);
return ans;
}
*/