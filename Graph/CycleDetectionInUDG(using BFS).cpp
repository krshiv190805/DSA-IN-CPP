/*
in this question we have to determine whether there is a cycle or not in a graph
first we will use adjacency list(means store all the neighbours of a particular node)
example graph
1-2,3
2-1,5
3-1,4,6
4-3
5-2,7
6-3,7
7-5,6
approach : 
we would be taking a queue and store (1,-1) and a vis array initialised all elements with 0 value
and then we would be visiting neighbours of 1 and pushing them into queue with their parent node neighbours
like 1 has 2 neighbours 2,3 , so we'll be writing as 2,1 and 3,1
and pushing them in the queue and also marking 2,3 as 1 in the vis array
and poping them out of the queue after we checked neighbours of 2 and 3 
basically we are checking if a particular node is neighbours of 2 for the last case
means suppose a node is already visited once and marked as 1 then it is again being visited then
it shows there is a cycle
also there is one thing that we have to check if there is connected components as there is cycle in one part of the whole graph
then we have to optimise for that as well
   1        5-6   7
  / \            / \
  3  2-4         8-9
  for the above one code is : 
  for(i=1;i<=N;i++){
  if(!vis[i]){
  if(detectCycle(i)==true) return true;
  }
  }
  return true;
code:
bool detectCycle(int src, vector<int>adj[],int vis[]){
vis[src]=1;
queue<pair<int,int>>q;
q.push({src,-1});
while(!q.empty()){
int node=q.front().first;
int parent=q.front().second;
q.pop();
for(auto adjacentNode:adj[node]){
if(!vis[adjacentNode]){
vis[adjacentNode]=1;
q.push({adjacentNode,node});
}
else if(parent!=adjacentNode) return true;
}
}
return false;
}
bool isCycle(int V,vector<int>adj[]){
int vis[V]={0};
for(int i=0;i<V;i++){
if(!vis[i]) if(detect(i,adj,vis)) return true;
}
return false;//TC-O(N+2E)+O(N),summation adjacent=sumation degree=2E
}//SC-O(N)+O(N)~O(N)
*/