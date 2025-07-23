/*
in this we will iterate PreOrder wise
means Root Left Right wise
approach:
we will push each node in stack but not left right wise but 
right left so that when we remove it out it comes as it was there in the
original graph
code:
vector<int>preOrderTraversal(TreeNode*root){
 vector<int>preOrder;
 if(root==NULL) return preorder;
 stack<TreeNode*>st;
 st.push(root);
 while(!st.empty()){
 root=st.top();
 st.pop();
 preorder.push_back(root->val);
 if(root->right!=null) st.push(root->right);
 if(root->left!=null) st.push(root->left);
 }
 return preOrder;//TC-O(N) you are travelling for each node
 }//SC-O(N) is for when you have node and it only have right and then again same , so for stack space or height of tree
*/