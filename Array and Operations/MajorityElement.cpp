/*
in this question you have to find the majority element 
in the array (>N/2 times not equal) 
eg arr[]={ 2 2 3 3 1 2 2}
brute : 
code: 
for(i=0;i<n;i++){//TC-O(N*N) and SC-O(1)
cnt=0;
for(j=0;j<n;j++){
if(arr[j]==arr[i]) cnt++;
}
if(cnt>n/2) return arr[i];
}

now better solution : 
int MajorityELement(vector<int>v){
umap<int,int>mpp;//NlogN
for(int i=0;i<v.size();i++){
mpp[v[i]]++;
}
for(auto it:mpp){//O(N)
if(it.second>(v.size()/2)){
return it.first;
}
}
return -1;//SC-O(N)- suppose all the elements are unique
}

optimal approach:Moore's Voting Algorithm
basically in this we will take sub arrays from the main array and check for an element
if there is even elements then it will nullify but if there 
are odd elements then the extra element will show its presence , this is the main idea to implement
code: 
int majortiyElement(vector<int>v){//TC-O(N)[for first loop] + O(N)[this will not be there if the problem states that it will always have a majority element]
int cnt=0;
int el;
for(int i=0;i<v.size();i++){//SC-O(1)
if(cnt==0){
cnt=1;
el=v[i];
}
else if(v[i]==el) cnt++;
else cnt--;
}
int cnt1=0;
for(int i=0;i<v.size();i++){
if(v[i]==el) cnt1++;
}
if(cnt1>(v.size()/2)) return el;
 return -1;
}
*/