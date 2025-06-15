#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
union of two sorted arrays
arr1[]={1 1 2 3 4 5} let size of this is n1
arr2[]={2 3 4 4 5} and of this is n2
union means {1 2 3 4 5}//every element which is present 
in either of them goes in the union array
code:
set<int>st;
for(i=0;i<n1;i++){//O(n1logn)
st.insert(a1[i]);
}
for(i=0;i->n2){
st.insert(a2[i]);//O(n2logn)
}
union[st.size()];
i=0
for(auto it:st){//O(n1+n2)
union[i++]=it;
union.add(it);
}//SC-O(n1+n2)+O(n1+n2)- one is for set and another is that you return the answer in a different array

now lets jump on the optimal solution-this is a two pointer approach
code:
vector<int>Sortedarray(vector<int>a,vector<int>b){
int n1=a.size();
int n2=b.size();
int i=0;
int j=0;
vector<int>unionArr;
while(i<n1 && j<n2){
if(a[i]<=b[j]){
if(unionArr.size()==0||unionArr.back()!=a[i]){
unionArr.push_back(a[i]);
}
i++;
}
else{
if(unionArr.size()==0||unionArr.back()!=b[j]){
unionArr.push_back(b[j]);
}
j++;
}
while(j<n2){
if(unionArr.size()==0||unionArr.back()!=b[j]){
unionArr.push_back(b[j]);
}
j++;
}
while(i<n1){
if(unionArr.size()==0||unionArr.back()!=a[i]){
unionArr.push_back(a[i]);
}
i++;
}
}
return  unionArr;//TC-O(n1+n2) , SC-O(n1+n2) for returning the answer in the array not for solving the question
}

now we would go for intersection of two sorted arrays
A[]={1 2 2 3 3 4 5 6}
B[]={2 3 3 5 6 6 7}
intersection of two arrays means
if there is one element in both the arrays corresponding to its 
frequency then the element should be in the intern array
code:
now we will consider a  vis array intialising all element from 0 and then
will mark each as 1 when we traverse through it and also it got mapped with the same element in the other 
array
:
TC-O(n1*n2),SC-O(n2)
vector<int>findArrayInt(vector<int>&A,int n,vector<int>&B,int m){
vector<int>ans;
int vis[m]={0};
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(A[i]==B[j]&&vis[j]==0){
ans.push_back(A[i]);
vis[j]=1;
break;
}
if(B[j]>A[i]) break;
}
}
return ans;
}

Imp:optimal approach(two pointer approach)
vector<int>findArrInt(vector<int>&A,int n,vector<int>&B,int m){
int i=0;
int j=0;
vector<int>ans;
while(i<n && j<m){
if(A[i]<B[j]){
i++;
}
else if(B[j]<A[i]){
j++;
}
else {
ans.push_back(A[i]);
i++;
j++;
}
}
return ans;//TC-O(n1+n2) and SC-O(1)
}
*/
 return 0;
}