/*
in this we have to return true or false depending upon the tree is 
identical or not 
approach : 
just traverse the tree for root to the last/leaf node
Code : 
bool isSame(TreeNode*p, TreeNode*q){
if(p==NULL || q==NULL) return (p==q);
return (p->val == q->val) && isSame(p->left,q->left) && isSame(p->right,q->right);
} //TC-O(N) and SC-O(N)
*/