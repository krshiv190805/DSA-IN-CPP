/*
in this question there is a rat and a 2D matrix
you have to go to the (n-1,n-1) cell but you can only move D/L/R/U
also if a cell is 0 means it is blocked and if its 1 then the rat can travel 
through that cell 
TC-O(4^(n*m)) and SC-O(m*n)
approach: 
we will use the same pick and not pick method
like we will chose from DLRU or not and what we are choosing
maybe instead of chosing a particular direction we chose another one but it should contain 1 also
code:

void solve(int i,int j,vector<vector<int>>&a,int n,vector<string>&ans,string move,vector<vector<int>>&vis){
if(i==n-1 && j=n-1){
ans.push_back(move);
return;
}
//downward
if(i+1<n && !vis[i+1][j] && a[i+1][j]==1){
vis[i][j]=1;
solve(i+1,j,a,n,ans,move+'D',vis);
vis[i][j]=0;
}
//left
if(j-1>=0 && !vis[i][j-1] && a[i][j-1]==1){
vis[i][j]=1;
solve(i,j-1,a,n,ans,move+'L',vis);
vis[i][j]=0;
}
//right
if(j+1<n && !vis[i][j+1] && a[i][j+1]==1){
vis[i][j]=1;
solve(i,j+1,a,n,ans,move+'R',vis);
vis[i][j]=0;
}
//upward
if(i-1>=0 && !vis[i-1][j] && a[i-1][j]==1){
vis[i][j]=1;
solve(i-1,j,a,n,ans,move+'U',vis);
vis[i][j]=0;
}
}
vector<string>findPath(vector<vector<int>>&m,int n){
vector<string>ansl
vector<vector<int>>vis(n,vector<int>(n,0));
if(m[0][0]==1) solve(0,0,m,n,ans,"",vis);
return ans;
}


IMP: Do the below one in any interview
instead of writing four functions for different directions we can use del_i and del_j approach
and reduce functions writing and code as well
 as 
 D-L-R-U
 di[]={+1,0,0,-1}
 dj[]={0,-1,+1 0}, we can do i+di[ind] and j+dj[ind]
 these are major changes in row and column 
 code:

void solve(int i,int j,vector<vector<int>>&a,int n,vector<string>&ans,string move,vector<vector<int>>&vis,int di[],int dj[]){
if(i==n-1 && j==n-1){
ans.push_back(move);
return;
}
string dir="DLRU";
for(int ind=0;ind<4;ind++){
int nexti=i+di[ind];
int nextj=j+dj[ind];
if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && a[nexti][nextj]==1){
vis[i][j]=1;
solve(nexti,nextj,a,n,ans,move+dir[ind],vis,di,dj);
vis[i][j]=0;
}
}
}
vector<string>findPath(vector<vector<int>>&m,int n){
vector<string>ans;
vector<vector<int>>vis(n,vector<int>(n,0));
int di[]={+1,0,0,-1};
int dj[]={0,-1,1,0};
if(m[0][0]==1) solve(0,0,m,n,ans,"",vis,di,dj);
return ans;
}
*/