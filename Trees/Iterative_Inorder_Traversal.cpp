/*
in this we will do by Inorder wise(left node right), the same stack approach
code:
vector<int>inorderTraversal(TreeNode*root){
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
 return inorder;//TC-O(N) for travelling each node and SC-O(N/height of tree) for stack space , like let suppose you have all left children then you push all of them into the stack (skew tree)
 }
*/