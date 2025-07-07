/*
in this question we have to print the matrix in spiral form
eg: 
1 2 3
8 9 4 = 1 2 3 4 5 6 7 8 9
7 6 5

vector<int>spiralMatrix(vector<vector<int>>&mat){
int n=mat.size();
int m=mat[0].size();
int left=0,right=n-1;
int top=0,bottom=n-1;
vector<int>ans;
while(top<=bottom && left<=right){
for(int i=left;i<=right;i++){
ans.push_back(mat[top][i]);
}
top++;
for(int i=top;i<=bottom;i++){
ans.push_back(mat[i][right]);
}
right--;
if(top<=bottom){
for(int i=right;i>=left;i--){
ans.push_back(mat[bottom][i]);
}
bottom--;
}
if(left<=right){
for(int i=bottom;i>=top;i--){
ans.push_back(mat[i][left]);//TC-O(m*n) & SC-O(m*n) for returning the answer
}
left++;
}
}
return ans;
}
*/