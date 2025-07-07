#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    this is the question in which we have 
    to move the zeroes to end and rest elements as it is
    in the same order
    1) brute approach
    temp=[];//O(N)
    for(i=0->n){
    if(arr[i]!=0){
    temp.add(arr[i]);
    }
    }
    for(i=0;i<temp.size();i++){//O(x)
    arr[i]=temp[i];
    }
    for(i=nz;i<n;i++){//O(N-X)
    arr[i]=0;
    }
(nz)no_of_nonzero=temp.size();
Imp:Optimal approach
vector<int>moveZero(int n,vector<int>a){
int j=-1;
for(int i=0;i<n;i++){
if(a[i]==0){
j=i;
break;
}
}
if(j==-1) return a;//no non zero numbers
for(int i=j+1;i<n;i++){
if(a[i]!=0){
swap(a[i],a[j]);
j++;
}
}
return a;
}

    */
 return 0;
}