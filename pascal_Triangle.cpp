/* it is recomended to take long long integer data type to avoid overflow
1)to find a particular element in a pascal triangle, given Row and column
2)print any particular row for a given value of N(row)
3) print the triangle for some number N (basically you will write the row till this number)
sol_1)talking about n_C_r=n!/(n-r)!r!{this will take O(n)+O(r)+O(n-r)}
observation is 10_C_3=10*(nine)*8/3*2*1 so it will look like (10/1)*(nine/2)*(8/3)
here the code goes like:
fun nCr(int n,int r){
int res=1;
for(int i=0;i<r;i++){
res=res*(n-i);
res=res/(i+1)
}
return res;
}
sol_2)for second 
the code goes like:
for(c=1;c<=n;c++){  (n is row number)
cout<<nCr(n-1,r-1);
} (TC-> O(n*r)) (the loop and the function call combined)
note:: better solution->
for(row=1->n){
tempList=[];
for(col=1->row){
tempLis.add(nCr(row-1,col-1));
}
ans.add(tempList);
}
return ans; (TC is O(N*N*r) , worst case it is N^3)
optimal solution:
3) solution::
the code goes like:
vector<int>generateRow(int row){
long long ans=1;
vector<int>ansRow;
ansRow.push_back(1);
for(int col=1;col<row;col++){
ans=ans*(row-column);
ans=ans/column;
ansRow.push_back(ans);
}
return ansRow;
}
vector<vector<int>>pascalTriangle<int N>{
vector<vector<int>>ans;
for(int i=1;i<=N;i++){
ans.push_back(generateRow(i));
}
return ans;
}

*/