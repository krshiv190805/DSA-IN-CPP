/*
this is a question of longest sequence
in which you have to find the longest sequence
like for eg:
arr[]={ 102 4 100 1 101 3 2 1 1}
in this subsequence is 102 100 101 and 4 3 2 1
means they should be consecutive irrespective of the order
we have to return the sequence
brute approach : 
suppose we get an element eg 100
we would check if there is 101 if it is there 
further we will check for 102 and so on
but if any point if the +1 element is not there we will break
and store the length till this point in a variable
code: 
ls(arr,num){//ls=linear search basically to find the +1 element 
for(i=0->n-1){
if(arr[i]==num) return true;
}
return false;
}
longest=1
for(i=0->n-1){//TC-O(N^2) and SC-O(1)
x=arr[i]
cnt=1
while(ls(arr,x+1)==true){
x=x+1;
cnt++;
}
}

better approach: 
now we will first sort the array and then see the next(+1) 
element is present or not then store if it is present and increase the 
required variable
code: 
int longestSUccessiveEl(vector<int>&nums){
int n=nums.size();
if(n==0) return 0;
sort(nums.begin(),nums.end());//O(NlogN)
int n=nums.size();
int lastSmaller=INT_MIN;
int cnt=0;
int longest=1;
for(int i=0;i<n;i++){//O(N) 
if(nums[i]-1==lastSmaller){
cnt+=1;
lastSmaller=nums[i];
}
else if(lastSMaller!=nums[i]){
cnt=1;
lastSmaller=nums[i];
}
longest=max(longest,cnt);
}
return longest;//since we are distorting the array by sorting it so optimal solution
}

optimal approach: 
first we will use a set and put all the elements in it
then start from the top and search if exists an element before that or not
if not then move to the second element and so on
if found then element before will be searched kind of brute approach but in a different way

code: 
int longestSuccElements(vector<int>&a){
int n=a.size();
if(n==0) return 0;
int longest=1;
unordered_set<int>st;//it will take O(1) for the best case and O(N) for the worst case if collision happen
for(int i=0;i<n;i++){//O(N) for iteration
st.insert(a[i]);
}
for(auto it:st){//O(2N), first we did full iteration of the set then again for a particular element we did 4 iterator(for the above example and again 3 iteration)
if(st.find(it-1)==st.end()){// so in total there are 14 iteration basically 2N , so in total O(3N)
int cnt=1;
int x=it;
while(st.find(x+1)!=st.end()){
x++;
cnt++;
}
longest=max(longest,cnt);
}
}
return longest;//SC-O(N) assuming all the elements are unique and all are collectively one sequence
}
IMP: if you have to take the logN for set then brute approach is better than this
*/