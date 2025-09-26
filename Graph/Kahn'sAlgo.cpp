/*
in this question we are showing topological sort but by BFS
earlier in topological sort we have done using DFS
Approach : 
insert all nodes with indegree 0 and take them out of the queue

code : 
vector<int>topoSort(int V,vector<int> adj[]) {
int indegree[V]={0};
for(int i=0;i<V;i++) {
for(auto it : adj[i]){
indegree[it]++;
}
}
queue<int>q;
for(int i=0;i<V;i++) {
if(indegree[i]==0) q.push(i);
}
vector<int>topo; // for returning the answer
TC-O(V+E)
while(!q.empty()){
int node=q.front();
q.pop();
top.push_back(node);
//node is in your topo sort
// so please remove it from the indegree
for(auto it : adj[node]){
indegree[it]--;
if(indegree[it]==0) q.push(it);
}
}
return topo;
}
*/