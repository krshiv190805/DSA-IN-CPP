/*
in this we have to remove the duplicates from sorted array
arr[]={1 1 2 2 2 3 3}
first approach(brute):
set<int>st
for(i=0;i<n;i++){
st.insert(arr[i]);// Takes O(N log N + N) as TC and O(N)-SC
}
index=0;
for(auto it:st){
arr[index]=it;
index++;
}

second approach(optimal): two pointer approach
int removeDupl(vector<int>&arr,int n){
int i=0;
for(int j=1;j<n;j++){
if(arr[i]!=arr[j]){
arr[i+1]=arr[j];
i++;
}
}
return i+1;
}
*/