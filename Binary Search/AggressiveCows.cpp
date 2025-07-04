/*
this is a question in which we have to place
k cows and then check for min distance , basically we have to place them 
in such a way that distance between the particular two is max(both should be consecutive)
(min distance between cows) is max - MAIN keypoint
eg:
arr[]=[0 3 4 7 10 9] and cows=4
so we will try all combinations and in this case the answer is 3
first we will start with 1 
and check with it that can we place all of them or not
if we can then we will increase and check the distance between two should be >= (the distance we chosen from 1,not neccesary to be adjacent)
approach:
we figured out that the answer will be lying between
[1,(max-min)]
code:
bool canWePlace(arr,dist,cows){//TC-O((max-min)*N) and SC-O(1)
cntCows=1,last=arr[0];
for(i=1->n-1){
if(arr[i]-last>=dist){
cntCows++;
last=arr[i];
}
}
if(cntCows>=cows) return true;
else return false;
}
sort(arr,arr+n);
for(i=1;i<=max-min;i++){
if(canWePlace(arr,i,cows)==true) continue;
else return i-1;
}

another approach: now we will use another approach 
that is binary search
code:

bool canWePlace(vector<int>&stalls,int dist,int cows){
int cntCows=1,last=stalls[0].
for(int i=1;i<stalls.size();i++){
if(stalls[i]-last>=dist){
cntCows++;
last=stalls[i];
}
if(cntCows>=cows) return true;
}
return false;
}
int aggressiveCows(vector<int>&stalls,int k){
sort(stalls.begin(),stalls.end());
int n=stalls.size();
//min of all consecutive distance difference
int low=1,high=
}
*/