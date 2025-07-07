/*in this we have an array in which n integrs are there 
and we have to return all the unique triplets such that they are in this manner
i!=j!=k( there should not be a triplet in which a element is appearing more than one time )
and their sum should be equal to a target(here it is 0)
(brute solution)->code goes like:( remember TC is O(n^3 * log(nof of unique elements))) and space complexity is (2*O(no of triplets))
vector<vector<int>>triplet(int n,vector<int>&num)
{
vector<vector<int>>ans;
set<vector<int>>st; (using this so that only unique element enters into it )
for(int i=0;i<n;i++){
for(int j=i+1;j<n;i++){
for(int k=j+1;k<n;i++){
if(num[i]+num[j]+num[k]==0){
vector<int>temp={num[i],num[j],num[k]}; (we are doing this to avoid ordered pair, for eg, we have two arrays {-1,-1,2} and {-1,2,-1} they both are same but according to the question we have to find a unique set so we can't take both, so to avoid this we are sorting first )
sort(temp.begin(),temp.end());(this will sort required array to avoid ordered pairs)
st.insert(temp); (this will not insert the elements in the set whose sum equals target )

}
}
}
}
vector<vector<int>>ans(st.begin(),st.end()); (this is list of list so it will store all of them after final happening)
return ans ;

2) better than brute 
we will use hashing to reduce TC as hashing takes logarithmic or constant time
vector<vector<int>>triplet(int n,vector<int>&num)
{
set<vector<int>>st;
for(int i=0;i<n;i++){
set<int>hashset;
for(int j=i+1;j<n;j++){
int third=-(num[i]+num[j]);
if (hashset.find(third) !=hashset.end()){
vector<int>temp={num[i],num[j];num[k]};
sort(temp.begin(),temp.end());
st.insert(temp);
}
hashset.insert(num[j]);
}
}
vector<vector<int>>ans(st.begin(),st.end());
return ans;
TC-> N^2 * Log M (where M is some constant not exactly M)
SC-> O(N)+O(no of unique elements)*2 { list of list , so here 2 comes to store the list , second got multiplied by 2 }
3) note:: optimal solution
here it goes like
vector<vector<int>>triplet(int n,vector<int>&num)
{
vector<vector<int>>ans;
sort(num.begin(),num.end());
for(int i=0;i<n;i++){
if(i>0 && num[i]==num[i-1]) continue;
int j=i+1;
int k=n-1;
while(j<k){
int sum=num[i]+num[j]+num[k];
if(sum<0){
j++;
}
else if(sum>0){
k--;
}
else{
vector<int>temp={num[i],num[j],num[k]};
ans.push_back(temp);
j++;
k--;
while(j<k && num[j]==num[j-1]) j++;
while(j<k && num[k]==num[k+1]) k--;
}
}
}
return ans; (TC will be O(N* log N )+O(N*N) ) and Space complexity(No. of unique numbers{generally})




*/