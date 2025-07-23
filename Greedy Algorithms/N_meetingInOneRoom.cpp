#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
This is N meeting in one Room
and our task is to maximise number of meeting we can 
perform but in one room only 
and we can start from any meeting
eg:
start[]=[0 3 1 5 5 8]
end[]=  [5 4 2 9 7 9]
now using greedy aproach we have to maximise the number of meetings
and then
we are trying out each and every possible combination
we will be starting from 3rd meeting 1st
(1,2)-3,(3,4)-2,(5,7)-5,(8,9)-6 so total 4 meetings 
we have tried all the combinations, 4 is the max in number
 
approach : we would be storing the starting till end timings
and first we gonna sort it using our comparator
code: 

class{
start,end,pos;
}
bool comp(data val1,data val2){
return val1.end<val2.end;
}
func(start,end,N){
  Data arr[N];
  for(i=0->N){
  arr[i].start=start[i];
  arr[i].end=end[i];
  arr[i].pos=i+1;
  }
  sort(arr,comp);//on the basis of end time
  cnt=1,freeTime=arr[0].end,ds=arr[0].pos
  for(i=1->n-1){
  if(arr[i].start>freeTime){
  cnt=cnt+1;
  freeTime=arr[i].end;
  ds.add(arr[i].pos);
  }
  }
 }
*/
 return 0;
}