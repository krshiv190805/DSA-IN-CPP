/*
1) this is a question in which we have to return the arrays
which sum to the target or k
arr[]={1 2 1} and sum=2;
bool printS(int ind,vector<int>&ds,int s,int sum,int arr[],int n){
if(ind==n){
if(s==sum){
for(auto it:ds) cout<<it<<" ";
cout<<endl;
return true;
}
//condition not satisfied
else return false; 
}
ds.push_back(arr[ind]);
s+=arr[ind];
if(printS(ind+1,ds,s,sum,arr,n)==true) return true;
s-=arr[ind];
ds.pop_back();
//not pick
if(printS(ind+1,ds,s,sum,arr,n)==true) return true;
return false;
}
int main(){
int arr[]={1 2 1};
int n=3;
int sum=2;
vector<int>ds;
printS(0,ds,0,sum,arr,n);
return 0;
} // in this we will only get [1,1]


in this we get both [1,1] and [2]
also we can do like this: 
void printS(int ind,vector<int>&ds,int s,int sum,int arr[],int n){
if(ind==n){
if(s==sum){
for(auto it:ds) cout<<it<<" ";
cout<<endl;
}
return ;
}
ds.push_back(arr[ind]);
s+=arr[ind];
printS(ind+1,ds,s,sum,arr,n);
s-=arr[ind];
ds.pop_back();
//not pick
printS(ind+1,ds,s,sum,arr,n);
}
int main(){
int arr[]={1 2 1};
int n=3;
int sum=2;
vector<int>ds;
printS(0,ds,0,sum,arr,n);
return 0;
}

2) in this you have to return the number of subseqeunces (basically count)
 
int printS(int ind,int s,int sum,int arr[],int n){
//condition not satisfied
//strictly done if array contains positives only
if(s>sum) return 0;
if(ind==n){
//condition satisifed
if(s==sum) return 1;
//condition not satisfied
else return 0;
}
s+=arr[ind];
int l=printS(ind+1,s,sum,arr,n);
s-=arr[ind];
//not pick
int r=printS(ind+1,s,sum,arr,n);
return l+r;
}
and rest is same 
*/