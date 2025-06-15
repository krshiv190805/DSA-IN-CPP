#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
in this now we will rotate the array by one place
vector<int>rotateArr(vector<int>&arr,int n){
int temp=arr[0];
for(int i=1;i<n;i++){
arr[i-1]=arr[i];
}
arr[n-1]=temp;
return arr;
}
now we will move the array or rotate the array by k places
arr[]={1 2 3 4 5 6 7},temp[]={1 2 3}
d=3
sol:
d=d%n;
int temp[d];
for(int i=0;i<d;i++){ O(d)+O(n-d)+O(d)=O(n+d)->TC and SC-O(d) to store the extra elements in the new array
temp[i]=arr[i];
}
for(i=d;i<n;i++){
a[i-d]=a[i];
}
for(i=n-d;i<n;i++){
a[i]=temp[i-(n-d)];
}
Important:
second and space optimised approach for this
void leftrotate(int arr[],int n,int d){
reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n); TC-O(2N) but SC-O(1) or u can write the recursive code for swapping two elements insted of the built in reverse function
}
*/
 return 0;
}