/*
in this question we have to make the Tree follow
children sum property as it means the child node (both left and right) should
sum to the parent node and we can also increase any node by 1 as many number of times

approach : 
we will traverse till the last Node and update the nodes as the max node in it because we can increase the value of nodes
but can't decrease so inc won't affect our code 

code : //TC-O(N) for recursive traversal of each Node and SC-O(H) for worst case of a skew Tree
void changeTree(BinaryTreeNode<int>*root){
if(root==NULL) return;
int child=0;
if(root->left) {
child+=root->left->data;
}
if(root->right){
child+=root->right->data;
}
if(child>= root->data) root->data=child;
else{
if(root->left) root->left->data=root->data;
else if(root->right) root->right->data=root->data;
}
ChangeTree(root->left);
ChangeTree(root->right);
int total=0;
if(root->left) total+=root->left->data;
if(root->right) total+=root->right->data;
if(root->left || root->right) root->data=total;
}
*/