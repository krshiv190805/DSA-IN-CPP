/*
in this question we have to traverse vertically in a tree
if a tree is like this , below example :
   1
 /.  \ 
 2.   3. , so we have to return 2 then 1 then 3 (2 1 3)
approach : 
we will number the columns after the root as 1 , 2 and so on 
and before one as -1 , -2 and so on
and row from root are marked as L1 , L2 and so on
we will take a Queue(node,vertical level,level(horz))
and a map<int,map<int,multiset<int>>
why we have taken multiset as it is mentioned that there may be two nodes of same value
and if at a particular level(both horz,vert) there are two nodes , so the node with less value will be printed first
a node left is (-1,+1) and right is (+1,+1)
code : 
vector<vector<int>>verticalTraversal(TreeNode*root) {
map<int,map<int,multiset<int>>nodes;
queue<pair<TreeNode*,pair<int,int>>todo;
todo.push({root,{0,0}});
while(!todo.empty()){
auto p=todo.front();
todo.pop();
TreeNode*node=p.first;
int x=p.second.first ,y=p.second.second;
nodes[x][y].insert(node->val);
if(node->left) todo.push({node->left,{x-1,y+1}});
if(node->right) todo.push({node->right,{x+1,y+1}});
}
vector<vector<int>>ans;
for(auto p : nodes) {
vector<int>col;
for(auto q : p.second) {
col.insert(col.end(),q.second.begin(),q.second.end());
}
ans.push_back(col);
}
return ans;
}
*/ 