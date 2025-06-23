/* 1) largest element in an array
int arr[];
int largest=arr[0];
for(int i=0;i<n;i++){
if (arr[i]>largest){
largest =arr[i];
}
}
cout<<largest;(or return largest)

2) second largest element in an array
note: brute solution, first sort the array(but it takes NlogN(TC))
int arr[];
int largest=arr[n-1];
for(int i=n-2;i>=0;i--){
if(arr[i]!=largest){
second_largest=arr[i];
break;
}, in total it is taking NlogN + N (TC) , sorting+traversing through loop
} example array={1,2,4,5,7,7}
note: if we take array as {1,7,7,7,7,7}
then TC will be O(N) since the first element is our required answer;
but if no second largest element exists , print it as -1
this is better than brute solution
->
int arr[];
int largest=1;
for(int i=0;i<n;i++){
if (arr[i]>largest){
largest =arr[i];
}
}
int slargest=-1;
for(int i=0;i<n;i++){
if(arr[i]>slargest && arr[i]!=largest){
slargest=arr[i];
}
}
return slargest; now we got a better TC which is O(N+N)~O(N) as for the two loops;
imp_note:: we are assuming that array does not contain negative integers, if it has
change -1 to (INT_MIN)
note:: this is the optimal solution
int secondlargest(vector<int>&a,int n){
int largest=a[0];
int slargest=[1];
for(int i=1;i<n;i++){
if(a[i]>largest)
slargest=largest;
largest=a[i];
}
else if(a[i]<largest && a[i]>slargest){
slargest=a[i];
}
}
return slargest;
}
int secondSmallest(vector<int>&a,int n){
int smallest=a[0];
int Ssmallest=INT_MAX;
for(int i=1;i<n;i++){
if(a[i]<smallest){
Ssmallest=smallest;
smallest=a[i];
}
else if(a[i]!=smallest && a[i]<Ssmallest){
  Ssmallest=a[i];
}
}
return ssmallest;
}
vector<int>getSecondOrderElements(int n,vector<int>a)
int slargest=secondLargest(a,n);
int ssmallest=secondSmallest(a,n);
return {slargest,Ssmallest};
}
imp_note:: it takes only O(N) TC , better than the better solution it was O(2N);
*/