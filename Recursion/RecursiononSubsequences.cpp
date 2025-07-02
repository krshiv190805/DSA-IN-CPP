/*
in this we have to print all the subsequences 
like eg 
arr[]={3 1 2}
so total number of subsequences are 8(2^n) where n is size of the array
in a subsequence you don't need to take the continuous or adjacent elements
total subsequence=
1 
2
3
1 2
3 1 
3 2
3 1 2
{}
approach: we will use the pick and not picking logic and put it into the array
and then print it 
code:
void printF(int ind,vector<int>&ds,int arr[],int n){//TC-O(2^n * n) at every step you have two options so 2^n and iteration causes N
if(ind==n){ //SC-O(N) as the max depth of recursion tree is N so it will store max N integers in recursive stack space
for(auto it:ds){
cout<<it<<" ";
}
if(ds.size()==0){
cout<<"{}";
}
cout<<endl;
return ;
}
//not pick , not take condition , this element is not added to your subsequences
printF(ind+1,ds,arr,n);
//take or pick the particular index into the subsequence
ds.push_back(arr[ind]);
printF(ind+1,ds,arr,n);
ds.pop_back();
}
int main(){
int arr[]={3 1 2};
int n=3;
vector<int>ds;
printF(0,ds,arr,n);
return 0;
}
*/