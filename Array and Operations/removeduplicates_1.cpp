/* 1) remove duplicates in-place from a sorted array
arr[]={1,1,2,2,2,3,3};
we will take a set (as it only allows unique integer to be contained in it)
first pass
set<int>st
for(int i=1;i<n;i++){
st.insert(arr[i]); (this whole process of insertion takes NlogN (TC))
}
then to print the index of final unique elemented array
here it goes 
index=0;
for(auto it:st){
arr[index]=it; (this whole process of iteration takes N(TC), so in total NlogN +N is our req (TC))
it++; (space complexity is O(N));
}
 note:: let's talk about the optimal solution(two pointer solution)
 let us take:
 i=0;
 for(j=1;j<n;j++){
 if(arr[j]!=arr[i]){
 arr[i+1]=arr[j];
 i++;
 }
 }
 return i+1; (this will tell the size of the array), (space complexity is O(N) and TC is O(N))
 

*/