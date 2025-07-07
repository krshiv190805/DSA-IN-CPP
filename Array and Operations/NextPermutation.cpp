/*
in this question we have to find the next permutation of an array
for eg [3 1 2] 
possible different array are 
123,132,213,231,312,321
but the one which is greater than the original array is 321
in total there would be N! arrays where n is size of the array
1)brute solution can't be used to solve this
as it will take N! time to generate all the arrays and traversal for just bigger array(N)
 NOTE: 
 you can also use the STL next_permutation(arr.begin(),arr.end()) and return A to generate 
the next permutation, this can be the better solution 
but if we have to implement the stl then optimal one would be considered as final

steps: 
1)longer prefix match(a[i]<a[i+1])
2)find>1 , but the smallest one
3) try to place remaining numbers in sorted array

optimal code : 
vector<int>nextGreaterPermutation(vector<int>&A){
ind=-1;
for(i=n-2;i>=0;i--){
if(a[i]<a[i+1]){
ind=1;
break;
}
}
if(ind==-1){
reverse(A.begin(),A.end());
return A;
}
for(i=n-1;i>ind;i--){
if(arr[i]>arr[ind]){
swap(arr[i],arr[ind]);
break;
}
}
reverse(A.begin()+ind+1,A.end());//a<=>A
return A;
}
*/