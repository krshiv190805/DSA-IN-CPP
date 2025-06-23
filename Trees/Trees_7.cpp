/*
lastly we did  preorder traversal using recursion but
if the interviewer ask you to do without the
recursion then comes this solution:
this is Itertive Inorder Traversal
code: 
vector<int>inOrderTraversaL(TreeNode*root){
stack<TreeNode*>st;
TreeNode*node=root;
vector<int>inorder;
while(true){
if(node!=NULL){
st.push(node);
node=node->left;
}
else{
if(st.empty()==true) break;
node=st.top();
st.pop();
inorder.push_back(node->val);
node=node->right;
}
}
return inorder;//TC-O(N) for the traversal and SC-O(N)[or O(height of the binary tree)] for the worst case if only have left child nodes
}
*/