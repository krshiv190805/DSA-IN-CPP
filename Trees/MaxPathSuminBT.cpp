/*
in this we have to return the max path sum which basically means
the sum of all the nodes in one path should be the maximum sum of that particular whole tree so now we 
have to find which is the max sum and return that
the node value can be negative so we have to take the edge cases as well
approach : 
we will try to maximise val+(max_L_sum+max_R_sum)

code : 
int maxPath(node,maxi) {
if(node==null) return 0;
leftSum=maxPath(node->left);
rightSum=maxPath(node->right);
maxi=max(maxi,leftSum+rightSUm+node->val);
return node->val + max(leftSum,rightSum);
}
there is a problem in above code that it will fail when a child node is negative in value
so to fix that we can do like this , take 0 value for that node instead of its negative value
as we have to maximise our sum

clean code : 
int maxPathSUm(TreeNode* root) {
int maxi=INT_MIN;
maxPathDown(root,maxi);
return maxi;
}
int maxPathDown(TreeNode* node,int &maxi) {
if(node==null) return 0;
int left=max(0,maxPathDown(node->left,maxi));
int right=max(0,maxPathDown(node->right,maxi));
maxi=max(maxi,left+right+node->val);
return max(left,right)+node->val;
}
*/