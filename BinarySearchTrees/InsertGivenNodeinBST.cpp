/*
in this question we have to insert Given target node
in the tree
so we will check again left and right till we find a good position to insert at 

code : 
TreeNode* insertIntoBST(TreeNode* root,int val) {
if(root==NULL) return new TreeNode(val);
TreeNode*curr=root;
while(true) {
if(curr->val <= val) {
 if(curr->right!=NULL) curr=curr->right;
 else {
 curr->right=new TreeNode(val);
 break;
 }
 }
 else {
 if(curr->left != NULL) curr=curr->left;
 else {
 curr->left=new TreeNode(val);
 break;
 }
 }
}
 return root; //TC-O(logN base 2) for height balanced BST
}
*/