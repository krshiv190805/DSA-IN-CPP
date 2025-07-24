/*
in this we will be returning a 2D matrix whose cells are nearest distance to 1 from itself 
1) if there is 1 then 0 is least distance to 1 
2) else if a diagonally 1 present then go row,col wise
approach: 
we would be taking a vis array , distance array and then mark visited a particular cell 
after marking its distance in the distance array
and also taking a queue and pushing each cell with its (i,j) 
and then updating its distance
IMP:
we would be writing all four upper lower left and right element traversal
using dx and dy method which you can find in the code 
code: 
vector<vector<int>>nearest(vector<vector<int>>grid){
int n=grid.size();
int m=grid[0].size();
vector<vector<int>>vis(n,vector<int>(m,0));//SC-O(N*M)
vector<vector<int>>dist(n,vector<int>(m,0));//SC-O(N*M)
queue<pair<pair<int,int>,int>>q;
for(int i=0;i<n;i++){
 for(int j=0;j<m;j++){
 if(grid[i][j]==1){
 q.push({{i,j},0});
 vis[i][j]=1;
 }
 else vis[i][j]=0;
 }//TC-O(N*M) over here
 }
 while(!q.empty()){//TC-O(N*M*4),SC-O(N*M)
 int row=q.front().first.first;
 int col=q.front().first.second;
 int steps=q.front().second;
 q.pop();
 dist[row][col]=steps;
 for(int i=0;i<4;i++){
 int nrow=row+delrow[i];
 int ncol=col+delcol[i];
 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
 vis[nrow][ncol]=1;
 q.push({{nrow,ncol},steps+1});
 }
 }
 }
 return dist;
}// we can also do using the grid array
*/