/*
this is the same question as it was previous done which was 
sum should be equal to k in a binary kind of array 
only 0 and 1 is there and we had to return the total subarrays which sum upto k

eg : 
arr[]={1 5 2 1 1 } and k=3
in this we have to return the subarrays with 3 odd numbers 
 so now using that 1 0 subarray question we can replace 
 odd number here with 1 and even with 0
 and check for sum ==k
 so we can easily find that

 in that code , just replace sum+=nums[k] with sum+=(nums[k]%2)
*/