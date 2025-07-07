/*
in this we have to find number of provinces
it means in a graph from one node we can move to 
another node and come back is counted as one province(the whole graph)
 so we have to tell the total number of provinces
 eg: 1-2-3 , 4-5-6, 7-8 so total provinces =3
 approach: 
 start=1,4,7 for different graph , you can also start
 from different nodes
 we will use a vis[] array initialising all index with 0
 then making it 1 when we visit it
 and also use the bfs/dfs algorithm

code:
void dfs(int node,vector<int>adjLs[],int vis[]){//TC-O(N)+O(V+2E), making a dfs call for all the n nodes so
vis[node]=1;//outer loop is for O(N) and it runs throughout the entire journey for dfs time so O(V+2E)
for(auto it:adjLs[node]){
if(!vis[it]) dfs(it,adjLs,vis);
}
}
int numProvinces(vector<vector<int>>adj,int v){
vector<int>adjLs[v];
for(int i=0;i<v;i++){//to change adjacency matrix to list
for(int j=0;j<v;j++){
if(adj[i][j]==1 && i!=j){
adjLs[i].push_back(j);
adjLs[j].push_back(i);
  }
  }
 }
int vis[v]={0};
int cnt=0;
for(int i=0;i<v;i++){
if(!vis[i]){
cnt++;
dfs(i,adjLs,vis);
}
}
return cnt;//SC-O(N)+O(N) , a visited array and a recursion stack space
}
*/