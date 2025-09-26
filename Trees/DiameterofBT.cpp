/*
in this we have to find the diamter of BT
a diameter is from node to another node anywhere , what is the total sum of paths in between
and we have to return the longest path possible in a BT
 brute force : 
 findMax(node){
 if(root==NULL) return ;
 lh=findleftH(node->left);
 rh=findrightH(node->right);
 max=max(maxi,lh+rh); // maxi=0 initially
 findMax(node->left);
 findMax(node->right); // TC - O(N) * O(N) this will end up taking N^2 
 }
 we will try to optimise
 code : 
 we will use the same height method here , first we calculate height 
 then further proceed

 code : 
 int findMax(node,maxi) {
 if(node==NULL) return 0;
 lh=findMax(node->left,maxi);
 rh=findMax(node->right,maxi);
 maxi=max(maxi,lh+rh);
 return 1+max(lh,rh);
 }
 clean code : 
 int diameterofBT(TreeNode*root) {
 int diameter =0;
 height(root,diamter);
 return diamter;
 }
 int height(TreeNode *node,int &diameter) {
 if(!node) return 0;
 int lh=height(node->left,diameter);
 int rh=height(node->right,diameter);
 diameter = max(diameter,lh+rh);
 return 1+max(lh,rh); // TC-O(N) and SC-O(N) for skew tree worst case
 }
*/