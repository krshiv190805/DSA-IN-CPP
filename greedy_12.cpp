#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
this is a candy problem
you have to give candies to children according to their rating
child_1[]={1 2 3}
child_2[]={1 3 2 1}
each children has atleast one candy
and children with higher rating has> neighbour
1) in first you gave one candy to the first child
then you have to give 2 candies to the second
to satisfy the second condition and 3 to the third child 
for the same so in total you have to give 6 candies in total to minimize it

2) for the second case 
1-1
3-2
2-1
1-1
these are candies you will give to them
only we are looking at left one 
now when we look for both the neighbours
then :
1-1
3-3
2-2
1-1
total=7
 
now the code goes like :
func(ratings[]){
left[n];right[n];
left[0]=1
right[n-1]=1;
for(i=1->N-1){
if(ratings[i]>ratings[i-1]){
left[i]=left[i-1]+1;
}
else left[i]=1
}
for(i=n-2;i>=0;i--){
if(rating[i]>rating[i+1]){
right[i]=right[i+1]+1;
}
else right[i]=1;
}
sum=0;
for(i=0->n-1){
sum=sum+max(left[i],right[i]);
}
return sum ;//TC is O(3N) and SC is O(2N)
}
now go for optimisation
:
func(ratings[]){
left[n];right[n];
left[0]=1
right[n-1]=1;
for(i=1->N-1){
if(ratings[i]>ratings[i-1]){
left[i]=left[i-1]+1;
}
else left[i]=1
}
curr=1,right=1;sum=max(1,left[n-1]);
for(i=n-2;i>=0;i--){
if(rating[i]>rating[i+1]){
curr=right+1;
right=curr;
}
else curr=1;
sum=sum+max(left[i],curr);
}
return sum ;//TC is O(2N) and SC is O(N)
}

*/
 return 0;
}