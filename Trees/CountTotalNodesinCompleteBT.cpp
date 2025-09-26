/*
in this question , we have to return the total number of nodes in a 
BT , first it seems to be easy but we have to do this in TC less than O(N)
means we can't use any pre,post,inordeer or level order traversals
one more thing is a complete binary tree is it can have it lowest levels unfilled or at max 2 filled(not 1)
approach :
first we will be comparing the height of left and right sub trees
then we will check if they are equal , then total number of nodes is 2^height -1
else if they are not equal it means one tree has height more and other is less
so by the help of recursion we can calculate the total nodes for individual sub trees and then
add them + 1 for root
//TC-O(logN)^2 and SC-O(logN)

code : 
int countNodes(TreeNode*root) {
if(root==NULL) return 0;
int lh=findHeightLeft(root);
int rh=findHeightRight(root);
if(lh==rh) return (1<<lh)-1; // 1<<lh means pow(2,lh) since both are O(1) but bitwise is little faster than pow
return 1+countNodes(root->left)+countNodes(root->right);
 }
int findHeightLeft(TreeNode*node) {
int h=0;
while(node) {
h++;
node=node->left;
}
return h;
}
int findHeightRight(TreeNode*node) {
int h=0;
while(node) {
h++;
node=node->right;
}
return h;
}
// The height of tree for any instance will not be more than logN and logN will be for traversing in the worst case
// recursive space can go to height of tree which is LogN
*/