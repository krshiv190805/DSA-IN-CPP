/*
in this we will be just searching that the element is present or not
using the same checking the left or right at each level 

code : 
TreeNode* searchBST(TreeNode * root,int val) {
while(root!=NULL && root->val !=val) {
root=val < root->val ? root->left : root->right;
 }
return root;
}
*/