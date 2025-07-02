/*
in this question we have to find the number which is missing and
repeating as well in the array, we have all the numbers from 1 to size of array
brute force:
we will basically iterate the full loop 
code: 
int repeating =-1,missing=-1;//TC-O(N^2) and SC-O(1)
for(i=1->n){
cnt=0;
for(j=0->n-1){
if(arr[j]==i) cnt++;
}
if(cnt==2) repeating=i;
else if(cnt==0) missing =i;
if(repeating !=-1 && missing !=-1) break;
}
better approach:
now we will use hashmap of size n+1 with 0 initial value
so that the element which is 0 after the traversal
we can get that at the last
code:
vector<int>findMissingRepeatingNumbers(vector<int>a){
int n=a.size();
int hash[n+1]={0};//TC-O(2N) , SC-O(N)
for(int i=0;i<n;i++){
hash[a[i]]++;
}
int repeating=-1,missing=-1;
for(int i=1;i<=n;i++){
if(hash[i]==2) repeating=i;
else if(hash[i]==0) missing=i;
if(repeating!=-1 && missing !=-1) break;
}
return {repeating,missing};
}

Optimal Approach: 
first we will sum all the elements present in the array 
and then we will calculate the sum from 1 to N
then subtract it , we get one equation 
and then we will add the sum of squares of the elements present in it 
and subtract from the squares sum from 1 to N
another equation we get (x-y=val1) , (x^2-y^2=val2)
x= repeating number,y=missing number
then solve the two linear equation
code:
vector<int>FindmisingrepeatingNum(vector<int>a){
long long n=a.size();
//S-Sn=x-y;
//S2-S2N
long long SN=(n*(n+1))/2;
long long S2N=(n*(n+1)*(2*n+1))/6;
long long S=0,S2=0;
for(int i=0;i<n;i++){
S+=a[i];
S2+=(long long)a[i]*(long long)a[i];
}
long long val1=S-SN;
long long val2=S2-S2N;
val2=val2/val1;//x+y
}
*/