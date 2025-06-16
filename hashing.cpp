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
 now code for character hashing:
 int main(){
 string s;
 cin>>s;
 int hash[26]={0}; // also you can do hash[256]={0} but then 
 for(int i=0;i<s.size();i++){
 hash[s[i]-'a']++;//if you write the above one then hash[s[i]++]
 }
 int q;
 cin>>q;
 while(q--){
 char c;
 cin>>c;
 cout<<hash[c-'a']<<endl;//hash[c]
 }
 }
  IMPORTANT: now about map
  map is a data structure which stores key and value 
  and they can be of any type 
  code :
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  map<int,int>mpp;
  for(int i=0;i<n;i++){
  mpp[arr[i]]++;
  }
  for(auto it:mpp){
  cout<<it.first<<"->"<<it.second<<endl;
  }

  int q;
  cin>>q;
  while(q--){
  int number;
  cin>>number;
  cout<<mpp[number]<<endl;
  }

  Very Important:
  time complexity for a map : 
  for storing and fetching it takes Log(N) in its best average and worst case
  and unordered_map takes O(1) at its average and best for storing and fetching
  and at its worst it takes O(N)[this happens very low]
  N=number of elements in map

Hashing is of three types :
1) division method
2)folding method
3)mid square method
the interviewer will not ask you about these just 
know the meanning of collisions and understand it properly
1) in this you divide the elements of the array by 10
and mark the array whose index is what the remainder is(for eg: 139%10=9)
mark 9th index:
now the problem is
if there are so many number whose remainder to 10 is same
so they will be stored at a particular index in soted manner 
by chain, so collisions will happen if only a particular index is 
filling not any other
also in unordered map you cannot store the key in all the possible ways(like int , float etc)
but in ordered map you can

*/