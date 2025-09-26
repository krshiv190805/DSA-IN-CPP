/*
like there is a tree in which we have to traverse in 
zig zag manner , 
eg : 
    1
  / \
  2  3
/ \  \
4 5   6
in this we will traversing from left to right in L1
1 
then from right to left in L2
 3 to 2
 then left to right in L3
 4 to 5 to 6
 approach : 
 we will keep a bool flag which will change on changing the level 
 , we will use a queue and then pushing each into the queue and change the flag after each level

 code : 
 vector<vector<int>>zigzagLevelOrder(TreeNode*root) {
 vector<vector<int>>result;
 if(root==NULL) return result;
 queue<TreeNode*>nodesQueue;
 nodesQueue.push(root);
 bool leftToRight=true;
 while(!nodesQueue.empty()){
 int size=nodesQueue.size();
 vector<int>row(size);
 for(int i=0;i<size;i++) {
 TreeNode*node=nodesQueue.front();
 nodesQueue.pop();
 //find position to fill node's value
 int index=(leftToRight) ? i: (size-1-i);
 row[index]=node->val;
 if(node->left) nodesQueue.push(node->left);
 if(node->right) nodesQueue.push(node->right);
}
 //after this level
 leftToRight=!leftToRight ; //or may be false
 result.push_back(row);
 }
 return result;

 }
*/