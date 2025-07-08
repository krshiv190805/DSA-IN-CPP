/*
in this we have to merge intervals like eg:
(1,3),(2,6),(8,9),(9,11),(8,10),(2,4),(15,18),(16,17)
we will combine some of the starting intervals so it would become
(1,6),(8,11),(15,18)
approach:
first we should sort this and then think about the next approach
and check whether the second element of first pair is less than first element of next pair
if is it so then we can think upon merging these two after 
checking some more conditions
till now the code looks like :
vector<vector<int>>mergeOverlappingIntervals(vector<vector<int>>&arr){
int n=arr.size();
sort(arr.begin(),arr.end());
vector<vector<int>>ans;
for(int i=0;i<n;i++){
int start=arr[i][0];
int end=arr[i][1];
if(!ans.empty() && end<=ans.bac()[1]){
continue;
}
for(int j=i+1;j<n;j++){
  if(arr[j][0]<=end) end=max(end,arr[j][1]);
  else break;
}
  ans.push_back({start,end});
}
  return ans;//TC-O(NlogN+2N) one is for sorting the array and one is that you are traversing each element twice
}//SC-O(N)

after we optimised 2N
update code is : 
vector<vector<int>>mergeOverLappingIntervals(vector<vector<int>>&arr){
int n=arr.size();
sort(arr.begin(),arr.end());
vector<vector<int>>ans;
for(int i=0;i<n;i++){
if(ans.empty()|| arr[i][0]>ans.back()[1]) ans.push_back(arr[i]);
else ans.back()[1]=max(ans.back()[1],arr[i][1]);
}
return ans;TC-O(NlogN+N) , SC-O(N)
}
*/