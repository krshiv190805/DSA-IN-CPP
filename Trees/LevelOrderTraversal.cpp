/*
this is a levelorder traversal 
in which we will traverse by level
 first we would be taking a queue data strucutre
 and then pushing the node one by one 
 if the tree has either of left or a right
 then remove it level wise and then pushing into ans data structure which is
 list of list
 code:
 vector<vector<int>>levelOrder(TreeNode*root){
 vector<vector<int>>ans;
 if(root==NULL) return ans;
 queue<TreeNode*>q;
 q.push(root);
 while(!q.empty()){
 int size=q.size();
 vector<int>level;
 for(int i=0;i<size;i++){
 TreeNode*node=q.front();
 q.pop();
 if(node->left!=null) q.push(node->left);
 if(node->right!=null) q.push(node->right);
 }
 ans.push_back(level); //TC-O(N)[due to traversal of all the nodes] and SC-O(N)[store all the elements of queue]
 }
 return ans;
 }
*/