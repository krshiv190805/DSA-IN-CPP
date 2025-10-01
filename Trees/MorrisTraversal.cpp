/*
in this we have to do morris traversal , why we are doing this to reduce the recursive stack space used in pre,post or inorder traversal
this is kind of a Threaded BT with TC - O(N) and SC-O(1)
by observation we can see that in inorder(left root right)
first we go to the left then its root then to the right
so can't we do it directly for eg:
        1
    2.     3
4.      5
            6 (take right and left)
inorder = 4 2 5 6 1 3

approach 1: 
we will directly join the connection of 6 to 1
and 4 to 2 and name it as thread and before moving to right subtree we will remove this one
case 1) left->null (of root) print()->right(its right)
case 2) before moving to the next root on the left i should mark the right most guy
on the left sub tree's next to 1 and then curr= curr->left

and when there is already a thread so remove the thread before moving to curr->right

code : 
vector<int>getInorder(TreeNode* root) {
vector<int> inorder;
TreeNode* curr=root;
while(curr!=NULL) {
if(curr->left ==NULL) {
inorder.push_back(curr->val);
curr=curr->right;
}
else {
TreeNode * prev=curr->left;
while(prev->right && prev->right != cur) {
prev= prev->right;
}
if(prev->right == NULL) {
prev->right=curr;
curr=curr->left;
}
else {
prev->right=NULL;
inorder.push_back(curr->val);
curr=curr->right;
}
}
}
return inorder;
}

for PreOrder :  root left right
vector<int>getPreorder(TreeNode* root) {
vector<int> Preorder;
TreeNode* curr=root;
while(curr!=NULL) {
if(curr->left ==NULL) {
Preorder.push_back(curr->val);
curr=curr->right;
}
else {
TreeNode * prev=curr->left;
while(prev->right && prev->right != cur) {
prev= prev->right;
}
if(prev->right == NULL) {
prev->right=curr;
Preorder.push_back(curr->val);
curr=curr->left;
}
else {
prev->right=NULL;
curr=curr->right;
}
}
}
return inorder;
}
*/