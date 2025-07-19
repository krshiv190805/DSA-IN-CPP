/*
in this question we have to tell length of the longest substring
with atmost K distinct char
eg: 
s=aaabbccd, k=2
aproach 1: 
we will use map ds and keep a track record of distinct elements
if it exceeds the given value of k
we'll break
code:
for(string,k){
 maxlen=0,mpp<char,int>;
 for(int i=0->n){
   mpp.clear();//if map has any elements then first clear it
   for(j=i->n){
   mpp[s[j]]++;
   if(mpp.size()<=k) maxlen=max(maxlen,j-i+1);
   else break;
   }
 }
   return maxlen;
  }//TC-O(N^2)*log(256) for two loops and other one is such that string all distinct char (acc to ascii)-insertion, SC-O(256)

  approach 2: since the above approach consist of high TC so we have to optimise
  we will be trying it to optimise it making it O(N), using Two pointer
  first we will use the map ds and keep track record of maxlen
  and updating it if it satisfy(<=k) condition and moving l and r pointers

  code: 
  func(string,k){
  maxlen=0,l=0,r=0,mpp<char,int>;
  while(r<s.size()){
  mpp[s[r]]++;
  while(mpp.size()>k){//use if in place of while to reduce one O(N)
  hash[s[l]]--;
  if(hash[s[l]]==0) mpp.erase(mpp[s[l]]);
  l=l+1;
  }
  if(mpp.size()<=k) maxlen=max(maxlen,r-l+1);
  r=r+1;
  }
  return maxlen;
  }//TC-O(N)+O(N)+O(log 256)-one is for first while loop , second one is we can 
  all substring add upto length of the total string means N and third one is for insertion of char
 SC-O(256)-same as above

 now we have to optimise one while loop that is the second one 
 we can replace while with if , it overall means that only if it is >k then remove it at once
  */