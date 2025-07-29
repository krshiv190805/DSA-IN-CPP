/*
this is same question like the other bipartite one just we are using BFS here instead of DFS
approach:
a bfs algo require a queue ds , so we will be using that
and a color array with all values to be initialised with -1
and then while traversing we will check each neighbours and mark them 0 and 1 accordingly
code:
//colors a 
bool check(int start,int V,vector<int>adj[]){
 queue<int>q;
 q.push(start);
 color[start]=0;
 while(!q.empty()){
 int node=q.front();
 q.pop();
 for(auto it:adj[node]){
 //if the adjacent node is yet not coloured
 //you will give the opposite colour of the node
 if(color[it]==-1){
 color[it]=!color[node];
 q.push(it);
 }
 //is the adjacent guy having the same colour
 //someone did color it on some other path
 else if(color[it]==color[node]) return false;
 }
 }
 return true;
 }
 bool isBipartite(int V,vector<int>adj[]){
 int color[V];
 for(int i=0;i<V;i++) color[i]=-1;
 //O(N)+O(N), the final TC and SC is same as of the BFS algo so tally from there 
 for(int i=0;i<V;i++){
 if(color[i]==-1){
 if(check(i,V,adj,color)==false){
 return false;
 }
 } 
 }
 return true;
 }
*/