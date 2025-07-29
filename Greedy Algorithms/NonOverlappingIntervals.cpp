/*
in this question we have to return the count of pairs
we should remove from the total array such that
now two pairs are overlapping
eg:
arr[][]/intervals(this is basically that N meetings in one room kind of question-so we would 
be thinking like that)=[(1,2),(2,3),(3,4),(1,3)]
in this ans would be the last pair(1,3) we will remove that
then no pair is overlapping with the rest of the pairs
approach:
we would be sorting them according to the second element in the pair
using a comparator
code:
bool comparator([]val1,[]val2) return val1[]<val2[];
func(arr[][]){
 sort(arr,comp);
 cnt=1;//already the first meeting has happend
 lastEndTime=arr[0][1];
 for(i=1->n-1){
 if(arr[i][0]>=lastEndTime){
 cnt++;
 lastEndtime=arr[i][1];//we would be checking the first element of the next pair with the second elem of the prev pair to check if it can occur or not(> or not)
 }
 }
 return n-cnt;//TC-O(NlogN+N) for sorting and one is due to for loop and SC-O(1)
 }
*/