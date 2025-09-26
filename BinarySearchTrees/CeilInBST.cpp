/*
in this you have to return the min element greater than or equal to
target/key(here it is key)
if it is given 11 nd 11 is already in the tree then return 11
else search for 12 and so on

code : 
int findCeil(BinaryTreeNode<int>*root,int key){
int ceil=-1;
while(root) {
if(root->data==key) {
ceil = root->data;
return ceil;
}
if(key>root->data) root=root->right;
else{
ceil = root->data;
root=root->left;
}
}
return ceil;
}
*/