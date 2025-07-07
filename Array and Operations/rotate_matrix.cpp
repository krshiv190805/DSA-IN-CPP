/* 1) brute force is 
run two loops and write 
arr[j][n-1-i]=arr[i][j]; (but this is of TC-> O(N^2)) and space complexity is also(O(N^2) which is not good)

2)better
void rotateMatrix(vector<vector<int>>&mat){
int n=mat.size();
//transpose
//O(N/2 * N/2)-TC
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
swap(mat[i][j],mat[j][i]);
}
}
//reverse
//O(N* N/2)
for(int i=0;i<n;i++){
//row is mat[i]
reverse(mat.begin(),mat.end());   (now we are using no extra space so thus it is optimized by SC)
*/