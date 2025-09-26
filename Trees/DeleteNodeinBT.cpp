/*
in this we have to delete a Binary Search Tree and then
return the root
you will be given a target node
this node you have to delete and again you have see that the basic condition
for bst is not violating

approach : 
we can think that we are removing that node it's left and right should be same as the original bst 
left less and right greater than the main root of sub tree
main root->left = node_to_be_deleted->left(if root->val>target)
go to the max right and then 
maxright_node->right=node_to_be_deleted->right

code : 
TreeNode * deleteNode(TreeNode* root, int key) {
if(root==NULL) return NULL;
if(root->val== key) rerturn helper(root);
TreeNode * dummy= root;
while(root!=NULL) {
if(root->val > key) {
if(root->left !=NULL && root->left->val == key) {
root->left=helper(root->left);
break;
}
else root=root->left'
}
else {
if(root->right != NULL && root->right->val == key) {
root->right = helper(root->right);
break;
}
else root= root->right;
}
}
return dummy;
}
TreeNode* helper(TreeNode* root) {
if(root->left == NULL) return root->right;
TreeNode* rightChild= root->right;
TreeNode* lastRight=findLastRight(root->left);
lastRight->right=rightChild;
return root->left;
}
TreeNode*
*/