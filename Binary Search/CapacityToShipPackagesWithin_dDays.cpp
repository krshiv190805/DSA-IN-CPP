/*
in this question we have to find the least capacity of ship
packages with D(given) days
eg 
weight[]={ 1 2 3 4 5 6 7 8 9 10} days=5
we have to tell the min capacity 
for eg we took the capacity 10
then 1st day={1 2 3 4} , sum=10
2nd day={5}
3rd day={6}
4th day={7}
5th day={8} 
now we ran out of day only 5 days we were having 
we can't take 10
we should increase
but we have figured out that if we take max of 55 capacity
then it would take all the things in 1 day
now the answer will be lying in 10 to 55
means from max_element to sum of the array elements
brute force : 
code:
int func(wt,cap){//TC-O((sum-max+1)*N) and SC-O(1) , the TC would go upto O(N^2) 
days=1,load=0;
for(i=0->n-1){
if(load+wt[i]>cap){
days=days+1;
load=wt[i];
}
else load+=wt[i];
}
return day;
}
for(cap->(max->sum)){
int daysReq=func(wt,cap);
if(daysReq<=days) return daysReq;
}

optimal approach: 
now we have known the range for the answer 
so we know the loop starting pos and ending pos
code:
int findDays(vector<int>&weights,int cap){//TC-O(log(sum-max+1) base 2 * N) and SC-O(1)
int days=1,load=0;
for(int i=0;i<weights.size();i++){
if(weights[i]+load>cap){
days+=1;
load=weights[i];
}
else load+=weights[i];
}
return days;
}
int leastWeightCapacity(vector<int>&weights,int d){
int low=*max_element(weights.begin(),weights.end());
int high=accumulate(weights.begin(),weights.end(),0);
while(low<=high){
int mid=(low+high)/2;
int numberOfDays=findDays(weights,mid);
if(numberOfDays<=d) high=mid-1;
else low=mid+1;
}
return low;
}
*/