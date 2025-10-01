/*
in this we have to count the ways to reach Nth stairs
i am currently at 0th stair and want to reach the Nth one , at once you can climb 
either 1 or 2 stairs in all
we have to return the number of distinct ways to climb the Nth step

approach : 
All possible ways , count all ways , we can do this by Recursion 
Shortcut : 
1) Try to represent the problem in terms of index
2) Do all possible stuffs on that and index
all to the problem statement
3) sum of all stuffs - count all way

pseudo code : 
f(ind) {
if(ind==0) return 1;
if(ind == 1) return 0;
left= f(ind-1);
right=f(ind-2);
return left+right;
}//this will count all the ways
*/