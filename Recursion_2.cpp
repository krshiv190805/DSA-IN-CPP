/*
1) swapping in an array
fun(int i,int n, int arr[]){
if(i>=n/2) return;
swap(arr[i],arr[n-1-i]);
fun(i+1,n,arr[]);
}
int main(){
int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
fun(0,n,arr);
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}

2) check if a string is palindrome
fun(int i, string &s){
if(i>=s.size()/2) return true;
if(s[i]!= s[s.size()-1-i]) return false;
fun(i+1,s);
}
int main(){
string s ="madam";
cout<<f(0,s);
}
3) multiple recursion calls
fun(int n){
if(n<=1) return n;
int last=f(n-1);
int slast=f(n-2);
return last+slast;
}
int main(){
cout<<f(4);  (TC will be 2^n(approximately), for n it is 2 recurisve , for n-1 is 2 and so on)

}
*/