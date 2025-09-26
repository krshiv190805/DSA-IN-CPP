/*
in this question we will be finding largest BST
a BST is something like for a particular node the left is less and right is greater than the present node value
now we have to figure out what we are going to do
approach : 
if a particular node :
1) left should be smaller , so largest of all the nodes in the left , if it is there
it means all nodes are smaller than that and again the second condition largest_node<current_node
2) right should be greater , so smallest of all the nodes present at the right side of it 
so every node would be greater than this and second condition would be current_node<smallest of all node on right

code : 
size = 1+ x + y (x=left largest + y= right smallest)
we will put 3 parametres , (largest,smallest,size)
if it is not a BST then
size = max(left.size,right.size)
max=intmax, min =int min , we are setting this so high so that there is no comparison till the end
//TC-O(N) and SC-O(1)
class NodeValue{
int maxNode,minNode,maxSize;
NodeValue(int minNode,int maxNode,int maxSize) {
this->maxNode=maxNode;
same for other two
}
};
NodeValue largestBSTSubtreeHelper(TreeNode*root) {
if(!root) return NodeValue(INT_MAX,INT_MIN,0); // an empty tree is a BST of size 0
}
//get values from left and right subtree of current tree
auto left=largestBSTSubtreeHelper(root->left);
auto right=largestBSTSubtreeHelper(root->right);
//current node is greater than max in left and smaller than min in right
if(left.maxNode < root->val && root->val < right.minNode) {
//it is a valid BST
return NodeValue(min(root->val,left.minNode),max(root->val,right.maxNode),left.maxSize+right.maxSize+1);
}
//otherwise, return [-inf,inf] so that parent cannot be valid BST
return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
}
int largestBSTSubTree(TreeNode*root) {
return largestBSTSubTreeHelper(root).maxSize;
}
*/