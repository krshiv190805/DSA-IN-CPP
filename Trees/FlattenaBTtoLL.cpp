/*
in this we have to flatten a BT to LL 
like eg : 
           1
        2.    5
    3.    4.    6
              7
we can understand by looking at this if it is at left means left connected and vice versa

approach 1 : we got the intuition as the final answer will look like 1-2-3-4-5-6-7
and there is already 5 6 7 at right and the others on left 
so first 5 -6-7 then we will point 5->left to null
and then do it for the left part and 4 right to 5 and so on , till the recursion doesnt end 
like Right Left Root

TC-O(N) and SC-O(N)
prev = NULL;
flatten(node) {
if(node==x) return;
flatten(node->right);
flatten(node->left);
node->right=prev;
node->left= null;
prev = node;
}
now we will try to optimise the space 

approach 2 : 
we will be using a stack and then pushing each node then poping and then
will make curr->right=st.top() and its left to NULL

code : 
st.push(root);
while(!st.empty()) {
curr=st.top();
st.pop();
if(curr->right) st.push(curr->right);
if(curr->left) st.push(curr->left);
if(!st.empty()) curr->right = st.top();
curr->left = null;
} //TC-O(N) and SC-O(N) for stack space

again we will try to optimise space 

approach 3 : 

code : 
curr = root;
while(curr!=NULL) {
if(curr->left != NULL) {
prev=curr->left;
while(prev->right) prev=prev->right;
prev->right=curr->right;
curr->right= curr->left;
}
curr=curr->right;
} // TC - O(N) and SC - O(1)
*/