#include<bits/stdc++.h>
//changed after revision-CAR
using namespace std;
int main()
{
 /*
 1)assigning cookies greedy 
 our example is 
 greed=[1 5 3 3 4](13345) and size for the cookie(array) =[4 2 1 2 1 3](112234)
 now sort both the array as we have to be greedy to assign cookies according to the greed
 func(greed,size){//TC-O(NlogN+MlogM+M), SC-O(1)
 n=greed.size();
 m=size.size();
 l=0,r=0;
 sort(greed);
 sort(size);
 while(l<m && r<n){
 if(greed[r]<=size[l]){
 r=r+1;
 l=l+1; //CAR
 }
 l=l+1;
 }
 return r;
 }
 */
 return 0;
}
//7 8 9 10
//5 6 7 8

//Revised