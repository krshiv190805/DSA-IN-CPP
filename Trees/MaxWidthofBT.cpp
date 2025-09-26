/*
in this question we have to find the max width of Binary Tree
this means we have to find the distance between two nodes
remember two nodes , so if at a particular level there is only one node then
we will not be considering that for calculation , either we will take the level just above that one

approach 1: 
we can index them 1 by 1 and then subtract the right most - left most +1 
this will give us the number of nodes in between , 
the pattern for next left and right nodes from the root is 
for left :
2*i+1 and
for right : 
2*i+2 , just -1 if its 1 based indexing
the problem is calculating 2*i+1 again and again will overflow at some point since
there are 10^5 nodes in all at worst case
so we will think of another approach 

approach 2: 
we will only mark the root node as 0 then left by 2*i+1 an 2*i+2 
then the further left and right as again starting from 0 based means 
0 then its children as 1 and 2 and if node is 1
its children as 3 4
we will take a queue and then push the node and index/level into it and then update the level as well

code : 
int widthofBT(TreeNode*root) {
if(!root) return 0;
int ans =0;
queue<pair<TreeNode*,int>>q;
q.push({root,0});
while(!q.empty()){
int size=q.size();
int mmin=q.front().second; // to make the id starting from zero
int first,last;
for(int i=0;i<size;i++){
int curr_id=q.front().second-mmin; // to again make them 0 based and further updation
TreeNode*node=q.front().first;
q.pop();
if(i==0) first=curr_id;
if(i==size-1) last=curr_id;
if(node->left) q.push({node->left,curr_id*2+1});
if(node->right) q.push({node->right,curr_id*2+2});
}
ans= max(ans,last-first+1);
}
return ans;  // TC-O(N) for Level Order Traversal and SC-O(N) using Queue
}
*/