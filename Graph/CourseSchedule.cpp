/*
in this question we have to tell that basically is there a cycle or not
using topo sort, and this question means
if there is an edge from 1->2 you should have done 1 before 2
if it's written like this 1,0 then
0 should be done before 1 
but if there is an cyclic dependency , then it is not possible 
to answer YES for this
as the last node again points to the first node 
Approach : 
we can use BFS as well as topo sort , or we can use DFS as mentioned in the previous video which was
 using DFS

 code : 
 bool isPossible(int V,vector<pair<int,int>&prerequisites) {
 vector<int>adj[V]; //no of vertices
 for(auto it : prerequisites){ // prerequisites was mentioned in the question
 adj[it.first].push_back(it.second);
 }
 int indegree[V]={0};
 for(int i=0;i<V;i++) {
 for(auto it : adj[i]){
    indegree[it]++;
 }
 }
 queue<int>q;
 for(int i=0;i<V;i++){
 if(indegree[i]==0) q.push(i);
 }
 vector<int>topo;
 while(!q.empty()){
 int node=q.front();
  q.pop();
  topo.push_back(node);
  //node is in your topo sort 
  //so please remove it from the indegree
  for(auto it : adj[node]){
  indegree[it]-;
  if(indegree[it]==0) q.push(it);
  }
 }
  if(topo.size()==V) return true;
  else return false;
 }

*/