/*
 this is a question in which you have return the sum of all subarrays in
 sorted order means 
 eg:
 arr[]={3 1 2}
 subarrays: total it would be 8(2^n)
{},3,1,2,(3 1),(3 2),(1 2),(3 1 2)
now you have to return the sum of each individual array in sorted 
order , ans={0 1 2 3 3 4 5 6}
approach: we will use the same pick and not picking technique and move
the index after each action 

TC-O(2^N+2^Nlog(2^N)) one for picking and not picking
and the other one is for sorting the space(which consist of 2^N integers)
and SC-O(2^N)
code: 
void func(int ind,int sum,vector<int>&arr,int N,vector<int>&sumSubset){
if(ind==N){
sumSubset.push_back(sum);
return;
}
//pick the element
func(ind+1,sum+arr[ind],arr,N.sumSubset);
//Do-not pick the element
func(ind+1,sum,arr,N,sumSubset);
}
vector<int>subsetSums(vector<int>arr,int N){
vector<int>sumSubset;
func(0,0,arr,N,sumSubset);
sort(sumSubset.begin(),sumSubset.end());
return sumSubset;
}
*/