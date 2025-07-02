/*
this is a question called flood fill algo in which
there is a 2-D matrix in which you have given starting row and starting column
now go to this value(sr,sc) this is a particular colour(colour name : the value in this) 
and then check for left right up and down if they have the same
colour as this colour , then update this and all the four directional values to 
val+1;
approach : 
we will use DFS in this 
for eg: 
we have given (3*3) matrix
{1 1 1} {2 2 0} {2 2 2}, given initial colour=2, new color=3, sr=2,sc=0
now when we strt from the given val(2,0)
DFS(2,0)->DFS(1,0) or we can go DFS(2,1)
and then check if its not coloured then we will colour
and again dfs on its neighbours, as we can see when 
we are at a particular cell then for dfs of its four directions
             row-1,col
row,col-1 <- row,col->row,col+1
             row+1,col
             so we can either do dfs 4 times separately
             or we can see the pattern 
delrow={-1,0,1,0}
delcol={0,1,0,-1}      
code: 
void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newcolor,int delRow[],int delCol[],int iniColor){
ans[row][col]=newColor;
int n=image.size();
int m=image[0].size();
for(int i=0;i<4;i++){
int nrow=row+delrow[];
int ncol=col+delcol[];
if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor &&
ans[nrow][ncol]!=newcolor)
dfs(nrow,ncol,ans,image,newColor,delRow,delCol);
}
}
vector<vector<int>>floodFill(vector<vector<int>>&image,int sr,int sc,int newColor){
int inicolor=image[sr][sc];
vector<vector<int>>ans=image;
int delRow[]={-1,0,+1,0};
int delCol[]={0,1,0,-1};
dfs(sr,sc,ans,image,newcolor,delRow,delCol,iniColor);
return ans;
}

IMPORTANT: 
time complexity calculation
N*M grid =X nodes
travelling to all 4 dir of a particular cell
(4*X + X) ~ X, you are calling the dfs for X times and four calls for each node so that's why
~O(N*M)
and SC-O(N*M) + O(N*M) , the first one is for returning the answer array
you can also return in the same original array , so need for the first one and 
about the second one it is the space for recursion stack space as you move from let suppose first cell till the 
last cell


*/