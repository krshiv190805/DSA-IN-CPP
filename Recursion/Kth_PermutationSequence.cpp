/*
in this question we have to find the kth permutation for eg
arr[]={3 1 2} and k=4
the array would have 6 permutations (in total n! permutation would be there)
and 4th one would be the one which is arranged in order like that
n=4 and k=17 for this value we would be building an approach 
and then proceeding further for our final code

approach://TC-O(n!*n) for generating all subarrays and traversing through each by recursion, SC-O()
we have to tell the array[k-1] present in the permutation (since we doing in 0 based indexing)
and also it should be sorted
now n=4 means 
it would have elements from 1 to 4
for 1 , {2 3 4} - 6 permutations for this and we can also see the permutation from (0-5) will lie in this and other will be in remaining 3
2 ,{1 3 4}- same as above
3, {1 2 4} - same as above
4, {1 2 3}- same as above
total 24(4!)
and again the three element array would be broken into the 
same pattern as this is broken
so when 16(the subarray we want-its index)
first we will do 16/6=2 this will tell what would be the (16/6 done so that the remainder 4 can tell us about the first digit as 12 are occupied by 1 and 2 and then comes 3 for 13-16 and so on)
first number of subaray which we are trying to find
2 indicates first number-[3]
3 more numbers are left
now we will divide 16%6==4 and this remainder shows that
4th sequence among the sequences is the required ans(starting with 3)
and now our array becomes size of 3 and k=4(16%6==4)
so now the next number is from this array of 3 numbers
1-{2,4}-2 permutation from this(0-1) 
2-{1,4}-2 permutation from this(2-3)
4-{1,2}-2 permutation from this(4-5)
as we can see the 4th permutation starts from 4
so second number in main array is 4(3,4)
4%2==0(why 2 because one number makes 2 array combination with the other two elements)
now 1 and 2 are left
1-{2}-(0-0) as 0 th array is in this 
2-{1}-(1-1)
so third number is 1 and remaining is last number
so our answer is 3 4 1 2

now code : 
string getPermutation(int n,int k){
int fact=1;
vector<int>numbers;
for(int i=1;i<n;i++){
fact=fact*i;
numbers.push_back(i);
}
numbers.push_back(n);
string ans="";
k=k-1;
while(true){
ans=ans+to_string(numbers[k/fact]);
numbers.erase(numbers.begin()+k/fact);
if(numbers.size()==0) break;
k=k%fact;
fact=fact/number.size();
}
return ans;
}//TC-O(N)*O(N) =O(N^2) , you are looking for four numbers so O(N) and also when you pickup one element the set reduces to size-1, and deletion of one element takes N
SC-O(N) for the vector storing and returning the ans
*/
//Revised , just check the marked points once 