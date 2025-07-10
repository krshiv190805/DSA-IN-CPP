/*
in this question we have to search an element in a 2D matrix
so we would be discussing all the approaches one by one
approach 1: just have a 2D search means go through each and every element
and check whether it is the target or not 
but problem is it will end up taking O(N*M)

approach 2:
as we can see the 2D matrix is sorted row wise
so we can apply binary search overall 
code:
for(i=0->n-1){
if(mat[i][0]<=target && target<=mat[i][m-1]) return bs(mat[i],target);//bs function will tell whether element is present or not by returning true or false
}
return false;//TC-O(n)+O(log m base 2) now we have to optimise this again to remove atleast O(n)

approach 3:
we will flatten the matrix not by code but in back of our mind
and try to use low,high and mid
our example target is 23
if we have to convert a particular index into (row,col)
then use the formula for 
row=ind/m;
col=ind%m;
for eg : 
index 5=(1,1) in actual 2d matrix
so now we can apply low and high and proceed for further calculations
code: 
bool searchMatrix(vector<vector<int>>&mat,int target){
int n=mat.size();
int m=mat[0].size();
int low=0,high=n*m-1;
while(low<=high){
int mid=(low+high)/2;
int row=mid/m;
int col=mid%m;
if(mat[row][col]==target) return true;
else if(mat[row][col]<target) low=mid+1;
else high=mid-1;
}
return false;//TC-O(log(n*m) base 2) and SC-O(1)
}
*/