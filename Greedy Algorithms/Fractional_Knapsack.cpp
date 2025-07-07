#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
this is fractional knapsack
in this a bag whose capapcity is W(here 90)
and it is filled by different bags of some value and a capacity
arr[]={(100,20),(60,10),(100,50),(200,50)} ; W=90
 and you have to maximize the total value you can take it
 and also you can take it by fractions of a capacity of a particular bag
 now example
 i took 1 then 2 then 3 now only 10 left so 
 by unitary method i will take only 40 value of the last bag according to capacity of 10
 and now sum of all values is 300(maximize this)
 Item{
 value
 weight
 }
 double func(Item arr[],w){
 sort(arr,comparator );//((NlogN))
 double totalVal=0;
 for(i=0->n){//O(N), SC-O(1)
 if(arr[i].weight<=w){
 totalVal+=arr[i].value;
 w=w-arr[i].weight;
 }
 else {
 totalVal+=(arr[i].value)/(arr[i].weight)*w;
 break;
 }
 }
 return totalVal;
 }
 now code for the comperator
 :
 bool comp(item val1,item val2){
 if((val1.value/val1.weight)>=(val2.value/val2.weight)){
 return true;
 }
 return false;
 }
*/
 return 0;
}