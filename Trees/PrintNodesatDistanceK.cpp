/*
 in this question we have to print the nodes which are at a distance k from the 
 target node given in question 
 approach : 
 we will be using a Queue and pushing each nodes and knowing which node has which direct parent
 then a visited array in which we will check who are at a distance of 0 then 1 then 2 and so on till k
 this is something kind of a BFS Traversal 

 code : 
 void markParents(TreeNode * root,unordered_map<TreeNode*,TreeNode*>&parent_track,TreeNode*target) {
 queue<TreeNode*>queue;
 queue.push(root);
 while(!queue.empty()){
 TreeNode*current=queue.front();
 queue.pop();
 if(current->left){
 current_track[current->left]=current;
 queue.push(current->left);
 }
 if(current->right){
 current_track[current->right]=current;
 queue.push(current->right);
 }
 }
 }
 vector<int>distanceK(TreeNode*root,TreeNode*target,int k){
 unordered_map<TreeNode*,TreeNode*>parent_track; // node->parent
 markParents(root,parent_Track,target);
 unordered_map<TreeNode*,bool>visited;
 queue<TreeNode*>queue;
 queue.push(target);
 visited[target]=true;
 int curr_level=0;
 while(!queue.empty()){ // second bfs to go upto K level from target node and using our hashtable info
 int size=queue.size();
 if(curr_level++==k) break;
 for(int i=0;i<size;i++){
 TreeNode*current=queue.front();
 queue.pop();
 if(current->left && !visited[current->left]){
 queue.push(current->left);
 visited[current->left]=true;
 }
 if(current->right && !visited[current->right]){
 queue.push(current->right);
 visited[current->right]=true;
 }
 if(parent_track[current] && !visited[parent_track[current]]){
 queue.push(parent_track[current]);
 visited[parent_track[current]]=true;
 }
 }
 }
 vector<int>result;
 while(!queue.empty()){
 TreeNode*current=queue.front();
 queue.pop();
 result.push_back(current->val)
 }
 return result;
}
*/