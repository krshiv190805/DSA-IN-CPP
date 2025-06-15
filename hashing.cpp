/* for example we take the array , {1,2,1,3,2} and we have to determine how many 
times a particular number is appearing so to code this thing 
here it looks like 
pseudo code: int fun(int n,int arr[]){
count=0; 
for(int i=0;i<n;i++){
if(arr[i]==n)
count++;
}
return count; //basically a linear search , nothing specific
why we use hashing is to reduce runtime , as when we calculate the above TC then it 
comes to be O(K*N), for K numbers we are doing it N times as loop is running n times ,  and if K=10^5 and N is also same as K , then runtime will be nearly
100s then hashing comes in to reduce this thing
IMP:
you can declare the array only of the size 10^6(segmentation fault)if its type of integer
inside main
but if you declare it globally outside main() then
it can be 1e7(10^7)
if you are declaring a boolean then inside int main
it would be 10^7 and outside main it can be upto 10^8
*/