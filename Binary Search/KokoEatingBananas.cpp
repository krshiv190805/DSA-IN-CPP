/*
this is a question of koko eating bananas
in this you have to return the min integer k 
such that koko can eat all bananas with h hours
k bananas/hr
piles[]=[3 6 7 11] and h=8
suppose k =3 
then for 1->1hr
then for 2-> 2 hr
for 3-> 3 hr as remaining time is wasted(take the ceil)
for 4-> 4 hr
in total it is 10 hr which is exceeding the h
so now by taking k=4 we will get our desired ans
1)brute force: //max answer would be the max element present in the array
code:
func(arr,hourly){
totalhrs=0;
for(i=0->n-1){
totalhrs+=ceil(arr[i]/hourly);
}
return totalhrs;
}
for(i=1->max(arr)){//TC-O(max(arr)*n)-> this will show time limit exceeded
reqTime=func(arr,i);
if(reqTime<=h) return i;
}

2)optimal approach: //TC-O(N)*(log(max element) base 2)
code: 
int findMaxele(vector<int>&v){
int maxi=INT_MIN;
int n=v.size();
for(i=0;i<n;i++){
maxi=max(maxi,v[i]);
}
return maxi;
}
int CalculTotalHrs(vector<int>&v,int hourly){
int totalH=0;
int n=v.size();
for(int i=0;i<n;i++){
totalH+=ceil((double)v[i]/(double)hourly);[don't forget to typecast this]
}
return totalH;
}
int minimumRateToEatBananas(vector<int>v,int h){
int low=1,high=findMax(v);
while(low<=high){
int mid=(low+high)/2;
int totalH=calculateTotalHours(v,mid);
if(totaH<=h){
high=mid-1;
}
else{
low=mid+1;
}
}
return low; //since initially low was at a position which is impossible as answer and oppsite for high 
// and later it came to a possible position at the end
}
*/