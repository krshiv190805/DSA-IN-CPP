/*
in this question we have to find the Nth root of M
for(i=1->m){
if(f(i,n)==m) return i;//TC-O(M*log n base 2)[if you have used power method to calculate]
else if(f(i,n)>m) break;
}
return -1;
//for computation of f(i,n) either you use a for loop for O(N)
or use power exponentitation method for O(log n base 2)
 2) now we will use binary search
 code: 
 func(n,m){
 low=1,high=m;
 while(low<=high){//TC-O((log m base 2)*(log n base 2)) one for BS another for func(mid,n)
 mid=(low+high)/2;
 if(f(mid,n)==m) return mid;
 else if(f(mid,n)<m) low=mid+1;
 else high=mid-1;
 }
 return -1;
 }
 IMP:
 int func(int mid,int n){
 long long ans=1;
 while(n>0){
 if(n%2==1){
 ans=ans*mid;
 n=n-1;
 }
 else{
 mid=mid*mid;
 n=n/2;
 }
 }
 return ans;//mid^n
 }
 int Nthroot(int n,int m){
 int low=1,high=m;
 while(low<=high){
 int mid=(low+high)/2;
 int midN=func(mid,n);
  if(midN==m){//by below code replace m by 1
  return mid;
  }
  else if(midN<m) low=mid+1;//by below code replace to midN==0
  else high=mid-1;
 }
  return -1;
 }

 The func code in the above code will not work when 
 n is very large as it will cross 10^9
 so to optimise it for all then req code is
 int func(int mid,int n,int m){
 long long ans=1;
 for(int i=1;i<=n;i++){
 ans=ans*mid;
 if(ans>m) return 2;
 }
 if(ans==m) return 1;
 return 0;
 }
*/