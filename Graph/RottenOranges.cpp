/*
this is question of rotten oranges in which you are given 
2D array in which you have to tell the min time in which 
all the fresh oranges will be rotten 
the rotten oranges are initially rotten and numbered 2
and fresh one is marked 1 and 0 but only we have to make 1 as rotten
approach:
eg 
arr[]={0 1 2}{0 1 2}{2 1 1}
in this example it would take 2 seconds in total
remeber every cell of number 2 will start altogether
so in all it would be considered as 1 second only
we would be using BFS algo as it easy to travel level wise
if we will use DFS then we have to go to the depth irrespective
of there are fresh oranges or not(too much time taking and we have to find the minimum one)
Now we will be taking a queue(that's how BFS algo is made)
first we will take a pair wise thing and another pair inside
inner one will store row,col and another would be storing time 
and we will keep pushing inside all and taking a vis-2D array
and mark every orange which is rotten and now going to be rot


TC-at first we are running a loop so O(n*m), suppose the queue will run as all the oranges are fresh so O(n*m)
and for every node we are running it for 4 times so 4*O(n*m) so in total O(N*M)
SC-O(N*M)+O(N*M) , one would be for visited array and another is for N*M oranges to rotten
code:
int arrangeRotting(vector<vector<int>>&grid){
int n=grid.size();
int m=gird[0].size();
//{{r,c},t}
queue<pair<pair<int,int>,int>>q;
int vis[n][m]; //use array instead of vector otherwise you have to define this whole thing
int cntFresh=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(grid[i][j]==2){
q.push({{i,j},0});
vis[i][j]=2;
}
else vis[i][j]=0;
if(grid[i][j]==1) cntFresh++;
}
}
int tm=0;
int drow[]={-1,0,+1,0};
int dcol[]={0,1,0,-1};
int cnt=0;
while(!q.empty()){
int r=q.front().first.first;
int c=q.front().first.second;
int t=q.front().second;
tm=max(tm,t);
q.pop();
for(int i=0;i<4;i++){
int nrow=r+drow[i];
int ncol=c+dcol[i];
if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
q.push({{nrow,ncol},t+1});
vis[nrow][ncol]=2;
cnt++;
}
}
}
if(cnt!=cntFresh) return -1;
return tm;
}

*/