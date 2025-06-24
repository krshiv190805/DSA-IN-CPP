/*
in this question we have to find the leaders in the array
means suppose we took one element then every element of its right should be lesser
than this(not equal to as well)
brute code: 
just check if any element to the right is greater then break
for(i=0->n-1){ //TC-O(N^2) and SC-O(N) for returning the answer array
leader=true;
for(j=i+1;j<n;j++){
if(a[j]>a[i]) {
leader=false;
break;
}
}
if(leader==true) ans.add(a[i]);
}

optimal code: 
vector<int>SuperiorElements(vector<int>&a){
vector<int>ans;
int maxi=INT_MIN;
int n=a.size();
for(int i=n-1;i>=0;i--){//O(N)
if(a[i]>max) ans.push_back(a[i]);
maxi=max(maxi,a[i]);
}
sort(ans.begin(),ans.end());//O(NlogN) and SC-O(N) for returning the ans array
return ans;
}
*/