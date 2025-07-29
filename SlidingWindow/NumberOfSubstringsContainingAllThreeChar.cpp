/*
in this question we will be returning the number of substrings
containing all three characters
eg: 
s=bbacba
approach:
we would be generating all the substrings and checking for it
, using a hasmap we can do it easily
code:
cnt=0;
for(i=0->n){
 hash[3]={0};
 for(j=i->n){
 hash[s[j]-'a']=1;
 if(hash[0]+hash[1]+hash[2]==3) cnt++;//TC-O(N^2) for two loops and SC-O(1)
 }
 }
 print(cnt);

 a little optmisation can be there which is shown below
 code:
 cnt=0;
for(i=0->n){
 hash[3]={0};
 for(j=i->n){
 hash[s[j]-'a']=1;
 if(hash[0]+hash[1]+hash[2]==3){
 cnt=cnt+(n-j);//TC-O(N^2) for two loops and SC-O(1)
 break;//this will reduce the complexity by some extent but not at the worst case (not good for case like aaaaaa)
 }
 }
 }
 print(cnt);

 Optimal Approach:
 with every character,there is a substring that ends
 we would be starting 
 a,b,c with -1 initially, also we would be using a lastSeen so keeping a track of what we have to do finally while adding in
 the final count
 code:
 func(s){
 lastSeen[3]={-1,-1,-1};
 cnt=0;
 for(i=0->n){
 lastSeen[s[i]-'a']=i;
 if(lastSeen[0]!=-1 && [1]!=-1 && [2]!=-1)
 cnt=cnt+(1+min(lastSeen[0],[1],[2]));
 }
 return cnt;//TC-O(N) and SC-O(1)
 }
*/