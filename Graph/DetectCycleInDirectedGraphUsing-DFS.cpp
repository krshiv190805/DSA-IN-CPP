/*
in this we have to tell whether it has cycle or not it may have a cycle if it is
not directed but due to its directive nature it doesn't have or may be 
we have previously done this but not for directed graph
approach:
we would be taking two arrays one is visited and anoter would be pathvisited initialised with 0 for all indexes
and if at any point the node is visited but not visited then we will be returning false

code:
bool dfsCheck(int node,vector<int>adj[],int vis[],int pathVis[]){
 vis[node]=1;
 pathVis[node]=1;
 //traverse for adjacent nodes
 for(auto it : adj[node]){
 //when the node is not visited
 if(!vis[it]){
 if(dfs(it,adj,vis,pathVis)==true) return true;
 }
 //if the node has been previously visited
 //but it has to be visited on the same path
 else if(pathVis[it]) return true;
 }
 pathVis[node]=0;
 return false;
 }
 //function to detect cycle in a directed graph
 bool isCyclic(int V,vector<int>adj[]){
 int vis[V]={0};
 int pathVis[V]={0};
 for(int i=0;i<V;i++){
 if(!vis[i]){
 if(dfsCheck(i,adj,vis,pathVis)==true) return true;
 }
 }
 return false;//TC-O(V+E) since it is a directed graph so traversing only once 
 }//SC-O(2N) since we are using two arrays , one is pathvis and another is vis 
 IMP: we can also use single array to reduce 2N to N , as we can take vis as 1 and pathVis as 2
*/