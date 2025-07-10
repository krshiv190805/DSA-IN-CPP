/*
in this question we have to find the row with max 1's
matrix[5][5]= 0 0 1 1 1 (3)
              0 0 0 0 0 (0)
              0 1 1 1 1 (4)
              0 0 0 0 0 (0)
              0 1 1 1 1 (4)
initial code: 
ind=-1;
max_cnt=-1;
for(i=0->n-1){
cntrow=0;
for(j=0->m-1) cntrow+=arr[i][j];
if(cntrow>max_cnt){
max_cnt=cntrow;
index=i;
}
}  
print(index);//O(N*M)

to optimise Time complexity 
we will use binary search
approach: 
to calculate no of 1 in a particular row we can subtract
total number of row-number of zeroes
this is calculated as lowerbound(1) or upperbound(0) or firstOccurance(1)
code:
int lowerBound(vector<int>arr,int n,int x){
int low=0,high=n-1;
int ans=n;
while(low<-high){
int mid=(low+high)/2;
if(arr[mid]>=x){//maybe an answer
ans=mid;//look for more small index on left
high=mid-1;
}
else low=mid+1;//look for right
}
return ans;
}
int rowWithMax1s(vector<vector<int>>&matrix,int n,int m){
int cnt_max=-1;
int index=-1;
for(int i=0;i<n;i++){
int cnt_ones=m-lowerBound(matrix[i],m,1);
if(cnt_ones>cnt_max){
cnt_max=cnt_ones;
index=i;
}
}
return index;
}
IMP: the above code will not run for a particular case which is that 
if there is no row with at least 1 zero return -1; 
so make line 42 from -1 to 0;
TC-O(N*logM_base2)
*/