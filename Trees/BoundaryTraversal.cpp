/*
in this question we have to do the boundary traversal
like there is a tree , for eg: 
     1
    / \ 
    2  7
   /   \
  3.    8
   \.  /
   4.  9
 / \  /.\
 5 6. 10 11
 in this we have to traverse in anticlockwise like
 1-2-3-4-5-6-10-11-9-8-7-1 , throughout the boundary

 approach : 
 first we will push each node in the data structure and leave until it is a leafNode(no further children)
 and when we will ne moving to the right part we have to return in opposite manner
 9-8-7 
 so we will take a stack and then push in the stack in opposite manner 
 9 then 8 then 7
 and from this stack we will pop every element to our ds so the order is reversed

 code : 
 void addLeftBoundary(Node*root, vector<int>&res) {
 Node*curr=root->left;
 while(curr) {
 if(!isLeaf(curr)) res.push_back(curr->data);
 if(curr->left) curr=curr->left;
 else curr=curr->right;
 }
 }
 void addRightBoundary(Node*root,vector<int>&res){
 Node*curr=root->right;
 vector<int>temp;
 while(curr) {
 if(!isLeaf(curr)) temp.push_back(curr->data);
 if(curr->right) curr=curr->right;
 else curr=curr->left;
 }
 for(int i=temp.size()-1; i>=0 ; i--){
 res.push_back(tmp[i]);
 }
 }
 void addLeaves(Node*root, vector<int>&res) {
 if(!isLeaf(root)){
 res.push_back(root->data);
 return ;
 }
 if(root->left) addLeaves(root->left,res);
 if(root->right) addLeaves(root->right,res);
 }
 vector<int>printBoundary(Node*root) {
 vector<int>res;
 if(!root) return res;
 if(!isLeaf(root)) res.push_back(root->data);
 addLeftBoundary(root,res);
 addLeaves(root,res);
 addRightBoundary(root,res);
 return res; // O(H) + O(H) + O(N) , one for left , right and one for adding leaves , and SC-O(N) the auxillary space used 
 }
*/