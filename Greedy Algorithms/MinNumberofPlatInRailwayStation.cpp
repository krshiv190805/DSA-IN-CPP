/*
this is the question in which we have to find minimum number 
of platforms required for a railway
like example 
arrival[]={900 945 955 1100 1500 1800}
departure[]={920 1200 1130 1150 1900 2000}
in this the first train arrives(comes) at 9 and leaves at 9:20
so till then the platform is occupied 
then the second train arrives and leaves at 12:00 
till then no one can come at this platform 
another platform is required, so like this we have to calculate
 brute : code: 
 func(arrival,depart){//TC-O(N^2) and SC-O(1)
 maxCnt=0;
 for(i=0->n-1){
 cnt=1;
 for(j=i+1->n-1){
 if(for intersection write on your own){
 cnt++;
 }
 maxCnt=max(maxCnt,cnt);
 }
 }
 return maxCnt;
 }

 now the optimal solution using two pointer approach: 
 code:
 first we will sort both the array and then if some arrives 
 cnt++ and if departs cnt-- , and the ans would be the maxCnt it increases upto 
  
 func(arrival,depart){
 sort(arr),sort(dep);//TC-O(2*(NlogN+N)) and SC-O(1) bec i am destorting the given array
 i=0,j=0;// if you take a third array and put everything in it , so it would take space of O(N)
 cnt=0,maxCnt=0;
 while(i<n){
 if(arr[i]<=dep[j]){
 cnt++;
 i++;
 }
 else{
 cnt--;
 j++;
 }
 maxCnt=max(maxCnt,cnt);
 }
 return maxCnt;
 }
*/