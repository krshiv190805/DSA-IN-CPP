#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
this is a question of set matrix in which if there is a zero
then make the row and column's each element 0 in which the zero is present
now starting with the brute force solution:
1) TC- O((N*M)*(N*M)+(N*M))
void markRow(i){
for(j=0lj<m;j++){
if(arr[i][j]!=0) arr[i][j]=-1;
}
}
void markCol(j){
for(i=0;i<n;i++){
if(arr[i][j]!=0) arr[i][j]=-1;
}
}
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(arr[i][j]==0){
markRow(i);
markCol(j);
}
}
}
for(i=0->n){
for(j=0->m){
if(arr[i][j]==-1)
arr[i][j]=0;
}
}
2)now better code:
col[m]={0}, row[n]={0};
for(i=0->n){
for(j=0->m){
if(arr[i][j]==0){
row[i]=1;
col[j]=1;
}
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(row[i]||col[j]){
matrix[i][j]=0;
}
}
}
return matrix;
}//this is the closing bracket of the function made for the matrix
*/
 return 0;
}