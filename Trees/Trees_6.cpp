/*
this is an iterative pre order traversal
in this we will be putting each node in a stack
so in order to get a pre order traversal
first we will insert the root then right then left 
and if there is not left and right then return
code: 
vector<int>preorderTraversal(TreeNode*root){
vector<int>preorder;
if(root==NULL) return preorder;
stack<TreeNode*>st;
st.push(root);
while(!st.empty()){
root=st.top();
st.pop();
preorder.push_back(root->val);
if(root->right!=null){
st.push(root->right);
}
if(root->left!=null){
st.push(root->left);
}
}
return preorder; TC-O(N) and SC-O(N) for the worst case if the tree has only right from starting and till each branching
} or we can write SC-O(height of binary tree)
*/