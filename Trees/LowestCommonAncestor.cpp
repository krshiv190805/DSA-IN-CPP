/*
in this question we have to find the lowest common ancestor
which means we have to return a common node whose may be left and right 
are the nodes which we will be having in the question(already given)

approach 1 :
we will use the previous question , root to node path
then track both that which node is same for both and no further node afterwards is same
but this will take O(N) and O(N) for storage of both path arrays
so to optimise this we will use another approach 

approach 2 : 
we can directly traverse and then check if the prime or main node contains one node at its left and another at its right then
it is the lowest common ancestor 
if there is null on either side then we will return the other value which is not null

code : 
TreeNode* lowestCommonAncestor(TreeNode*root,TreeNode*p,TreeNode*q){
if(root == NULL || root == p || root == q) return root;
TreeNode*left =lowestCommonAncestor(root->left,p,q);
TreeNode*right=lowestCommonAncestor(root->right,p,q);
if(left==NULL) return right;
else if(right==NULL) return left;
else return root; //TC-O(N) and SC-O(height of tree) if it's a skew tree
}
*/