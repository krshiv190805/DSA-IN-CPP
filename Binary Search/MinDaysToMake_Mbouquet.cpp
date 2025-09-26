/*
in this question we have to return the min days to make 

code:
 bool isPossible(vector<int>&arr,int day,int k,int m){
 int n=arr.size();
 int cnt=0;
 int noOfBouq=0;
 for(int i=0;i<n;i++){
 if(arr[i]<=day) cnt++;
 else{
 noOfBouq+=(cnt/k);
 cnt=0;
 }
 }
 noOfBouq+=(cnt/k);
 return noOfBouq>=m;
 }
 int minDaystoMakeBouquet(vector<int>&arr,int k,int m){
 int n =arr.size();
 long long prod=1LL*k*1LL*m;
 if(m*k>n) return -1;
 int max_el=*max_element(arr.begin(),arr.end());
 int min_el=*min_element(arr.begin(),arr.end());
 int low=min_el,high=max_el;
 while(low<=high){
 int mid=(low+high)/2;
 if(isPossible(arr,mid,k,m)) high=mid-1;
 else low=mid+1;
 }
 return low;//TC-O(N*log(max-min+1) base 2)
 }
*/