/*
in this we have to tell the max element which is present in the 
tree and should be smaller or equal than the target
approach :
just check the left and right if it is small and large respectively

code : 
int floorInBst(TreeNode<int>*root,int key) {
int floor=-1;
while(root) {
if(root->val == key){
 floor=root->val;
 return floor;
}
if(key > root->val) {
floor=root->val;
}
else root=root->left;
}
return floor;
}
*/