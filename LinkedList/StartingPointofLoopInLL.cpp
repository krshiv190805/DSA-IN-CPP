/*
 in this we have to return the starting point of a Loop in LL
 so to check for the starting point we will be starting for our 1st approach
 1:
 there may be a possibility that two nodes exist in that loop with the same 
 value , so to remember that we have previously visited this node 
 we will use hashing
 and then the key will be of type Node* and value will be int

 code:
 map<Node*,int>mpp,temp=head;
 while(temp!=NULL){
 if(mpp.find(temp)==true){
 return temp;
 }
 mpp.put({temp,1}), mpp[temp]=1;
 temp=temp->next;
 }
 return NULL;//TC-O(N*2*(logarithmic or constant time , depending upon the map)),SC-O(N) u end up storing all the values in the map

 approach 2:
 we will use tortoise and hare method to optimise the code
  our main approach would be 
  1) detecting if there is a loop or not
  2) and further we will check for the starting point , wherever the slow and fast pointers
  are colliding that is our starting point , since fast is moving 2 and slow is moving 1 so net thing by which distance bet them is 
  reducing is actually 1 so they will collide for sure if there is a loop present

  code:
  Node *firstNode(Node *head){//TC-O(N) and SC-O(1)
  Node* slow=head;
  Node* fast=head;
  while(fast!=NULL && fast->next!=NULL){
  slow=slow->next;
  fast=fast->next->next;
  if(slow==fast){//we got our loop
   slow=head;
   while(slow!=fast){
   slow=slow->next;
   fast=fast->next; // since the slow and fast have relative speed of 1 distance of 1 velocity units
   }
   return slow;//this is the starting point 
  }
  }
  return NULL;
  }
*/