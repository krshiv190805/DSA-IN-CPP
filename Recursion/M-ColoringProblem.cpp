/*
in this question we have to tell whether to colour the graph using atmost M colours 
is possible or not , also that no two adjacent vertices of the graph should be same coloured
we have to print 1 if its possible or else 0
approach:
first we will use the same approach the pick or not pick in a particular graph
and then try all possible combinations(that adjacent node colour should not be same as mine)
0-3
|\| 
2-1
code: 

bool isSafe(int node,int color[],bool graph[101][101],int n,int col){
for(int k=0;k<n;k++){
if(K!=node && graph[k][node]==1 && color[k]==col) return false;
}
return true;
}
bool solve(int node,int color[],int m,int N,bool graph[101][101]){
if(node==N) return true;
for(int i=1;i<=m;i++){
if(isSafe(node,color,graph,N,i)){
color[node]=i;
if(solve(node+1,color,m,N,graph)) return true;
color[node]=0;
}
}
return false;
}
//Function to determine if graph can be coloured with at most M colours such that
//no two adjacent vertices of graph are coloured with same colour
bool graphColoring(bool graph[101][101],int m,int N){
int color[N]={0};
if(solve(0,color,m,N,graph)) return true;
return false;
} //TC-O(M^N) since for every node there are M colours , so M*M*....
 //SC-O(N)+O(N) , first is using a color array to color it and second one is auxillary space or depth of recursive tree
*/