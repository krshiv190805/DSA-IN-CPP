/*
in this we have to check whether the tree is balanced or not 
the condition is height(left)-height(right) < = 1
and this should be valid for evry node
brute force : 
Bool check(Node) {
if(node==null) return true;
lh=findHeight(node->left);
rh=findHeight(node->right);
if(abs(lh-rh)>1) return false;
bool left=check(node->left);
bool right=check(node->right);
if(left || right) return false; TC-O(N)*O(N) , one for traversal and other for finding lh and rh
return truel; // if we came out of the loop then
}
this is taking O(N^2) so we will try to optimise it to O(N)

we have to reduce TC for finding lh and rh
code  : 
bool isBalanced(TreeNode*root) {
return dfsHeight(root) !=-1;
}
int dfsHeight(TreeNode *root) { TC-O(N) for recursive traversal and SC-O(N) for auxillary stack space for a skew tree in worst case
if(root==NULL) return 0;
int lh=dfsHeight(root->left);
if(lh==-1) return -1;
int rh=dfsHeight(root->right);
if(rh==-1) return -1;
if(abs(lh-rh)>1) return -1;
return max(lr,rh)+1;
}
*/