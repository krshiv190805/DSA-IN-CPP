/*
in this we have to sort this graph
and the graph should be DAG(dirrected acyclic graph)
because when there is not directed then we can't tell that it is 1->2 or 2->1
and acyclic condition is necessary because when there is a cycle 
the last node again points to the first Node so 1->3 in starting then at the end 3->1
Sorting : 
we have to sort in such manner that like there is 5->4 and then 4->1
4 should come after 5 in the final sorted array and also 1 should come after 4 ( 5 4 1)
approach : 
we will use DFS to traverse using adjacency list and will put it into stack
code : 
// function to return list containting vertices in topo order
vector<int>toposort(int V,vector<int>adj[]){
int vis[V]={0};
stack<int>st;
for(auto it : )
}
*/