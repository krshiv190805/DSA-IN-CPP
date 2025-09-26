/*
in this question we can think of two approaches 
one is recursive approach and other one is level order traversal
for recursive it will take auxillary space of O(height of tree)
and level one will take O(N)

now logic is we will do 1+ max(l,r) , 1 is done for the top most node with no parents above
code: 
int maxDepth(TreeNode*root){
if(root=NULL) return 0;
int l_height=maxDepth(root->left);
int r_height=maxDepth(root->right);
return 1+max(l_height,r_height);
}
*/