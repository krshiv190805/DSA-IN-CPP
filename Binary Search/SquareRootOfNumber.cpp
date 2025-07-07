/*
in this we have to find the square root of number using binary search and we have to return the floor of the ans , like if number
is 28 then nearest square is 25 and root is 5 or 28 root is 5.3 so we have to return
5 not 5.3
first we will do by a linear search O(N) then optimise it using binary search and making it 
of O(log n base 2):
1)O(N):
suppose n=28,
int ans=1;
for(i=1;i<=n;i++){
if(i*i<=n){
ans=i;
}
else break;
}

2) O(log n base 2): 
int floorSqrt(int n){
int low=1,high=n;
while(low<=high){
long long mid=(low+high)/2;
long long val=(mid*mid);//to avoid (10^9)*(10^9)
if(val<=n){
low=mid+1;
}
else{
high=mid-1;
}
}
return high;
}
*/