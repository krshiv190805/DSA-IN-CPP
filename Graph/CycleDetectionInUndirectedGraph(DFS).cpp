/*
in this question we have to tell whether there is a cycle or not 
using DFS , in last q it was BFS
adj list:
1-(2,3)
2-(1,5)
3-(1,4,6)
4-(3)
5-(2,7)
6-(3,7)
7-(5,6)
we will use the same kind of approach used in last BFS method
we will visit each node and check if it is visited or not and then mark it
and also we have to think about the edge case as same as in BFS
1-2-3   5    7
|       |   / \
4       6   8  9
in this case also we have to check for cycle[
for(i=1->9){
if(!vis[i]) dfs(i)==true;
return true;
}
]
code:
bool dfs(int node,int parent,vector<int>vis[],vector<int>adj[]){
 vis[node]=1;
 for(auto adjacentNode:adj[node]){
 if(!vis[adjacentNode]){
 if(dfs(adjacentNode,node,vis,adj)==true) return true;
 }
 else if(adjacentNode!=parent) return true;
 }
 return false;
}
 bool isCycle(int V,vector<int>adj[]){
 int vis[V]={0};
 for(int i=0;i<V;i++){
 if(!vis[i]) if(dfs(i,-1,vis,adj)==true) return true;
 }
return false;
 }//SC-O(N)+O(N)~O(N) , one is for recursive stack space like the graph is going straight downwards and another one is for visited array and we are not taking space consideration for  adjaceny list
//TC-O(N+2E)+O(N) , for every node you visit all the adjacent nodes and summation of all the nodes is N+2E, second one is due to for loop
but we are not multiplying since dfs is not called for 9 times 
it will only be called one time for each sub graph and it will ensure that every node is visited or not depending upon that
it will return true or false;
*/