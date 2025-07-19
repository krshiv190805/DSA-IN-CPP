/*
this is question of N queen in which we have to tell the number of
pattern in which we can place queens such that:
1) every row consist of 1 queen
2) every column consist of 1 queen
3)no two queens attack each other(same moves as the original chess)
approach:
we will use kind of similar pick and not pick 
instead we will be using keep or not keeping position
we will start from 0th column and then check for next column and so on
code:
bool isSafe1(int row,int col,vector<string>board,int n){
//check upper diagonal
int duprow=row;
int dupcol=col;
while(row>=0 &&)
}
void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
if(col==n){
ans.push_back(board);
return ;
}
for(int row=0;row<n;row++){
if(isSafe1(row,col,board,n)){
board[row][col]='Q';
solve(col+1,board,ans,n);
board[row][col]='.';
}
}
}
vector<vector<string>>solveNQueens(int n){
vector<vector<string>>ans;
vector<string>board(n);
string s(n,'.');
for(int i=0;i<n;i++){
board[i]=s;
}
solve(0,board,ans,n);
return ans;
}
*/