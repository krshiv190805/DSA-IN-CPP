/*
in this q we have to rotate the matrix 
1  2  3  4     13  9  5  1
5  6  7  8  == 14 10  6  2
9 10 11 12     15  11 7  3
13 14 15 16    16  12 8  4
brute force : 
code : 
we will use an answer array to return the ans
ans[n][n]
for(i=0->n){//TC-O(N^2) and SC-O(N^2)
for(j=0->n){
ans[j][n-1-i]=matrix[i][j];
}
}

optimal code: 
in this we will use the swap function else you can use the following two pointer 
for doing the same
void reverseArray(int arr[],int n){
int p1=0,p2=n-1;
while(p1<p2){
swap(arr[p1],arr[p2]);
p1++;
p2--;
}
printArray(arr,n);
}

now the final code : 
void rotateMatrix(vector<vector<int>>&mat){
int n=mat.size();
for(int i=0;i<n-1;i++){//O(N/2*N/2)
for(int j=i+1;j<n;j++){
swap(mat[i][j],mat[j][i]);
}
}
for(int i=0;i<n;i++){//O(N*N/2) and SC-O(1)
reverse(mat[i].begin(),mat[i].end());
}
}

*/