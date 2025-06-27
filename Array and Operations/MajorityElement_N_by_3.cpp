/*
in this question we have to tell the element 
which appears more than N/3 times in an array
arr[]={1 1 1 3 3 2 2 2} n=8
we will use the same approach we have done while N/2
 brute code: 
 ls=[]
 for(i=0->n-1){//TC-O(N^2) and SC-O(1)u
 if(ls.size()==0||ls[0]!=nums[i]){
 cnt=0;
 for(j=0->n-1){
 if(nums[i]==nums[j]) cnt++;
 }
 if(cnt>n/3) ls.add(nums[i]);
 }
 if(ls.size()==2) break;
 }
 return ls;

 brute code: 
 now we will be using hash map to optimise TC
 vector<int>majorityEL(vector<int>v){
 vector<int>ls;//TC-O(N*logN) , if use an ordered map otherwise O(N) if you use unordered map
 map<int,int>mpp;
 int n=v.size();
 int mini=(int)(n/3)+1;
 for(int i=0;i<n;i++){
 mpp[v[i]]++;
 if(mpp[v[i]]==mini){
 ls.push_back(v[i]);
 }
 if(ls.size()==2) break;
 }
 sort(ls.begin(),ls.end());//O(2log2) as it is storing 2 integers at max so only space complexity for 2 integers
 return ls;
 }

 now solving by the optimal approach: 
 code: 
 vector<int>majorityElement(vector<int>v){
 int cnt1=0,cnt2=0;
 int el1=INT_MIN;
 int el2=INT_MIN;
 for(int i=0;i<v.size();i++){
 if(cnt1==0 && el2!=v[i]){
 cnt1=1;
 el1=v[i];
 }
 else if(cnt2==0 && el1!=v[i]){
 cnt2=1;
 el2=v[i];
 }
 else if(v[i]==el1) cnt1++;
 else if(v[i]==el2) cnt2++;
 else{
 cnt1--,cnt2--;
 }
 }// till here is O(N)
 vector<int>ls;
 cnt1=0,cnt2=0;
 for(int i=0;i<v.size();i++){//O(N)
 if(el1==v[i]) cnt1++;
 if(el2==v[i]) cnt2++;
 }
 int mini=(int)(v.size()/3)+1;
 if(cnt1>=mini) ls.push_back(el1);
 if(cnt2>=mini) ls.push_back(el2);
 sort(ls.begin(),ls.end());//O(NlogN)  this is neglected as only 2 elements are there so constant time only
 return ls;//SC-O(1)
 }
*/