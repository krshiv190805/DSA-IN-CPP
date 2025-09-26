/*
in this we will be given a node at the starting and we have to return the path to that 
node from root
so we will be using recursion for it , if it is there then add that
otherwise pop it from the array 
We will using Inorder traversal as it will be easy for us to explain
code : 
bool getPath(TreeNode * root,vector<int>&arr,int x){
if(!root) return false;
arr.push_back(root->val);
if(root->val == x) return true;
if(getPath(root->left,arr,x)) || getPath(root->right,arr,x)) return true;
arr.pop_back();
return false;
vector<int>Solution:: solve(TreeNode* A,int B){
vector<int>arr;
if(A==NULL) return arr;
getPath(A,arr,B);
return arr; //TC-O(N) and SC-O(H)
}
*/