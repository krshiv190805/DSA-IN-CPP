/*
in this we have to perform the same as we did in the last part of this
question _1.cpp
arr[][]= 1  4  7  11  15
         2  5  8  12  19
         3  6  9  16  22
        10  13 14 17  24
        18  21 23 26  30
we have to search in 2D matrix 
the change is 
every row is sorted in itself
and every column is sorted in itself
now we have to think about the solution
approach 1: basic iterative approach which would be taking O(N*M) TC

approach 2: 
we would be using binary search 
eg target =14
code:
for(i=0->n-1){
ind=bs(mat[i],target);
if(ind!=-1) return {i,ind};
}//TC-O(N*logM_base2) and SC-O(1)
return {-1,-1};//this can be considered as better solution

approach 3: 
we would be using common sense
while analysing patterns we found out that 
if you stand on 0,m-1 or n-1,0
you can see that row is decreasing from right to left (from 0,m-1)
and it is increasing by value while moving from top to bottom 
so we can eliminate our search space at each step
code: 
bool searchElement(vector<vector<int>>&mat,int target){
int n=mat.size();
int m=mat[0].size();
int row=0,col=m-1;
while(row<n && col>=0){
if(mat[row][col]==target) return true;
else if(mat[row][col]< target) row++;
else col--;
}
return false;//TC-O(n+m) , SC-O(1) , the worst case is when the target is diagonally opposite to the starting point 
}// so we have to travel in total of row steps + column steps 
//there might be a question that where we are using binary search but actually it is kind of eliminating our search space , so indeed we have used it 
*/