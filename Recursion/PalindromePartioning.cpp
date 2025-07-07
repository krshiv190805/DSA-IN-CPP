/*
in this question we have to return all the subpalindromic
of a string 
for eg:
s=aabb[in total there are 3{a,a,b,b}{a,a,bb}{aa,b,b}] like in this: 
we will do first partitioning in between first a and second a
but as we can see we are not getting a palindromic sequence
second will be doing between second a and 1st b
and here we get two palindromic subseq
third we will be doing between 1st b and 2nd b 
here also no 
but when we are doing one between first a and second a and first b and second b
we will be getting a,a,b,b which is a palindrome
and this approach only we are going to do

code:
vector<vector<string>>partition(string s){
vector<vector<string>>res;
vector<string>path;
func(0,s,path,res);
return res;
}
void func(int index,string s,vector<string>&path,vector<vector<string>>&res){
if(index==s.size()){
res.push_back(path);
return;
}
for(int i=index;i<s.size();i++){
if(isPalindrome(s,index,i)){
path.push_back(s.substr(index,i-index+1));
func(i+1,s,path,res);
path.pop_back();
}
}
}
bool isPalindrome(string s,int start,int end){
while(start<=end){
if(s[start++]!=s[end--]) return false;
}
return true;
}
*/ 