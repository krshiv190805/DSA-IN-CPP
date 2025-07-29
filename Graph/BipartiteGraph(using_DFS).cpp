/*
in this question we have to tell whether the graph is bipartite or not
it means:
1) it should have even length cycle 
2) the whole graph can be coloured using 2 colours and no 2 adjacent colours are same
approach:
 we would be using DFS and checking every neighbour node of each node
 using adjacency list and starting node can be anyone in the whole graph , here it is 1
 code:
 bool dfs(int node,int color[],vector<int>adj[]){
 color[node]=col;
 for(auto it: adj[node]){
 if(color[it]==-1) if((dfs(it,!col,color,adj)==false) return false;
 else if(color[it]==col) return false;
 }
 return true;
 }
 bool isBipartite(int V,vector<int>adj[]){
 int color[V];
 for(int i=0;i<V;i++) color[i]=-1;
 for(int i=0;i<V;i++){
 if(color[i]==-1){
 if(dfs(i,0,color,adj)==false) return false;
 }
 }
 return true;//TC-O(V+2E) for traversing each node and SC-O(V) for color array
 }

*/